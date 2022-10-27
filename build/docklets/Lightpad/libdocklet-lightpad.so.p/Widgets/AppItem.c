/* AppItem.c generated by valac 0.48.17, the Vala compiler
 * generated from AppItem.vala, do not modify */

/*
* Copyright (c) 2011-2020 LightPad
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Juan Pablo Lozano <libredeb@gmail.com>
*/

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <cairo-gobject.h>
#include <gdk/gdk.h>

#define LIGHT_PAD_FRONTEND_TYPE_APP_ITEM (light_pad_frontend_app_item_get_type ())
#define LIGHT_PAD_FRONTEND_APP_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIGHT_PAD_FRONTEND_TYPE_APP_ITEM, LightPadFrontendAppItem))
#define LIGHT_PAD_FRONTEND_APP_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIGHT_PAD_FRONTEND_TYPE_APP_ITEM, LightPadFrontendAppItemClass))
#define LIGHT_PAD_FRONTEND_IS_APP_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIGHT_PAD_FRONTEND_TYPE_APP_ITEM))
#define LIGHT_PAD_FRONTEND_IS_APP_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIGHT_PAD_FRONTEND_TYPE_APP_ITEM))
#define LIGHT_PAD_FRONTEND_APP_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIGHT_PAD_FRONTEND_TYPE_APP_ITEM, LightPadFrontendAppItemClass))

typedef struct _LightPadFrontendAppItem LightPadFrontendAppItem;
typedef struct _LightPadFrontendAppItemClass LightPadFrontendAppItemClass;
typedef struct _LightPadFrontendAppItemPrivate LightPadFrontendAppItemPrivate;

#define LIGHT_PAD_FRONTEND_TYPE_COLOR (light_pad_frontend_color_get_type ())
typedef struct _LightPadFrontendColor LightPadFrontendColor;
enum  {
	LIGHT_PAD_FRONTEND_APP_ITEM_0_PROPERTY,
	LIGHT_PAD_FRONTEND_APP_ITEM_NUM_PROPERTIES
};
static GParamSpec* light_pad_frontend_app_item_properties[LIGHT_PAD_FRONTEND_APP_ITEM_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _cairo_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_destroy (var), NULL)))
#define _cairo_pattern_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_pattern_destroy (var), NULL)))

struct _LightPadFrontendAppItem {
	GtkEventBox parent_instance;
	LightPadFrontendAppItemPrivate * priv;
};

struct _LightPadFrontendAppItemClass {
	GtkEventBoxClass parent_class;
};

struct _LightPadFrontendColor {
	gdouble R;
	gdouble G;
	gdouble B;
	gdouble A;
};

struct _LightPadFrontendAppItemPrivate {
	GdkPixbuf* icon;
	LightPadFrontendColor prominent;
	gchar* label;
	GtkBox* wrapper;
	gdouble font_size;
	gint icon_size;
	gint current_frame;
};

static gint LightPadFrontendAppItem_private_offset;
static gpointer light_pad_frontend_app_item_parent_class = NULL;

GType light_pad_frontend_app_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (LightPadFrontendAppItem, g_object_unref)
GType light_pad_frontend_color_get_type (void) G_GNUC_CONST;
LightPadFrontendColor* light_pad_frontend_color_dup (const LightPadFrontendColor* self);
void light_pad_frontend_color_free (LightPadFrontendColor* self);
#define LIGHT_PAD_FRONTEND_APP_ITEM_FPS 24
#define LIGHT_PAD_FRONTEND_APP_ITEM_DURATION 200
#define LIGHT_PAD_FRONTEND_APP_ITEM_RUN_LENGTH ((gint) (LIGHT_PAD_FRONTEND_APP_ITEM_DURATION / LIGHT_PAD_FRONTEND_APP_ITEM_FPS))
LightPadFrontendAppItem* light_pad_frontend_app_item_new (gint size,
                                                          gdouble font_size,
                                                          gint box_width,
                                                          gint box_height);
LightPadFrontendAppItem* light_pad_frontend_app_item_construct (GType object_type,
                                                                gint size,
                                                                gdouble font_size,
                                                                gint box_width,
                                                                gint box_height);
static gboolean light_pad_frontend_app_item_draw_icon (LightPadFrontendAppItem* self,
                                                GtkWidget* widget,
                                                cairo_t* ctx);
static gboolean _light_pad_frontend_app_item_draw_icon_gtk_widget_draw (GtkWidget* _sender,
                                                                 cairo_t* cr,
                                                                 gpointer self);
static gboolean light_pad_frontend_app_item_draw_background (LightPadFrontendAppItem* self,
                                                      GtkWidget* widget,
                                                      cairo_t* ctx);
static gboolean _light_pad_frontend_app_item_draw_background_gtk_widget_draw (GtkWidget* _sender,
                                                                       cairo_t* cr,
                                                                       gpointer self);
static gboolean __lambda6_ (LightPadFrontendAppItem* self);
void light_pad_frontend_app_item_focus_in (LightPadFrontendAppItem* self);
static gboolean ___lambda6__gtk_widget_focus_in_event (GtkWidget* _sender,
                                                GdkEventFocus* event,
                                                gpointer self);
static gboolean __lambda8_ (LightPadFrontendAppItem* self);
void light_pad_frontend_app_item_focus_out (LightPadFrontendAppItem* self);
static gboolean ___lambda8__gtk_widget_focus_out_event (GtkWidget* _sender,
                                                 GdkEventFocus* event,
                                                 gpointer self);
void light_pad_frontend_app_item_change_app (LightPadFrontendAppItem* self,
                                             GdkPixbuf* new_icon,
                                             const gchar* new_name,
                                             const gchar* new_tooltip);
G_GNUC_INTERNAL void light_pad_frontend_utilities_average_color (GdkPixbuf* source,
                                                 LightPadFrontendColor* result);
static gboolean __lambda7_ (LightPadFrontendAppItem* self);
static gboolean ___lambda7__gsource_func (gpointer self);
static gboolean __lambda9_ (LightPadFrontendAppItem* self);
static gboolean ___lambda9__gsource_func (gpointer self);
G_GNUC_INTERNAL void light_pad_frontend_utilities_truncate_text (cairo_t* context,
                                                 GtkAllocation* size,
                                                 guint padding,
                                                 const gchar* input,
                                                 gchar* * truncated,
                                                 cairo_text_extents_t* truncated_extents);
G_GNUC_INTERNAL void light_pad_frontend_utilities_draw_rounded_rectangle (cairo_t* context,
                                                          gdouble radius,
                                                          gdouble offset,
                                                          GtkAllocation* size);
static void light_pad_frontend_app_item_finalize (GObject * obj);
static GType light_pad_frontend_app_item_get_type_once (void);

static inline gpointer
light_pad_frontend_app_item_get_instance_private (LightPadFrontendAppItem* self)
{
	return G_STRUCT_MEMBER_P (self, LightPadFrontendAppItem_private_offset);
}

static gboolean
_light_pad_frontend_app_item_draw_icon_gtk_widget_draw (GtkWidget* _sender,
                                                        cairo_t* cr,
                                                        gpointer self)
{
	gboolean result;
	result = light_pad_frontend_app_item_draw_icon ((LightPadFrontendAppItem*) self, _sender, cr);
#line 50 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 166 "AppItem.c"
}

static gboolean
_light_pad_frontend_app_item_draw_background_gtk_widget_draw (GtkWidget* _sender,
                                                              cairo_t* cr,
                                                              gpointer self)
{
	gboolean result;
	result = light_pad_frontend_app_item_draw_background ((LightPadFrontendAppItem*) self, _sender, cr);
#line 54 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 178 "AppItem.c"
}

static gboolean
__lambda6_ (LightPadFrontendAppItem* self)
{
	gboolean result = FALSE;
#line 55 "../docklets/Lightpad/Widgets/AppItem.vala"
	light_pad_frontend_app_item_focus_in (self);
#line 55 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = TRUE;
#line 55 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 191 "AppItem.c"
}

static gboolean
___lambda6__gtk_widget_focus_in_event (GtkWidget* _sender,
                                       GdkEventFocus* event,
                                       gpointer self)
{
	gboolean result;
	result = __lambda6_ ((LightPadFrontendAppItem*) self);
#line 55 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 203 "AppItem.c"
}

static gboolean
__lambda8_ (LightPadFrontendAppItem* self)
{
	gboolean result = FALSE;
#line 56 "../docklets/Lightpad/Widgets/AppItem.vala"
	light_pad_frontend_app_item_focus_out (self);
#line 56 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = TRUE;
#line 56 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 216 "AppItem.c"
}

static gboolean
___lambda8__gtk_widget_focus_out_event (GtkWidget* _sender,
                                        GdkEventFocus* event,
                                        gpointer self)
{
	gboolean result;
	result = __lambda8_ ((LightPadFrontendAppItem*) self);
#line 56 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 228 "AppItem.c"
}

LightPadFrontendAppItem*
light_pad_frontend_app_item_construct (GType object_type,
                                       gint size,
                                       gdouble font_size,
                                       gint box_width,
                                       gint box_height)
{
	LightPadFrontendAppItem * self = NULL;
	GtkBox* _tmp0_;
	GtkBox* _tmp1_;
	GtkBox* _tmp2_;
#line 38 "../docklets/Lightpad/Widgets/AppItem.vala"
	self = (LightPadFrontendAppItem*) g_object_new (object_type, NULL);
#line 39 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->icon_size = size;
#line 40 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->font_size = font_size;
#line 43 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_event_box_set_visible_window ((GtkEventBox*) self, FALSE);
#line 44 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_set_can_focus ((GtkWidget*) self, TRUE);
#line 46 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, box_width, box_height);
#line 49 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp0_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
#line 49 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_object_ref_sink (_tmp0_);
#line 49 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_object_unref0 (self->priv->wrapper);
#line 49 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->wrapper = _tmp0_;
#line 50 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp1_ = self->priv->wrapper;
#line 50 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_signal_connect_object ((GtkWidget*) _tmp1_, "draw", (GCallback) _light_pad_frontend_app_item_draw_icon_gtk_widget_draw, self, 0);
#line 51 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp2_ = self->priv->wrapper;
#line 51 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp2_);
#line 54 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_signal_connect_object ((GtkWidget*) self, "draw", (GCallback) _light_pad_frontend_app_item_draw_background_gtk_widget_draw, self, 0);
#line 55 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_signal_connect_object ((GtkWidget*) self, "focus-in-event", (GCallback) ___lambda6__gtk_widget_focus_in_event, self, 0);
#line 56 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_signal_connect_object ((GtkWidget*) self, "focus-out-event", (GCallback) ___lambda8__gtk_widget_focus_out_event, self, 0);
#line 38 "../docklets/Lightpad/Widgets/AppItem.vala"
	return self;
#line 278 "AppItem.c"
}

LightPadFrontendAppItem*
light_pad_frontend_app_item_new (gint size,
                                 gdouble font_size,
                                 gint box_width,
                                 gint box_height)
{
#line 38 "../docklets/Lightpad/Widgets/AppItem.vala"
	return light_pad_frontend_app_item_construct (LIGHT_PAD_FRONTEND_TYPE_APP_ITEM, size, font_size, box_width, box_height);
#line 289 "AppItem.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 65 "../docklets/Lightpad/Widgets/AppItem.vala"
	return self ? g_object_ref (self) : NULL;
#line 297 "AppItem.c"
}

void
light_pad_frontend_app_item_change_app (LightPadFrontendAppItem* self,
                                        GdkPixbuf* new_icon,
                                        const gchar* new_name,
                                        const gchar* new_tooltip)
{
	GdkPixbuf* _tmp0_;
	GdkPixbuf* _tmp1_;
	LightPadFrontendColor _tmp2_ = {0};
	gchar* _tmp3_;
	GtkBox* _tmp4_;
#line 61 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (self != NULL);
#line 61 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (new_icon != NULL);
#line 61 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (new_name != NULL);
#line 61 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (new_tooltip != NULL);
#line 62 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->current_frame = 1;
#line 65 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp0_ = _g_object_ref0 (new_icon);
#line 65 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_object_unref0 (self->priv->icon);
#line 65 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->icon = _tmp0_;
#line 66 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp1_ = self->priv->icon;
#line 66 "../docklets/Lightpad/Widgets/AppItem.vala"
	light_pad_frontend_utilities_average_color (_tmp1_, &_tmp2_);
#line 66 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->prominent = _tmp2_;
#line 69 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp3_ = g_strdup (new_name);
#line 69 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_free0 (self->priv->label);
#line 69 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->label = _tmp3_;
#line 72 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_set_tooltip_text ((GtkWidget*) self, new_tooltip);
#line 75 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp4_ = self->priv->wrapper;
#line 75 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_queue_draw ((GtkWidget*) _tmp4_);
#line 345 "AppItem.c"
}

static gboolean
__lambda7_ (LightPadFrontendAppItem* self)
{
	gboolean _tmp0_ = FALSE;
	gint _tmp3_;
	gboolean result = FALSE;
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (self->priv->current_frame >= LIGHT_PAD_FRONTEND_APP_ITEM_RUN_LENGTH) {
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp0_ = TRUE;
#line 358 "AppItem.c"
	} else {
		gboolean _tmp1_;
		gboolean _tmp2_;
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
		g_object_get ((GtkWidget*) self, "has-focus", &_tmp1_, NULL);
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp2_ = _tmp1_;
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp0_ = !_tmp2_;
#line 368 "AppItem.c"
	}
#line 81 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (_tmp0_) {
#line 82 "../docklets/Lightpad/Widgets/AppItem.vala"
		self->priv->current_frame = 1;
#line 83 "../docklets/Lightpad/Widgets/AppItem.vala"
		result = FALSE;
#line 83 "../docklets/Lightpad/Widgets/AppItem.vala"
		return result;
#line 378 "AppItem.c"
	}
#line 86 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_queue_draw ((GtkWidget*) self);
#line 87 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp3_ = self->priv->current_frame;
#line 87 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->current_frame = _tmp3_ + 1;
#line 88 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = TRUE;
#line 88 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 390 "AppItem.c"
}

static gboolean
___lambda7__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda7_ ((LightPadFrontendAppItem*) self);
#line 80 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 400 "AppItem.c"
}

void
light_pad_frontend_app_item_focus_in (LightPadFrontendAppItem* self)
{
	const gchar* _tmp0_;
#line 78 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (self != NULL);
#line 79 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp0_ = self->priv->label;
#line 79 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_message ("AppItem.vala:79: In focus item: %s", _tmp0_);
#line 80 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) ((gint) (1000 / LIGHT_PAD_FRONTEND_APP_ITEM_FPS)), ___lambda7__gsource_func, g_object_ref (self), g_object_unref);
#line 415 "AppItem.c"
}

static gboolean
__lambda9_ (LightPadFrontendAppItem* self)
{
	gboolean _tmp0_ = FALSE;
	gint _tmp3_;
	gboolean result = FALSE;
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (self->priv->current_frame >= LIGHT_PAD_FRONTEND_APP_ITEM_RUN_LENGTH) {
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp0_ = TRUE;
#line 428 "AppItem.c"
	} else {
		gboolean _tmp1_;
		gboolean _tmp2_;
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
		g_object_get ((GtkWidget*) self, "has-focus", &_tmp1_, NULL);
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp2_ = _tmp1_;
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp0_ = _tmp2_;
#line 438 "AppItem.c"
	}
#line 96 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (_tmp0_) {
#line 97 "../docklets/Lightpad/Widgets/AppItem.vala"
		self->priv->current_frame = 1;
#line 98 "../docklets/Lightpad/Widgets/AppItem.vala"
		result = FALSE;
#line 98 "../docklets/Lightpad/Widgets/AppItem.vala"
		return result;
#line 448 "AppItem.c"
	}
#line 101 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_queue_draw ((GtkWidget*) self);
#line 102 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp3_ = self->priv->current_frame;
#line 102 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->current_frame = _tmp3_ + 1;
#line 103 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = TRUE;
#line 103 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 460 "AppItem.c"
}

static gboolean
___lambda9__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda9_ ((LightPadFrontendAppItem*) self);
#line 95 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 470 "AppItem.c"
}

void
light_pad_frontend_app_item_focus_out (LightPadFrontendAppItem* self)
{
#line 92 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_if_fail (self != NULL);
#line 93 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_object_set ((GtkWidget*) self, "has-focus", FALSE, NULL);
#line 95 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) ((gint) (1000 / LIGHT_PAD_FRONTEND_APP_ITEM_FPS)), ___lambda9__gsource_func, g_object_ref (self), g_object_unref);
#line 482 "AppItem.c"
}

static gboolean
light_pad_frontend_app_item_draw_icon (LightPadFrontendAppItem* self,
                                       GtkWidget* widget,
                                       cairo_t* ctx)
{
	GtkAllocation size = {0};
	GtkAllocation _tmp0_ = {0};
	cairo_t* context = NULL;
	GdkWindow* _tmp1_;
	cairo_t* _tmp2_;
	GdkPixbuf* _tmp3_;
	GtkAllocation _tmp4_;
	GdkPixbuf* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	GtkAllocation _tmp8_;
	GtkAllocation _tmp9_;
	cairo_text_extents_t extents = {0};
	GtkAllocation _tmp10_;
	const gchar* _tmp11_;
	gchar* _tmp12_ = NULL;
	cairo_text_extents_t _tmp13_ = {0};
	GtkAllocation _tmp14_;
	GtkAllocation _tmp15_;
	cairo_text_extents_t _tmp16_;
	GtkAllocation _tmp17_;
	GtkAllocation _tmp18_;
	const gchar* _tmp19_;
	GtkAllocation _tmp20_;
	GtkAllocation _tmp21_;
	cairo_text_extents_t _tmp22_;
	GtkAllocation _tmp23_;
	GtkAllocation _tmp24_;
	const gchar* _tmp25_;
	gboolean result = FALSE;
#line 107 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 107 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (widget != NULL, FALSE);
#line 107 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (ctx != NULL, FALSE);
#line 109 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_get_allocation (widget, &_tmp0_);
#line 109 "../docklets/Lightpad/Widgets/AppItem.vala"
	size = _tmp0_;
#line 110 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp1_ = gtk_widget_get_window (widget);
#line 110 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp2_ = gdk_cairo_create (_tmp1_);
#line 110 "../docklets/Lightpad/Widgets/AppItem.vala"
	context = _tmp2_;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp3_ = self->priv->icon;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp4_ = size;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp5_ = self->priv->icon;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp6_ = gdk_pixbuf_get_width (_tmp5_);
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp7_ = _tmp6_;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp8_ = size;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp9_ = size;
#line 113 "../docklets/Lightpad/Widgets/AppItem.vala"
	gdk_cairo_set_source_pixbuf (context, _tmp3_, _tmp4_.x + ((_tmp7_ - _tmp8_.width) / (-2.0)), (gdouble) _tmp9_.y);
#line 114 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_paint (context);
#line 118 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_select_font_face (context, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);
#line 119 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_set_font_size (context, self->priv->font_size);
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp10_ = size;
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp11_ = self->priv->label;
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	light_pad_frontend_utilities_truncate_text (context, &_tmp10_, (guint) 10, _tmp11_, &_tmp12_, &_tmp13_);
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_free0 (self->priv->label);
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->label = _tmp12_;
#line 120 "../docklets/Lightpad/Widgets/AppItem.vala"
	extents = _tmp13_;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp14_ = size;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp15_ = size;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp16_ = extents;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp17_ = size;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp18_ = size;
#line 123 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_move_to (context, ((_tmp14_.x + (_tmp15_.width / 2)) - (_tmp16_.width / 2)) + 1, (gdouble) (((_tmp17_.y + _tmp18_.height) - 10) + 1));
#line 124 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_set_source_rgba (context, 0.0, 0.0, 0.0, 0.8);
#line 125 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp19_ = self->priv->label;
#line 125 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_show_text (context, _tmp19_);
#line 128 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_set_source_rgba (context, 1.0, 1.0, 1.0, 1.0);
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp20_ = size;
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp21_ = size;
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp22_ = extents;
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp23_ = size;
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp24_ = size;
#line 129 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_move_to (context, (_tmp20_.x + (_tmp21_.width / 2)) - (_tmp22_.width / 2), (gdouble) ((_tmp23_.y + _tmp24_.height) - 10));
#line 130 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp25_ = self->priv->label;
#line 130 "../docklets/Lightpad/Widgets/AppItem.vala"
	cairo_show_text (context, _tmp25_);
#line 132 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = FALSE;
#line 132 "../docklets/Lightpad/Widgets/AppItem.vala"
	_cairo_destroy0 (context);
#line 132 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 612 "AppItem.c"
}

static gboolean
light_pad_frontend_app_item_draw_background (LightPadFrontendAppItem* self,
                                             GtkWidget* widget,
                                             cairo_t* ctx)
{
	GtkAllocation size = {0};
	GtkAllocation _tmp0_ = {0};
	cairo_t* context = NULL;
	GdkWindow* _tmp1_;
	cairo_t* _tmp2_;
	gdouble progress = 0.0;
	gboolean _tmp3_;
	gboolean _tmp4_;
	gboolean result = FALSE;
#line 135 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 135 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (widget != NULL, FALSE);
#line 135 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_return_val_if_fail (ctx != NULL, FALSE);
#line 137 "../docklets/Lightpad/Widgets/AppItem.vala"
	gtk_widget_get_allocation (widget, &_tmp0_);
#line 137 "../docklets/Lightpad/Widgets/AppItem.vala"
	size = _tmp0_;
#line 138 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp1_ = gtk_widget_get_window (widget);
#line 138 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp2_ = gdk_cairo_create (_tmp1_);
#line 138 "../docklets/Lightpad/Widgets/AppItem.vala"
	context = _tmp2_;
#line 141 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (self->priv->current_frame > 1) {
#line 142 "../docklets/Lightpad/Widgets/AppItem.vala"
		progress = ((gdouble) LIGHT_PAD_FRONTEND_APP_ITEM_RUN_LENGTH) / ((gdouble) self->priv->current_frame);
#line 649 "AppItem.c"
	} else {
#line 144 "../docklets/Lightpad/Widgets/AppItem.vala"
		progress = (gdouble) 1;
#line 653 "AppItem.c"
	}
#line 147 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_object_get ((GtkWidget*) self, "has-focus", &_tmp3_, NULL);
#line 147 "../docklets/Lightpad/Widgets/AppItem.vala"
	_tmp4_ = _tmp3_;
#line 147 "../docklets/Lightpad/Widgets/AppItem.vala"
	if (_tmp4_) {
#line 661 "AppItem.c"
		gdouble dark = 0.0;
		cairo_pattern_t* gradient = NULL;
		LightPadFrontendColor _tmp5_;
		LightPadFrontendColor _tmp6_;
		LightPadFrontendColor _tmp7_;
		cairo_pattern_t* _tmp8_;
		cairo_t* _tmp9_;
		cairo_pattern_t* _tmp10_;
		cairo_t* _tmp11_;
		GtkAllocation _tmp12_;
		cairo_t* _tmp13_;
#line 148 "../docklets/Lightpad/Widgets/AppItem.vala"
		dark = 0.32;
#line 149 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp5_ = self->priv->prominent;
#line 149 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp6_ = self->priv->prominent;
#line 149 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp7_ = self->priv->prominent;
#line 149 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp8_ = cairo_pattern_create_rgba (_tmp5_.R * dark, _tmp6_.G * dark, _tmp7_.B * dark, 0.8);
#line 149 "../docklets/Lightpad/Widgets/AppItem.vala"
		gradient = _tmp8_;
#line 150 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp9_ = context;
#line 150 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp10_ = gradient;
#line 150 "../docklets/Lightpad/Widgets/AppItem.vala"
		cairo_set_source (_tmp9_, _tmp10_);
#line 151 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp11_ = context;
#line 151 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp12_ = size;
#line 151 "../docklets/Lightpad/Widgets/AppItem.vala"
		light_pad_frontend_utilities_draw_rounded_rectangle (_tmp11_, (gdouble) 10, 0.5, &_tmp12_);
#line 152 "../docklets/Lightpad/Widgets/AppItem.vala"
		_tmp13_ = context;
#line 152 "../docklets/Lightpad/Widgets/AppItem.vala"
		cairo_fill (_tmp13_);
#line 147 "../docklets/Lightpad/Widgets/AppItem.vala"
		_cairo_pattern_destroy0 (gradient);
#line 703 "AppItem.c"
	} else {
#line 154 "../docklets/Lightpad/Widgets/AppItem.vala"
		if (self->priv->current_frame > 1) {
#line 707 "AppItem.c"
			cairo_pattern_t* gradient = NULL;
			cairo_pattern_t* _tmp14_;
			cairo_t* _tmp15_;
			cairo_pattern_t* _tmp16_;
			cairo_t* _tmp17_;
			GtkAllocation _tmp18_;
			cairo_t* _tmp19_;
#line 155 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp14_ = cairo_pattern_create_rgba (0.0, 0.0, 0.0, 0.0);
#line 155 "../docklets/Lightpad/Widgets/AppItem.vala"
			gradient = _tmp14_;
#line 157 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp15_ = context;
#line 157 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp16_ = gradient;
#line 157 "../docklets/Lightpad/Widgets/AppItem.vala"
			cairo_set_source (_tmp15_, _tmp16_);
#line 158 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp17_ = context;
#line 158 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp18_ = size;
#line 158 "../docklets/Lightpad/Widgets/AppItem.vala"
			light_pad_frontend_utilities_draw_rounded_rectangle (_tmp17_, (gdouble) 10, 0.5, &_tmp18_);
#line 159 "../docklets/Lightpad/Widgets/AppItem.vala"
			_tmp19_ = context;
#line 159 "../docklets/Lightpad/Widgets/AppItem.vala"
			cairo_fill (_tmp19_);
#line 154 "../docklets/Lightpad/Widgets/AppItem.vala"
			_cairo_pattern_destroy0 (gradient);
#line 737 "AppItem.c"
		}
	}
#line 163 "../docklets/Lightpad/Widgets/AppItem.vala"
	result = FALSE;
#line 163 "../docklets/Lightpad/Widgets/AppItem.vala"
	_cairo_destroy0 (context);
#line 163 "../docklets/Lightpad/Widgets/AppItem.vala"
	return result;
#line 746 "AppItem.c"
}

static void
light_pad_frontend_app_item_class_init (LightPadFrontendAppItemClass * klass,
                                        gpointer klass_data)
{
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	light_pad_frontend_app_item_parent_class = g_type_class_peek_parent (klass);
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	g_type_class_adjust_private_offset (klass, &LightPadFrontendAppItem_private_offset);
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	G_OBJECT_CLASS (klass)->finalize = light_pad_frontend_app_item_finalize;
#line 759 "AppItem.c"
}

static void
light_pad_frontend_app_item_instance_init (LightPadFrontendAppItem * self,
                                           gpointer klass)
{
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv = light_pad_frontend_app_item_get_instance_private (self);
#line 36 "../docklets/Lightpad/Widgets/AppItem.vala"
	self->priv->current_frame = 1;
#line 770 "AppItem.c"
}

static void
light_pad_frontend_app_item_finalize (GObject * obj)
{
	LightPadFrontendAppItem * self;
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIGHT_PAD_FRONTEND_TYPE_APP_ITEM, LightPadFrontendAppItem);
#line 26 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_object_unref0 (self->priv->icon);
#line 28 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_free0 (self->priv->label);
#line 29 "../docklets/Lightpad/Widgets/AppItem.vala"
	_g_object_unref0 (self->priv->wrapper);
#line 24 "../docklets/Lightpad/Widgets/AppItem.vala"
	G_OBJECT_CLASS (light_pad_frontend_app_item_parent_class)->finalize (obj);
#line 787 "AppItem.c"
}

static GType
light_pad_frontend_app_item_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LightPadFrontendAppItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) light_pad_frontend_app_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LightPadFrontendAppItem), 0, (GInstanceInitFunc) light_pad_frontend_app_item_instance_init, NULL };
	GType light_pad_frontend_app_item_type_id;
	light_pad_frontend_app_item_type_id = g_type_register_static (gtk_event_box_get_type (), "LightPadFrontendAppItem", &g_define_type_info, 0);
	LightPadFrontendAppItem_private_offset = g_type_add_instance_private (light_pad_frontend_app_item_type_id, sizeof (LightPadFrontendAppItemPrivate));
	return light_pad_frontend_app_item_type_id;
}

GType
light_pad_frontend_app_item_get_type (void)
{
	static volatile gsize light_pad_frontend_app_item_type_id__volatile = 0;
	if (g_once_init_enter (&light_pad_frontend_app_item_type_id__volatile)) {
		GType light_pad_frontend_app_item_type_id;
		light_pad_frontend_app_item_type_id = light_pad_frontend_app_item_get_type_once ();
		g_once_init_leave (&light_pad_frontend_app_item_type_id__volatile, light_pad_frontend_app_item_type_id);
	}
	return light_pad_frontend_app_item_type_id__volatile;
}

