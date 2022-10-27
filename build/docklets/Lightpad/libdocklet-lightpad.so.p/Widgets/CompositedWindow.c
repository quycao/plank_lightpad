/* CompositedWindow.c generated by valac 0.48.17, the Vala compiler
 * generated from CompositedWindow.vala, do not modify */

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
#include <cairo-gobject.h>
#include <glib.h>
#include <gdk/gdk.h>

#define WIDGETS_TYPE_COMPOSITED_WINDOW (widgets_composited_window_get_type ())
#define WIDGETS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_COMPOSITED_WINDOW, WidgetsCompositedWindow))
#define WIDGETS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_COMPOSITED_WINDOW, WidgetsCompositedWindowClass))
#define WIDGETS_IS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_COMPOSITED_WINDOW))
#define WIDGETS_IS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_COMPOSITED_WINDOW))
#define WIDGETS_COMPOSITED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_COMPOSITED_WINDOW, WidgetsCompositedWindowClass))

typedef struct _WidgetsCompositedWindow WidgetsCompositedWindow;
typedef struct _WidgetsCompositedWindowClass WidgetsCompositedWindowClass;
typedef struct _WidgetsCompositedWindowPrivate WidgetsCompositedWindowPrivate;
enum  {
	WIDGETS_COMPOSITED_WINDOW_0_PROPERTY,
	WIDGETS_COMPOSITED_WINDOW_NUM_PROPERTIES
};
static GParamSpec* widgets_composited_window_properties[WIDGETS_COMPOSITED_WINDOW_NUM_PROPERTIES];

struct _WidgetsCompositedWindow {
	GtkWindow parent_instance;
	WidgetsCompositedWindowPrivate * priv;
};

struct _WidgetsCompositedWindowClass {
	GtkWindowClass parent_class;
};

static gpointer widgets_composited_window_parent_class = NULL;

GType widgets_composited_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (WidgetsCompositedWindow, g_object_unref)
gboolean widgets_composited_window_clear_background (WidgetsCompositedWindow* self,
                                                     GtkWidget* widget,
                                                     cairo_t* ctx);
WidgetsCompositedWindow* widgets_composited_window_new (void);
WidgetsCompositedWindow* widgets_composited_window_construct (GType object_type);
static GObject * widgets_composited_window_constructor (GType type,
                                                 guint n_construct_properties,
                                                 GObjectConstructParam * construct_properties);
static gboolean _widgets_composited_window_clear_background_gtk_widget_draw (GtkWidget* _sender,
                                                                      cairo_t* cr,
                                                                      gpointer self);
static GType widgets_composited_window_get_type_once (void);

gboolean
widgets_composited_window_clear_background (WidgetsCompositedWindow* self,
                                            GtkWidget* widget,
                                            cairo_t* ctx)
{
	gboolean result = FALSE;
#line 36 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 36 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	g_return_val_if_fail (widget != NULL, FALSE);
#line 36 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	g_return_val_if_fail (ctx != NULL, FALSE);
#line 37 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	cairo_set_operator (ctx, CAIRO_OPERATOR_CLEAR);
#line 38 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	cairo_paint (ctx);
#line 40 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	result = FALSE;
#line 40 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	return result;
#line 94 "CompositedWindow.c"
}

WidgetsCompositedWindow*
widgets_composited_window_construct (GType object_type)
{
	WidgetsCompositedWindow * self = NULL;
#line 23 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	self = (WidgetsCompositedWindow*) g_object_new (object_type, NULL);
#line 23 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	return self;
#line 105 "CompositedWindow.c"
}

WidgetsCompositedWindow*
widgets_composited_window_new (void)
{
#line 23 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	return widgets_composited_window_construct (WIDGETS_TYPE_COMPOSITED_WINDOW);
#line 113 "CompositedWindow.c"
}

static gboolean
_widgets_composited_window_clear_background_gtk_widget_draw (GtkWidget* _sender,
                                                             cairo_t* cr,
                                                             gpointer self)
{
	gboolean result;
	result = widgets_composited_window_clear_background ((WidgetsCompositedWindow*) self, _sender, cr);
#line 33 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	return result;
#line 125 "CompositedWindow.c"
}

static GObject *
widgets_composited_window_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	WidgetsCompositedWindow * self;
	GdkScreen* _tmp0_;
	GdkVisual* _tmp1_;
#line 24 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	parent_class = G_OBJECT_CLASS (widgets_composited_window_parent_class);
#line 24 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 24 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_COMPOSITED_WINDOW, WidgetsCompositedWindow);
#line 26 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) self, TRUE);
#line 27 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
#line 28 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
#line 29 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	gtk_buildable_set_name ((GtkBuildable*) self, "mainwindow");
#line 30 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	_tmp0_ = gtk_window_get_screen ((GtkWindow*) self);
#line 30 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	_tmp1_ = gdk_screen_get_rgba_visual (_tmp0_);
#line 30 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	gtk_widget_set_visual ((GtkWidget*) self, _tmp1_);
#line 33 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	g_signal_connect_object ((GtkWidget*) self, "draw", (GCallback) _widgets_composited_window_clear_background_gtk_widget_draw, self, 0);
#line 24 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	return obj;
#line 162 "CompositedWindow.c"
}

static void
widgets_composited_window_class_init (WidgetsCompositedWindowClass * klass,
                                      gpointer klass_data)
{
#line 23 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	widgets_composited_window_parent_class = g_type_class_peek_parent (klass);
#line 23 "../docklets/Lightpad/Widgets/CompositedWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = widgets_composited_window_constructor;
#line 173 "CompositedWindow.c"
}

static void
widgets_composited_window_instance_init (WidgetsCompositedWindow * self,
                                         gpointer klass)
{
}

static GType
widgets_composited_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (WidgetsCompositedWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_composited_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsCompositedWindow), 0, (GInstanceInitFunc) widgets_composited_window_instance_init, NULL };
	GType widgets_composited_window_type_id;
	widgets_composited_window_type_id = g_type_register_static (gtk_window_get_type (), "WidgetsCompositedWindow", &g_define_type_info, 0);
	return widgets_composited_window_type_id;
}

GType
widgets_composited_window_get_type (void)
{
	static volatile gsize widgets_composited_window_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_composited_window_type_id__volatile)) {
		GType widgets_composited_window_type_id;
		widgets_composited_window_type_id = widgets_composited_window_get_type_once ();
		g_once_init_leave (&widgets_composited_window_type_id__volatile, widgets_composited_window_type_id);
	}
	return widgets_composited_window_type_id__volatile;
}

