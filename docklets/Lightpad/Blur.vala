namespace LightPad.Frontend {    
    /*
    * Notes:
    *   based on exponential-blur algorithm by Jani Huhtanen
    */
    public void blurinner(uchar* pixel, int *zR, int *zG, int *zB, int *zA, int alpha, int aprec, int zprec) {
        int R;
        int G;
        int B;
        uchar A;

        R = *pixel;
        G = *(pixel + 1);
        B = *(pixel + 2);
        A = *(pixel + 3);

        *zR += (alpha * ((R << zprec) - *zR)) >> aprec;
        *zG += (alpha * ((G << zprec) - *zG)) >> aprec;
        *zB += (alpha * ((B << zprec) - *zB)) >> aprec;
        *zA += (alpha * ((A << zprec) - *zA)) >> aprec;
      
        *pixel       = *zR >> zprec;
        *(pixel + 1) = *zG >> zprec;
        *(pixel + 2) = *zB >> zprec;
        *(pixel + 3) = *zA >> zprec;
    }

    public void blurrow(uchar* pixels, int width, int height, int rowstride, int channels, int line, int alpha, int aprec, int zprec) {
        int    zR;
        int    zG;
        int    zB;
        int    zA;
        int    index;
        uchar* scanline;

        scanline = &pixels[line * rowstride];

        zR = *scanline << zprec;
        zG = *(scanline + 1) << zprec;
        zB = *(scanline + 2) << zprec;
        zA = *(scanline + 3) << zprec;

        for (index = 0; index < width; index ++)
            blurinner (&scanline[index * channels], &zR, &zG, &zB, &zA, alpha, aprec, zprec);

        for (index = width - 2; index >= 0; index--)
            blurinner (&scanline[index * channels], &zR, &zG, &zB, &zA, alpha, aprec, zprec);
    }

    public void blurcol(uchar* pixels, int width, int height, int rowstride, int channels, int x, int alpha, int aprec, int zprec) {
        int zR;
        int zG;
        int zB;
        int zA;
        int index;
        uchar* ptr;

        ptr = pixels;
        ptr += x * channels;

        zR = *((uchar*) ptr    ) << zprec;
        zG = *((uchar*) ptr + 1) << zprec;
        zB = *((uchar*) ptr + 2) << zprec;
        zA = *((uchar*) ptr + 3) << zprec;

        for (index = 0; index < height; index++)
            blurinner (&ptr[index * rowstride], &zR, &zG, &zB, &zA, alpha, aprec, zprec);

        for (index = height - 2; index >= 0; index--)
            blurinner (&ptr[index * rowstride], &zR, &zG, &zB, &zA, alpha, aprec, zprec);
    }

    /*
    * _expblur:
    * @pixels: image data
    * @width: image width
    * @height: image height
    * @rowstride: image rowstride
    * @channels: image channels
    * @radius: kernel radius
    * @aprec: precision of alpha parameter in fixed-point format 0.aprec
    * @zprec: precision of state parameters zR,zG,zB and zA in fp format 8.zprec
    *
    * Performs an in-place blur of image data “pixels”
    * with kernel of approximate radius “radius”.
    *
    * Blurs with two sided exponential impulse response.
    *
    */
    public void expblur(uchar* pixels, int width, int height, int rowstride, int channels, double radius, int aprec, int zprec) {
        int alpha;
        int row, col;

        /* Calculate the alpha such that 90% of
        * the kernel is within the radius.
        * (Kernel extends to infinity) */
        alpha = (int) ((1 << aprec) * (1.0f - Math.expf ((float)(-2.3 / (radius + 1.0)))));

        for (row = 0; row < height; row++)
            blurrow (pixels, width, height, rowstride, channels, row, alpha, aprec, zprec);

        for(col = 0; col < width; col++)
            blurcol (pixels, width, height, rowstride, channels, col, alpha, aprec, zprec);
    }

    /*
    * _gtk_cairo_blur_surface:
    * @surface: a cairo image surface.
    * @radius: the blur radius.
    *
    * Blurs the cairo image surface at the given radius.
    */
    public void gtk_cairo_blur_surface(Cairo.Surface* surface, double radius) {
        Cairo.Format format;

        return_if_fail(surface != null);
        return_if_fail(((Cairo.Surface)surface).get_type() == Cairo.SurfaceType.IMAGE);

        format = ((Cairo.ImageSurface)surface).get_format();
        return_if_fail(format == Cairo.Format.RGB24 || format == Cairo.Format.ARGB32);

        if (radius == 0) {
            return;
        }

        /* Before we mess with the surface execute any pending drawing. */
        ((Cairo.Surface)surface).flush();

        expblur(((Cairo.ImageSurface)surface).get_data(),
        ((Cairo.ImageSurface)surface).get_width(),
        ((Cairo.ImageSurface)surface).get_height(),
        ((Cairo.ImageSurface)surface).get_stride(),
        4, radius, 16, 7);

        /* Inform cairo we altered the surfaces contents. */
        ((Cairo.Surface)surface).mark_dirty();
    }

    /**
    * _gtk_cairo_blur_compute_pixels:
    * @radius: the radius to compute the pixels for
    *
    * Computes the number of pixels necessary to extend an image in one
    * direction to hold the image with shadow.
    *
    * This is just the number of pixels added by the blur radius, shadow
    * offset and spread are not included.
    *
    * Much of this, the 3 * sqrt(2 * pi) / 4, is the known value for
    * approximating a Gaussian using box blurs.  This yields quite a good
    * approximation for a Gaussian.  Then we multiply this by 1.5 since our
    * code wants the radius of the entire triple-box-blur kernel instead of
    * the diameter of an individual box blur.  For more details, see:
    * http://www.w3.org/TR/SVG11/filters.html#feGaussianBlurElement
    * https://bugzilla.mozilla.org/show_bug.cgi?id=590039#c19
    */
    public int gtk_cairo_blur_compute_pixels(double radius) {
        double GAUSSIAN_SCALE_FACTOR = (3.0 * Math.sqrt(2 * Math.PI) / 4) * 1.5;
        return (int)Math.floor(radius * GAUSSIAN_SCALE_FACTOR + 0.5);
    }
}