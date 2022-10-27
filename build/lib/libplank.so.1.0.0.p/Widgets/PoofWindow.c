/* PoofWindow.c generated by valac 0.48.17, the Vala compiler
 * generated from PoofWindow.vala, do not modify */

/**/
/*  Copyright (C) 2011-2012 Robert Dyer, Rico Tzschichholz*/
/**/
/*  This file is part of Plank.*/
/**/
/*  Plank is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  Plank is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <glib.h>
#include <cairo-gobject.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>

#define PLANK_TYPE_COMPOSITED_WINDOW (plank_composited_window_get_type ())
#define PLANK_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_COMPOSITED_WINDOW, PlankCompositedWindow))
#define PLANK_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_COMPOSITED_WINDOW, PlankCompositedWindowClass))
#define PLANK_IS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_COMPOSITED_WINDOW))
#define PLANK_IS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_COMPOSITED_WINDOW))
#define PLANK_COMPOSITED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_COMPOSITED_WINDOW, PlankCompositedWindowClass))

typedef struct _PlankCompositedWindow PlankCompositedWindow;
typedef struct _PlankCompositedWindowClass PlankCompositedWindowClass;
typedef struct _PlankCompositedWindowPrivate PlankCompositedWindowPrivate;

#define PLANK_TYPE_POOF_WINDOW (plank_poof_window_get_type ())
#define PLANK_POOF_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_POOF_WINDOW, PlankPoofWindow))
#define PLANK_POOF_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_POOF_WINDOW, PlankPoofWindowClass))
#define PLANK_IS_POOF_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_POOF_WINDOW))
#define PLANK_IS_POOF_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_POOF_WINDOW))
#define PLANK_POOF_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_POOF_WINDOW, PlankPoofWindowClass))

typedef struct _PlankPoofWindow PlankPoofWindow;
typedef struct _PlankPoofWindowClass PlankPoofWindowClass;
typedef struct _PlankPoofWindowPrivate PlankPoofWindowPrivate;
enum  {
	PLANK_POOF_WINDOW_0_PROPERTY,
	PLANK_POOF_WINDOW_NUM_PROPERTIES
};
static GParamSpec* plank_poof_window_properties[PLANK_POOF_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _PlankCompositedWindow {
	GtkWindow parent_instance;
	PlankCompositedWindowPrivate * priv;
};

struct _PlankCompositedWindowClass {
	GtkWindowClass parent_class;
};

struct _PlankPoofWindow {
	PlankCompositedWindow parent_instance;
	PlankPoofWindowPrivate * priv;
};

struct _PlankPoofWindowClass {
	PlankCompositedWindowClass parent_class;
};

struct _PlankPoofWindowPrivate {
	GdkPixbuf* poof_image;
	gint poof_size;
	gint poof_frames;
	gint64 start_time;
	gint64 frame_time;
	guint animation_timer_id;
};

static gint PlankPoofWindow_private_offset;
static gpointer plank_poof_window_parent_class = NULL;
static PlankPoofWindow* plank_poof_window_instance;
static PlankPoofWindow* plank_poof_window_instance = NULL;

GType plank_composited_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankCompositedWindow, g_object_unref)
GType plank_poof_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankPoofWindow, g_object_unref)
#define PLANK_POOF_WINDOW_RUN_LENGTH (300 * 1000)
PlankPoofWindow* plank_poof_window_get_default (void);
PlankPoofWindow* plank_poof_window_new (void);
PlankPoofWindow* plank_poof_window_construct (GType object_type);
void plank_poof_window_show_at (PlankPoofWindow* self,
                                gint x,
                                gint y);
void plank_logger_verbose (const gchar* msg,
                           ...);
static gboolean __lambda59_ (PlankPoofWindow* self);
static gboolean ___lambda59__gsource_func (gpointer self);
static gboolean plank_poof_window_real_draw (GtkWidget* base,
                                      cairo_t* cr);
static GObject * plank_poof_window_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
#define PLANK_G_RESOURCE_PATH "/net/launchpad/plank"
static void plank_poof_window_finalize (GObject * obj);
static GType plank_poof_window_get_type_once (void);

static inline gpointer
plank_poof_window_get_instance_private (PlankPoofWindow* self)
{
	return G_STRUCT_MEMBER_P (self, PlankPoofWindow_private_offset);
}

PlankPoofWindow*
plank_poof_window_get_default (void)
{
	PlankPoofWindow* _tmp0_;
	PlankPoofWindow* _tmp2_;
	PlankPoofWindow* result = NULL;
#line 34 "../lib/Widgets/PoofWindow.vala"
	_tmp0_ = plank_poof_window_instance;
#line 34 "../lib/Widgets/PoofWindow.vala"
	if (_tmp0_ == NULL) {
#line 137 "PoofWindow.c"
		PlankPoofWindow* _tmp1_;
#line 35 "../lib/Widgets/PoofWindow.vala"
		_tmp1_ = plank_poof_window_new ();
#line 35 "../lib/Widgets/PoofWindow.vala"
		g_object_ref_sink (_tmp1_);
#line 35 "../lib/Widgets/PoofWindow.vala"
		_g_object_unref0 (plank_poof_window_instance);
#line 35 "../lib/Widgets/PoofWindow.vala"
		plank_poof_window_instance = _tmp1_;
#line 147 "PoofWindow.c"
	}
#line 37 "../lib/Widgets/PoofWindow.vala"
	_tmp2_ = plank_poof_window_instance;
#line 37 "../lib/Widgets/PoofWindow.vala"
	result = _tmp2_;
#line 37 "../lib/Widgets/PoofWindow.vala"
	return result;
#line 155 "PoofWindow.c"
}

/**
 * Creates a new poof window at the screen-relative coordinates specified.
 */
PlankPoofWindow*
plank_poof_window_construct (GType object_type)
{
	PlankPoofWindow * self = NULL;
#line 54 "../lib/Widgets/PoofWindow.vala"
	self = (PlankPoofWindow*) g_object_new (object_type, "type", GTK_WINDOW_TOPLEVEL, "type-hint", GDK_WINDOW_TYPE_HINT_DOCK, NULL);
#line 52 "../lib/Widgets/PoofWindow.vala"
	return self;
#line 169 "PoofWindow.c"
}

PlankPoofWindow*
plank_poof_window_new (void)
{
#line 52 "../lib/Widgets/PoofWindow.vala"
	return plank_poof_window_construct (PLANK_TYPE_POOF_WINDOW);
#line 177 "PoofWindow.c"
}

/**
 * Show the animated poof-window at the given coordinates
 *
 * @param x the x position of the poof window
 * @param y the y position of the poof window
 */
static gboolean
__lambda59_ (PlankPoofWindow* self)
{
	gboolean result = FALSE;
#line 107 "../lib/Widgets/PoofWindow.vala"
	self->priv->frame_time = g_get_monotonic_time ();
#line 109 "../lib/Widgets/PoofWindow.vala"
	if ((self->priv->frame_time - self->priv->start_time) <= ((gint64) PLANK_POOF_WINDOW_RUN_LENGTH)) {
#line 110 "../lib/Widgets/PoofWindow.vala"
		gtk_widget_queue_draw ((GtkWidget*) self);
#line 111 "../lib/Widgets/PoofWindow.vala"
		result = TRUE;
#line 111 "../lib/Widgets/PoofWindow.vala"
		return result;
#line 200 "PoofWindow.c"
	}
#line 114 "../lib/Widgets/PoofWindow.vala"
	self->priv->animation_timer_id = 0U;
#line 115 "../lib/Widgets/PoofWindow.vala"
	gtk_widget_hide ((GtkWidget*) self);
#line 116 "../lib/Widgets/PoofWindow.vala"
	result = FALSE;
#line 116 "../lib/Widgets/PoofWindow.vala"
	return result;
#line 210 "PoofWindow.c"
}

static gboolean
___lambda59__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda59_ ((PlankPoofWindow*) self);
#line 106 "../lib/Widgets/PoofWindow.vala"
	return result;
#line 220 "PoofWindow.c"
}

void
plank_poof_window_show_at (PlankPoofWindow* self,
                           gint x,
                           gint y)
{
	gboolean _tmp0_ = FALSE;
	GdkPixbuf* _tmp1_;
#line 90 "../lib/Widgets/PoofWindow.vala"
	g_return_if_fail (self != NULL);
#line 92 "../lib/Widgets/PoofWindow.vala"
	if (self->priv->animation_timer_id > 0U) {
#line 93 "../lib/Widgets/PoofWindow.vala"
		g_source_remove (self->priv->animation_timer_id);
#line 236 "PoofWindow.c"
	}
#line 95 "../lib/Widgets/PoofWindow.vala"
	_tmp1_ = self->priv->poof_image;
#line 95 "../lib/Widgets/PoofWindow.vala"
	if (_tmp1_ == NULL) {
#line 95 "../lib/Widgets/PoofWindow.vala"
		_tmp0_ = self->priv->poof_frames > 0;
#line 244 "PoofWindow.c"
	} else {
#line 95 "../lib/Widgets/PoofWindow.vala"
		_tmp0_ = FALSE;
#line 248 "PoofWindow.c"
	}
#line 95 "../lib/Widgets/PoofWindow.vala"
	if (_tmp0_) {
#line 96 "../lib/Widgets/PoofWindow.vala"
		return;
#line 254 "PoofWindow.c"
	}
#line 98 "../lib/Widgets/PoofWindow.vala"
	plank_logger_verbose ("Show animation: size = %ipx, frame-count = %i, duration = %ims", self->priv->poof_size, self->priv->poof_frames, PLANK_POOF_WINDOW_RUN_LENGTH / 1000, NULL);
#line 100 "../lib/Widgets/PoofWindow.vala"
	self->priv->start_time = g_get_monotonic_time ();
#line 101 "../lib/Widgets/PoofWindow.vala"
	self->priv->frame_time = self->priv->start_time;
#line 103 "../lib/Widgets/PoofWindow.vala"
	gtk_widget_show ((GtkWidget*) self);
#line 104 "../lib/Widgets/PoofWindow.vala"
	gtk_window_move ((GtkWindow*) self, x - (self->priv->poof_size / 2), y - (self->priv->poof_size / 2));
#line 106 "../lib/Widgets/PoofWindow.vala"
	self->priv->animation_timer_id = gdk_threads_add_timeout ((guint) 30, ___lambda59__gsource_func, self);
#line 268 "PoofWindow.c"
}

static gboolean
plank_poof_window_real_draw (GtkWidget* base,
                             cairo_t* cr)
{
	PlankPoofWindow * self;
	GdkPixbuf* _tmp0_;
	gboolean result = FALSE;
#line 120 "../lib/Widgets/PoofWindow.vala"
	self = (PlankPoofWindow*) base;
#line 120 "../lib/Widgets/PoofWindow.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 122 "../lib/Widgets/PoofWindow.vala"
	cairo_set_operator (cr, CAIRO_OPERATOR_SOURCE);
#line 123 "../lib/Widgets/PoofWindow.vala"
	_tmp0_ = self->priv->poof_image;
#line 123 "../lib/Widgets/PoofWindow.vala"
	gdk_cairo_set_source_pixbuf (cr, _tmp0_, (gdouble) 0, (gdouble) ((-self->priv->poof_size) * ((gint) ((self->priv->poof_frames * (self->priv->frame_time - self->priv->start_time)) / ((gdouble) PLANK_POOF_WINDOW_RUN_LENGTH)))));
#line 124 "../lib/Widgets/PoofWindow.vala"
	cairo_paint (cr);
#line 126 "../lib/Widgets/PoofWindow.vala"
	result = GDK_EVENT_STOP;
#line 126 "../lib/Widgets/PoofWindow.vala"
	return result;
#line 294 "PoofWindow.c"
}

static GObject *
plank_poof_window_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	PlankPoofWindow * self;
	GError* _inner_error0_ = NULL;
#line 57 "../lib/Widgets/PoofWindow.vala"
	parent_class = G_OBJECT_CLASS (plank_poof_window_parent_class);
#line 57 "../lib/Widgets/PoofWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 57 "../lib/Widgets/PoofWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_POOF_WINDOW, PlankPoofWindow);
#line 59 "../lib/Widgets/PoofWindow.vala"
	gtk_window_set_accept_focus ((GtkWindow*) self, FALSE);
#line 60 "../lib/Widgets/PoofWindow.vala"
	gtk_widget_set_can_focus ((GtkWidget*) self, FALSE);
#line 61 "../lib/Widgets/PoofWindow.vala"
	gtk_window_set_keep_above ((GtkWindow*) self, TRUE);
#line 318 "PoofWindow.c"
	{
		GdkPixbuf* _tmp0_ = NULL;
		gchar* _tmp1_;
		gchar* _tmp2_;
		GdkPixbuf* _tmp3_;
		GdkPixbuf* _tmp4_;
		GdkPixbuf* _tmp5_;
		GdkPixbuf* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		GdkPixbuf* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp1_ = g_strdup_printf ("%s/img/poof.svg", PLANK_G_RESOURCE_PATH);
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp2_ = _tmp1_;
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp3_ = gdk_pixbuf_new_from_resource (_tmp2_, &_inner_error0_);
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp4_ = _tmp3_;
#line 64 "../lib/Widgets/PoofWindow.vala"
		_g_free0 (_tmp2_);
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp0_ = _tmp4_;
#line 64 "../lib/Widgets/PoofWindow.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 346 "PoofWindow.c"
			goto __catch0_g_error;
		}
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp5_ = _tmp0_;
#line 64 "../lib/Widgets/PoofWindow.vala"
		_tmp0_ = NULL;
#line 64 "../lib/Widgets/PoofWindow.vala"
		_g_object_unref0 (self->priv->poof_image);
#line 64 "../lib/Widgets/PoofWindow.vala"
		self->priv->poof_image = _tmp5_;
#line 65 "../lib/Widgets/PoofWindow.vala"
		_tmp6_ = self->priv->poof_image;
#line 65 "../lib/Widgets/PoofWindow.vala"
		_tmp7_ = gdk_pixbuf_get_width (_tmp6_);
#line 65 "../lib/Widgets/PoofWindow.vala"
		_tmp8_ = _tmp7_;
#line 65 "../lib/Widgets/PoofWindow.vala"
		self->priv->poof_size = _tmp8_;
#line 66 "../lib/Widgets/PoofWindow.vala"
		_tmp9_ = self->priv->poof_image;
#line 66 "../lib/Widgets/PoofWindow.vala"
		_tmp10_ = gdk_pixbuf_get_height (_tmp9_);
#line 66 "../lib/Widgets/PoofWindow.vala"
		_tmp11_ = _tmp10_;
#line 66 "../lib/Widgets/PoofWindow.vala"
		self->priv->poof_frames = (gint) floor ((gdouble) (_tmp11_ / self->priv->poof_size));
#line 67 "../lib/Widgets/PoofWindow.vala"
		g_debug ("PoofWindow.vala:67: Loaded animation: size = %ipx, frame-count = %i, d" \
"uration = %ims", self->priv->poof_size, self->priv->poof_frames, PLANK_POOF_WINDOW_RUN_LENGTH / 1000);
#line 63 "../lib/Widgets/PoofWindow.vala"
		_g_object_unref0 (_tmp0_);
#line 377 "PoofWindow.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp12_;
		const gchar* _tmp13_;
#line 63 "../lib/Widgets/PoofWindow.vala"
		e = _inner_error0_;
#line 63 "../lib/Widgets/PoofWindow.vala"
		_inner_error0_ = NULL;
#line 69 "../lib/Widgets/PoofWindow.vala"
		_g_object_unref0 (self->priv->poof_image);
#line 69 "../lib/Widgets/PoofWindow.vala"
		self->priv->poof_image = NULL;
#line 70 "../lib/Widgets/PoofWindow.vala"
		_tmp12_ = e;
#line 70 "../lib/Widgets/PoofWindow.vala"
		_tmp13_ = _tmp12_->message;
#line 70 "../lib/Widgets/PoofWindow.vala"
		g_critical ("PoofWindow.vala:70: Unable to load poof animation image: %s", _tmp13_);
#line 63 "../lib/Widgets/PoofWindow.vala"
		_g_error_free0 (e);
#line 401 "PoofWindow.c"
	}
	__finally0:
#line 63 "../lib/Widgets/PoofWindow.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 63 "../lib/Widgets/PoofWindow.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 63 "../lib/Widgets/PoofWindow.vala"
		g_clear_error (&_inner_error0_);
#line 410 "PoofWindow.c"
	}
#line 73 "../lib/Widgets/PoofWindow.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, self->priv->poof_size, self->priv->poof_size);
#line 57 "../lib/Widgets/PoofWindow.vala"
	return obj;
#line 416 "PoofWindow.c"
}

static void
plank_poof_window_class_init (PlankPoofWindowClass * klass,
                              gpointer klass_data)
{
#line 26 "../lib/Widgets/PoofWindow.vala"
	plank_poof_window_parent_class = g_type_class_peek_parent (klass);
#line 26 "../lib/Widgets/PoofWindow.vala"
	g_type_class_adjust_private_offset (klass, &PlankPoofWindow_private_offset);
#line 26 "../lib/Widgets/PoofWindow.vala"
	((GtkWidgetClass *) klass)->draw = (gboolean (*) (GtkWidget*, cairo_t*)) plank_poof_window_real_draw;
#line 26 "../lib/Widgets/PoofWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = plank_poof_window_constructor;
#line 26 "../lib/Widgets/PoofWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = plank_poof_window_finalize;
#line 433 "PoofWindow.c"
}

static void
plank_poof_window_instance_init (PlankPoofWindow * self,
                                 gpointer klass)
{
#line 26 "../lib/Widgets/PoofWindow.vala"
	self->priv = plank_poof_window_get_instance_private (self);
#line 44 "../lib/Widgets/PoofWindow.vala"
	self->priv->start_time = 0LL;
#line 45 "../lib/Widgets/PoofWindow.vala"
	self->priv->frame_time = 0LL;
#line 47 "../lib/Widgets/PoofWindow.vala"
	self->priv->animation_timer_id = 0U;
#line 448 "PoofWindow.c"
}

static void
plank_poof_window_finalize (GObject * obj)
{
	PlankPoofWindow * self;
#line 26 "../lib/Widgets/PoofWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_POOF_WINDOW, PlankPoofWindow);
#line 78 "../lib/Widgets/PoofWindow.vala"
	if (self->priv->animation_timer_id > 0U) {
#line 79 "../lib/Widgets/PoofWindow.vala"
		g_source_remove (self->priv->animation_timer_id);
#line 80 "../lib/Widgets/PoofWindow.vala"
		self->priv->animation_timer_id = 0U;
#line 463 "PoofWindow.c"
	}
#line 40 "../lib/Widgets/PoofWindow.vala"
	_g_object_unref0 (self->priv->poof_image);
#line 26 "../lib/Widgets/PoofWindow.vala"
	G_OBJECT_CLASS (plank_poof_window_parent_class)->finalize (obj);
#line 469 "PoofWindow.c"
}

/**
 * An animated window that draws a 'poof' animation.
 * Used when dragging items off the dock.
 */
static GType
plank_poof_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PlankPoofWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_poof_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankPoofWindow), 0, (GInstanceInitFunc) plank_poof_window_instance_init, NULL };
	GType plank_poof_window_type_id;
	plank_poof_window_type_id = g_type_register_static (PLANK_TYPE_COMPOSITED_WINDOW, "PlankPoofWindow", &g_define_type_info, 0);
	PlankPoofWindow_private_offset = g_type_add_instance_private (plank_poof_window_type_id, sizeof (PlankPoofWindowPrivate));
	return plank_poof_window_type_id;
}

GType
plank_poof_window_get_type (void)
{
	static volatile gsize plank_poof_window_type_id__volatile = 0;
	if (g_once_init_enter (&plank_poof_window_type_id__volatile)) {
		GType plank_poof_window_type_id;
		plank_poof_window_type_id = plank_poof_window_get_type_once ();
		g_once_init_leave (&plank_poof_window_type_id__volatile, plank_poof_window_type_id);
	}
	return plank_poof_window_type_id__volatile;
}

