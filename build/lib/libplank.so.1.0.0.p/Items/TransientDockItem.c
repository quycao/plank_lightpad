/* TransientDockItem.c generated by valac 0.48.17, the Vala compiler
 * generated from TransientDockItem.vala, do not modify */

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

#include <glib-object.h>
#include <gdk/gdk.h>
#include <glib.h>
#include <gee.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <libbamf/libbamf.h>
#include "plank-internal.h"
#include <gdk-pixbuf/gdk-pixbuf.h>

#define PLANK_TYPE_DOCK_ELEMENT (plank_dock_element_get_type ())
#define PLANK_DOCK_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ELEMENT, PlankDockElement))
#define PLANK_DOCK_ELEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ELEMENT, PlankDockElementClass))
#define PLANK_IS_DOCK_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ELEMENT))
#define PLANK_IS_DOCK_ELEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ELEMENT))
#define PLANK_DOCK_ELEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ELEMENT, PlankDockElementClass))

typedef struct _PlankDockElement PlankDockElement;
typedef struct _PlankDockElementClass PlankDockElementClass;
typedef struct _PlankDockElementPrivate PlankDockElementPrivate;
typedef enum  {
	PLANK_POPUP_BUTTON_NONE = 1 << 0,
	PLANK_POPUP_BUTTON_LEFT = 1 << 1,
	PLANK_POPUP_BUTTON_MIDDLE = 1 << 2,
	PLANK_POPUP_BUTTON_RIGHT = 1 << 3
} PlankPopupButton;

#define PLANK_TYPE_POPUP_BUTTON (plank_popup_button_get_type ())
typedef enum  {
	PLANK_ANIMATION_TYPE_NONE,
	PLANK_ANIMATION_TYPE_BOUNCE,
	PLANK_ANIMATION_TYPE_DARKEN,
	PLANK_ANIMATION_TYPE_LIGHTEN
} PlankAnimationType;

#define PLANK_TYPE_ANIMATION_TYPE (plank_animation_type_get_type ())

#define PLANK_TYPE_DOCK_ITEM (plank_dock_item_get_type ())
#define PLANK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ITEM, PlankDockItem))
#define PLANK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ITEM, PlankDockItemClass))
#define PLANK_IS_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ITEM))
#define PLANK_IS_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ITEM))
#define PLANK_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ITEM, PlankDockItemClass))

typedef struct _PlankDockItem PlankDockItem;
typedef struct _PlankDockItemClass PlankDockItemClass;
typedef struct _PlankDockItemPrivate PlankDockItemPrivate;

#define PLANK_TYPE_SURFACE (plank_surface_get_type ())
#define PLANK_SURFACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_SURFACE, PlankSurface))
#define PLANK_SURFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_SURFACE, PlankSurfaceClass))
#define PLANK_IS_SURFACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_SURFACE))
#define PLANK_IS_SURFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_SURFACE))
#define PLANK_SURFACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_SURFACE, PlankSurfaceClass))

typedef struct _PlankSurface PlankSurface;
typedef struct _PlankSurfaceClass PlankSurfaceClass;

#define PLANK_TYPE_APPLICATION_DOCK_ITEM (plank_application_dock_item_get_type ())
#define PLANK_APPLICATION_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_APPLICATION_DOCK_ITEM, PlankApplicationDockItem))
#define PLANK_APPLICATION_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_APPLICATION_DOCK_ITEM, PlankApplicationDockItemClass))
#define PLANK_IS_APPLICATION_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_APPLICATION_DOCK_ITEM))
#define PLANK_IS_APPLICATION_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_APPLICATION_DOCK_ITEM))
#define PLANK_APPLICATION_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_APPLICATION_DOCK_ITEM, PlankApplicationDockItemClass))

typedef struct _PlankApplicationDockItem PlankApplicationDockItem;
typedef struct _PlankApplicationDockItemClass PlankApplicationDockItemClass;
typedef struct _PlankApplicationDockItemPrivate PlankApplicationDockItemPrivate;

#define PLANK_TYPE_TRANSIENT_DOCK_ITEM (plank_transient_dock_item_get_type ())
#define PLANK_TRANSIENT_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_TRANSIENT_DOCK_ITEM, PlankTransientDockItem))
#define PLANK_TRANSIENT_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_TRANSIENT_DOCK_ITEM, PlankTransientDockItemClass))
#define PLANK_IS_TRANSIENT_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_TRANSIENT_DOCK_ITEM))
#define PLANK_IS_TRANSIENT_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_TRANSIENT_DOCK_ITEM))
#define PLANK_TRANSIENT_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_TRANSIENT_DOCK_ITEM, PlankTransientDockItemClass))

typedef struct _PlankTransientDockItem PlankTransientDockItem;
typedef struct _PlankTransientDockItemClass PlankTransientDockItemClass;
typedef struct _PlankTransientDockItemPrivate PlankTransientDockItemPrivate;
enum  {
	PLANK_TRANSIENT_DOCK_ITEM_0_PROPERTY,
	PLANK_TRANSIENT_DOCK_ITEM_NUM_PROPERTIES
};
static GParamSpec* plank_transient_dock_item_properties[PLANK_TRANSIENT_DOCK_ITEM_NUM_PROPERTIES];

#define PLANK_TYPE_PREFERENCES (plank_preferences_get_type ())
#define PLANK_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_PREFERENCES, PlankPreferences))
#define PLANK_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_PREFERENCES, PlankPreferencesClass))
#define PLANK_IS_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_PREFERENCES))
#define PLANK_IS_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_PREFERENCES))
#define PLANK_PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_PREFERENCES, PlankPreferencesClass))

typedef struct _PlankPreferences PlankPreferences;
typedef struct _PlankPreferencesClass PlankPreferencesClass;

#define PLANK_TYPE_DOCK_ITEM_PREFERENCES (plank_dock_item_preferences_get_type ())
#define PLANK_DOCK_ITEM_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferences))
#define PLANK_DOCK_ITEM_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferencesClass))
#define PLANK_IS_DOCK_ITEM_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES))
#define PLANK_IS_DOCK_ITEM_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ITEM_PREFERENCES))
#define PLANK_DOCK_ITEM_PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferencesClass))

typedef struct _PlankDockItemPreferences PlankDockItemPreferences;
typedef struct _PlankDockItemPreferencesClass PlankDockItemPreferencesClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _PlankDockElement {
	GObject parent_instance;
	PlankDockElementPrivate * priv;
};

struct _PlankDockElementClass {
	GObjectClass parent_class;
	PlankAnimationType (*on_clicked) (PlankDockElement* self, PlankPopupButton button, GdkModifierType mod, guint32 event_time);
	PlankAnimationType (*on_hovered) (PlankDockElement* self);
	PlankAnimationType (*on_scrolled) (PlankDockElement* self, GdkScrollDirection direction, GdkModifierType mod, guint32 event_time);
	GeeArrayList* (*get_menu_items) (PlankDockElement* self);
	gchar* (*get_drop_text) (PlankDockElement* self);
	gboolean (*can_be_removed) (PlankDockElement* self);
	gboolean (*can_accept_drop) (PlankDockElement* self, GeeArrayList* uris);
	gboolean (*accept_drop) (PlankDockElement* self, GeeArrayList* uris);
	gchar* (*unique_id) (PlankDockElement* self);
	void (*reset_buffers) (PlankDockElement* self);
};

struct _PlankDockItem {
	PlankDockElement parent_instance;
	PlankDockItemPrivate * priv;
};

struct _PlankDockItemClass {
	PlankDockElementClass parent_class;
	void (*load_from_launcher) (PlankDockItem* self);
	void (*draw_icon) (PlankDockItem* self, PlankSurface* surface);
	void (*draw_icon_fast) (PlankDockItem* self, PlankSurface* surface);
	gboolean (*is_valid) (PlankDockItem* self);
};

struct _PlankApplicationDockItem {
	PlankDockItem parent_instance;
	PlankApplicationDockItemPrivate * priv;
};

struct _PlankApplicationDockItemClass {
	PlankDockItemClass parent_class;
};

struct _PlankTransientDockItem {
	PlankApplicationDockItem parent_instance;
	PlankTransientDockItemPrivate * priv;
};

struct _PlankTransientDockItemClass {
	PlankApplicationDockItemClass parent_class;
};

struct _PlankTransientDockItemPrivate {
	guint delayed_update_timer_id;
};

static gint PlankTransientDockItem_private_offset;
static gpointer plank_transient_dock_item_parent_class = NULL;

GType plank_dock_element_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockElement, g_object_unref)
GType plank_popup_button_get_type (void) G_GNUC_CONST;
GType plank_animation_type_get_type (void) G_GNUC_CONST;
GType plank_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItem, g_object_unref)
GType plank_surface_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankSurface, g_object_unref)
GType plank_application_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankApplicationDockItem, g_object_unref)
GType plank_transient_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankTransientDockItem, g_object_unref)
gboolean plank_dock_element_can_be_removed (PlankDockElement* self);
gboolean plank_dock_item_is_valid (PlankDockItem* self);
#define PLANK_TRANSIENT_DOCK_ITEM_ICON_UPDATE_DELAY 200U
G_GNUC_INTERNAL PlankTransientDockItem* plank_transient_dock_item_new_with_application (BamfApplication* app);
G_GNUC_INTERNAL PlankTransientDockItem* plank_transient_dock_item_construct_with_application (GType object_type,
                                                                              BamfApplication* app);
PlankDockItemPreferences* plank_dock_item_preferences_new (void);
PlankDockItemPreferences* plank_dock_item_preferences_construct (GType object_type);
GType plank_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankPreferences, g_object_unref)
GType plank_dock_item_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItemPreferences, g_object_unref)
PlankTransientDockItem* plank_transient_dock_item_new_with_launcher (const gchar* launcher_uri);
PlankTransientDockItem* plank_transient_dock_item_construct_with_launcher (GType object_type,
                                                                           const gchar* launcher_uri);
PlankDockItemPreferences* plank_dock_item_preferences_new_with_launcher (const gchar* launcher);
PlankDockItemPreferences* plank_dock_item_preferences_construct_with_launcher (GType object_type,
                                                                               const gchar* launcher);
static void plank_transient_dock_item_update_forced_pixbuf (PlankTransientDockItem* self);
G_GNUC_INTERNAL BamfApplication* plank_application_dock_item_get_App (PlankApplicationDockItem* self);
void plank_dock_item_set_ForcePixbuf (PlankDockItem* self,
                                      GdkPixbuf* value);
GdkPixbuf* plank_dock_item_get_ForcePixbuf (PlankDockItem* self);
static gboolean __lambda14_ (PlankTransientDockItem* self);
static gboolean ___lambda14__gsource_func (gpointer self);
static gboolean plank_transient_dock_item_real_can_be_removed (PlankDockElement* base);
static gboolean plank_transient_dock_item_real_is_valid (PlankDockItem* base);
PlankTransientDockItem* plank_transient_dock_item_new (void);
PlankTransientDockItem* plank_transient_dock_item_construct (GType object_type);
PlankApplicationDockItem* plank_application_dock_item_new (void);
PlankApplicationDockItem* plank_application_dock_item_construct (GType object_type);
static GObject * plank_transient_dock_item_constructor (GType type,
                                                 guint n_construct_properties,
                                                 GObjectConstructParam * construct_properties);
void plank_dock_element_set_Text (PlankDockElement* self,
                                  const gchar* value);
PlankDockItemPreferences* plank_dock_item_get_Prefs (PlankDockItem* self);
void plank_dock_item_preferences_set_Launcher (PlankDockItemPreferences* self,
                                               const gchar* value);
void plank_dock_item_load_from_launcher (PlankDockItem* self);
const gchar* plank_dock_item_preferences_get_Launcher (PlankDockItemPreferences* self);
static void plank_transient_dock_item_finalize (GObject * obj);
static GType plank_transient_dock_item_get_type_once (void);

static inline gpointer
plank_transient_dock_item_get_instance_private (PlankTransientDockItem* self)
{
	return G_STRUCT_MEMBER_P (self, PlankTransientDockItem_private_offset);
}

G_GNUC_INTERNAL PlankTransientDockItem*
plank_transient_dock_item_construct_with_application (GType object_type,
                                                      BamfApplication* app)
{
	PlankTransientDockItem * self = NULL;
	PlankDockItemPreferences* _tmp0_;
	PlankDockItemPreferences* _tmp1_;
#line 34 "../lib/Items/TransientDockItem.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 36 "../lib/Items/TransientDockItem.vala"
	_tmp0_ = plank_dock_item_preferences_new ();
#line 36 "../lib/Items/TransientDockItem.vala"
	_tmp1_ = _tmp0_;
#line 36 "../lib/Items/TransientDockItem.vala"
	self = (PlankTransientDockItem*) g_object_new (object_type, "Prefs", _tmp1_, "App", app, NULL);
#line 36 "../lib/Items/TransientDockItem.vala"
	_g_object_unref0 (_tmp1_);
#line 34 "../lib/Items/TransientDockItem.vala"
	return self;
#line 270 "TransientDockItem.c"
}

G_GNUC_INTERNAL PlankTransientDockItem*
plank_transient_dock_item_new_with_application (BamfApplication* app)
{
#line 34 "../lib/Items/TransientDockItem.vala"
	return plank_transient_dock_item_construct_with_application (PLANK_TYPE_TRANSIENT_DOCK_ITEM, app);
#line 278 "TransientDockItem.c"
}

PlankTransientDockItem*
plank_transient_dock_item_construct_with_launcher (GType object_type,
                                                   const gchar* launcher_uri)
{
	PlankTransientDockItem * self = NULL;
	PlankDockItemPreferences* _tmp0_;
	PlankDockItemPreferences* _tmp1_;
#line 39 "../lib/Items/TransientDockItem.vala"
	g_return_val_if_fail (launcher_uri != NULL, NULL);
#line 41 "../lib/Items/TransientDockItem.vala"
	_tmp0_ = plank_dock_item_preferences_new_with_launcher (launcher_uri);
#line 41 "../lib/Items/TransientDockItem.vala"
	_tmp1_ = _tmp0_;
#line 41 "../lib/Items/TransientDockItem.vala"
	self = (PlankTransientDockItem*) g_object_new (object_type, "Prefs", _tmp1_, "App", NULL, NULL);
#line 41 "../lib/Items/TransientDockItem.vala"
	_g_object_unref0 (_tmp1_);
#line 39 "../lib/Items/TransientDockItem.vala"
	return self;
#line 300 "TransientDockItem.c"
}

PlankTransientDockItem*
plank_transient_dock_item_new_with_launcher (const gchar* launcher_uri)
{
#line 39 "../lib/Items/TransientDockItem.vala"
	return plank_transient_dock_item_construct_with_launcher (PLANK_TYPE_TRANSIENT_DOCK_ITEM, launcher_uri);
#line 308 "TransientDockItem.c"
}

static gboolean
__lambda14_ (PlankTransientDockItem* self)
{
	BamfApplication* _tmp0_;
	BamfApplication* _tmp1_;
	gboolean result = FALSE;
#line 81 "../lib/Items/TransientDockItem.vala"
	self->priv->delayed_update_timer_id = 0U;
#line 83 "../lib/Items/TransientDockItem.vala"
	_tmp0_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 83 "../lib/Items/TransientDockItem.vala"
	_tmp1_ = _tmp0_;
#line 83 "../lib/Items/TransientDockItem.vala"
	if (_tmp1_ != NULL) {
#line 325 "TransientDockItem.c"
		BamfApplication* _tmp2_;
		BamfApplication* _tmp3_;
		GdkPixbuf* _tmp4_;
#line 84 "../lib/Items/TransientDockItem.vala"
		_tmp2_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 84 "../lib/Items/TransientDockItem.vala"
		_tmp3_ = _tmp2_;
#line 84 "../lib/Items/TransientDockItem.vala"
		_tmp4_ = plank_window_control_get_app_icon (_tmp3_);
#line 84 "../lib/Items/TransientDockItem.vala"
		plank_dock_item_set_ForcePixbuf ((PlankDockItem*) self, _tmp4_);
#line 337 "TransientDockItem.c"
	}
#line 86 "../lib/Items/TransientDockItem.vala"
	result = FALSE;
#line 86 "../lib/Items/TransientDockItem.vala"
	return result;
#line 343 "TransientDockItem.c"
}

static gboolean
___lambda14__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda14_ ((PlankTransientDockItem*) self);
#line 80 "../lib/Items/TransientDockItem.vala"
	return result;
#line 353 "TransientDockItem.c"
}

static void
plank_transient_dock_item_update_forced_pixbuf (PlankTransientDockItem* self)
{
	BamfApplication* _tmp0_;
	BamfApplication* _tmp1_;
	GdkPixbuf* _tmp2_;
	GdkPixbuf* _tmp3_;
	GdkPixbuf* _tmp4_;
#line 70 "../lib/Items/TransientDockItem.vala"
	g_return_if_fail (self != NULL);
#line 72 "../lib/Items/TransientDockItem.vala"
	if (self->priv->delayed_update_timer_id > 0U) {
#line 73 "../lib/Items/TransientDockItem.vala"
		return;
#line 370 "TransientDockItem.c"
	}
#line 75 "../lib/Items/TransientDockItem.vala"
	_tmp0_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 75 "../lib/Items/TransientDockItem.vala"
	_tmp1_ = _tmp0_;
#line 75 "../lib/Items/TransientDockItem.vala"
	_tmp2_ = plank_window_control_get_app_icon (_tmp1_);
#line 75 "../lib/Items/TransientDockItem.vala"
	plank_dock_item_set_ForcePixbuf ((PlankDockItem*) self, _tmp2_);
#line 76 "../lib/Items/TransientDockItem.vala"
	_tmp3_ = plank_dock_item_get_ForcePixbuf ((PlankDockItem*) self);
#line 76 "../lib/Items/TransientDockItem.vala"
	_tmp4_ = _tmp3_;
#line 76 "../lib/Items/TransientDockItem.vala"
	if (_tmp4_ != NULL) {
#line 77 "../lib/Items/TransientDockItem.vala"
		return;
#line 388 "TransientDockItem.c"
	}
#line 80 "../lib/Items/TransientDockItem.vala"
	self->priv->delayed_update_timer_id = gdk_threads_add_timeout (PLANK_TRANSIENT_DOCK_ITEM_ICON_UPDATE_DELAY, ___lambda14__gsource_func, self);
#line 392 "TransientDockItem.c"
}

/**
 * {@inheritDoc}
 */
static gboolean
plank_transient_dock_item_real_can_be_removed (PlankDockElement* base)
{
	PlankTransientDockItem * self;
	gboolean result = FALSE;
#line 93 "../lib/Items/TransientDockItem.vala"
	self = (PlankTransientDockItem*) base;
#line 95 "../lib/Items/TransientDockItem.vala"
	result = FALSE;
#line 95 "../lib/Items/TransientDockItem.vala"
	return result;
#line 409 "TransientDockItem.c"
}

/**
 * {@inheritDoc}
 */
static gboolean
plank_transient_dock_item_real_is_valid (PlankDockItem* base)
{
	PlankTransientDockItem * self;
	gboolean result = FALSE;
#line 101 "../lib/Items/TransientDockItem.vala"
	self = (PlankTransientDockItem*) base;
#line 103 "../lib/Items/TransientDockItem.vala"
	result = TRUE;
#line 103 "../lib/Items/TransientDockItem.vala"
	return result;
#line 426 "TransientDockItem.c"
}

PlankTransientDockItem*
plank_transient_dock_item_construct (GType object_type)
{
	PlankTransientDockItem * self = NULL;
#line 28 "../lib/Items/TransientDockItem.vala"
	self = (PlankTransientDockItem*) plank_application_dock_item_construct (object_type);
#line 28 "../lib/Items/TransientDockItem.vala"
	return self;
#line 437 "TransientDockItem.c"
}

PlankTransientDockItem*
plank_transient_dock_item_new (void)
{
#line 28 "../lib/Items/TransientDockItem.vala"
	return plank_transient_dock_item_construct (PLANK_TYPE_TRANSIENT_DOCK_ITEM);
#line 445 "TransientDockItem.c"
}

static GObject *
plank_transient_dock_item_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	PlankTransientDockItem * self;
	BamfApplication* _tmp0_;
	BamfApplication* _tmp1_;
#line 44 "../lib/Items/TransientDockItem.vala"
	parent_class = G_OBJECT_CLASS (plank_transient_dock_item_parent_class);
#line 44 "../lib/Items/TransientDockItem.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 44 "../lib/Items/TransientDockItem.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_TRANSIENT_DOCK_ITEM, PlankTransientDockItem);
#line 46 "../lib/Items/TransientDockItem.vala"
	_tmp0_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 46 "../lib/Items/TransientDockItem.vala"
	_tmp1_ = _tmp0_;
#line 46 "../lib/Items/TransientDockItem.vala"
	if (_tmp1_ != NULL) {
#line 470 "TransientDockItem.c"
		const gchar* launcher = NULL;
		BamfApplication* _tmp2_;
		BamfApplication* _tmp3_;
		const gchar* _tmp4_;
		gboolean _tmp5_ = FALSE;
		const gchar* _tmp6_;
#line 47 "../lib/Items/TransientDockItem.vala"
		_tmp2_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 47 "../lib/Items/TransientDockItem.vala"
		_tmp3_ = _tmp2_;
#line 47 "../lib/Items/TransientDockItem.vala"
		_tmp4_ = bamf_application_get_desktop_file (_tmp3_);
#line 47 "../lib/Items/TransientDockItem.vala"
		launcher = _tmp4_;
#line 48 "../lib/Items/TransientDockItem.vala"
		_tmp6_ = launcher;
#line 48 "../lib/Items/TransientDockItem.vala"
		if (_tmp6_ == NULL) {
#line 48 "../lib/Items/TransientDockItem.vala"
			_tmp5_ = TRUE;
#line 491 "TransientDockItem.c"
		} else {
			const gchar* _tmp7_;
#line 48 "../lib/Items/TransientDockItem.vala"
			_tmp7_ = launcher;
#line 48 "../lib/Items/TransientDockItem.vala"
			_tmp5_ = g_strcmp0 (_tmp7_, "") == 0;
#line 498 "TransientDockItem.c"
		}
#line 48 "../lib/Items/TransientDockItem.vala"
		if (_tmp5_) {
#line 502 "TransientDockItem.c"
			BamfApplication* _tmp8_;
			BamfApplication* _tmp9_;
			gchar* _tmp10_;
			gchar* _tmp11_;
#line 49 "../lib/Items/TransientDockItem.vala"
			_tmp8_ = plank_application_dock_item_get_App ((PlankApplicationDockItem*) self);
#line 49 "../lib/Items/TransientDockItem.vala"
			_tmp9_ = _tmp8_;
#line 49 "../lib/Items/TransientDockItem.vala"
			_tmp10_ = bamf_view_get_name ((BamfView*) _tmp9_);
#line 49 "../lib/Items/TransientDockItem.vala"
			_tmp11_ = _tmp10_;
#line 49 "../lib/Items/TransientDockItem.vala"
			plank_dock_element_set_Text ((PlankDockElement*) self, _tmp11_);
#line 49 "../lib/Items/TransientDockItem.vala"
			_g_free0 (_tmp11_);
#line 50 "../lib/Items/TransientDockItem.vala"
			plank_transient_dock_item_update_forced_pixbuf (self);
#line 521 "TransientDockItem.c"
		} else {
			PlankDockItemPreferences* _tmp12_;
			PlankDockItemPreferences* _tmp13_;
			const gchar* _tmp14_;
#line 52 "../lib/Items/TransientDockItem.vala"
			_tmp12_ = plank_dock_item_get_Prefs ((PlankDockItem*) self);
#line 52 "../lib/Items/TransientDockItem.vala"
			_tmp13_ = _tmp12_;
#line 52 "../lib/Items/TransientDockItem.vala"
			_tmp14_ = launcher;
#line 52 "../lib/Items/TransientDockItem.vala"
			plank_dock_item_preferences_set_Launcher (_tmp13_, _tmp14_);
#line 53 "../lib/Items/TransientDockItem.vala"
			plank_dock_item_load_from_launcher ((PlankDockItem*) self);
#line 536 "TransientDockItem.c"
		}
	} else {
		PlankDockItemPreferences* _tmp15_;
		PlankDockItemPreferences* _tmp16_;
		const gchar* _tmp17_;
		const gchar* _tmp18_;
#line 55 "../lib/Items/TransientDockItem.vala"
		_tmp15_ = plank_dock_item_get_Prefs ((PlankDockItem*) self);
#line 55 "../lib/Items/TransientDockItem.vala"
		_tmp16_ = _tmp15_;
#line 55 "../lib/Items/TransientDockItem.vala"
		_tmp17_ = plank_dock_item_preferences_get_Launcher (_tmp16_);
#line 55 "../lib/Items/TransientDockItem.vala"
		_tmp18_ = _tmp17_;
#line 55 "../lib/Items/TransientDockItem.vala"
		if (g_strcmp0 (_tmp18_, "") != 0) {
#line 56 "../lib/Items/TransientDockItem.vala"
			plank_dock_item_load_from_launcher ((PlankDockItem*) self);
#line 555 "TransientDockItem.c"
		} else {
#line 58 "../lib/Items/TransientDockItem.vala"
			g_critical ("TransientDockItem.vala:58: No source of information for this item avai" \
"lable");
#line 559 "TransientDockItem.c"
		}
	}
#line 44 "../lib/Items/TransientDockItem.vala"
	return obj;
#line 564 "TransientDockItem.c"
}

static void
plank_transient_dock_item_class_init (PlankTransientDockItemClass * klass,
                                      gpointer klass_data)
{
#line 28 "../lib/Items/TransientDockItem.vala"
	plank_transient_dock_item_parent_class = g_type_class_peek_parent (klass);
#line 28 "../lib/Items/TransientDockItem.vala"
	g_type_class_adjust_private_offset (klass, &PlankTransientDockItem_private_offset);
#line 28 "../lib/Items/TransientDockItem.vala"
	((PlankDockElementClass *) klass)->can_be_removed = (gboolean (*) (PlankDockElement*)) plank_transient_dock_item_real_can_be_removed;
#line 28 "../lib/Items/TransientDockItem.vala"
	((PlankDockItemClass *) klass)->is_valid = (gboolean (*) (PlankDockItem*)) plank_transient_dock_item_real_is_valid;
#line 28 "../lib/Items/TransientDockItem.vala"
	G_OBJECT_CLASS (klass)->constructor = plank_transient_dock_item_constructor;
#line 28 "../lib/Items/TransientDockItem.vala"
	G_OBJECT_CLASS (klass)->finalize = plank_transient_dock_item_finalize;
#line 583 "TransientDockItem.c"
}

static void
plank_transient_dock_item_instance_init (PlankTransientDockItem * self,
                                         gpointer klass)
{
#line 28 "../lib/Items/TransientDockItem.vala"
	self->priv = plank_transient_dock_item_get_instance_private (self);
#line 32 "../lib/Items/TransientDockItem.vala"
	self->priv->delayed_update_timer_id = 0U;
#line 594 "TransientDockItem.c"
}

static void
plank_transient_dock_item_finalize (GObject * obj)
{
	PlankTransientDockItem * self;
#line 28 "../lib/Items/TransientDockItem.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_TRANSIENT_DOCK_ITEM, PlankTransientDockItem);
#line 64 "../lib/Items/TransientDockItem.vala"
	if (self->priv->delayed_update_timer_id > 0U) {
#line 65 "../lib/Items/TransientDockItem.vala"
		g_source_remove (self->priv->delayed_update_timer_id);
#line 66 "../lib/Items/TransientDockItem.vala"
		self->priv->delayed_update_timer_id = 0U;
#line 609 "TransientDockItem.c"
	}
#line 28 "../lib/Items/TransientDockItem.vala"
	G_OBJECT_CLASS (plank_transient_dock_item_parent_class)->finalize (obj);
#line 613 "TransientDockItem.c"
}

/**
 * A dock item for applications which aren't pinned or doesn't have a matched desktop-files.
 *
 * Usually this represents a running application while it is possible it is a virtual item
 * added through e.g. libunity-support to show specific application information.
 */
static GType
plank_transient_dock_item_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PlankTransientDockItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_transient_dock_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankTransientDockItem), 0, (GInstanceInitFunc) plank_transient_dock_item_instance_init, NULL };
	GType plank_transient_dock_item_type_id;
	plank_transient_dock_item_type_id = g_type_register_static (PLANK_TYPE_APPLICATION_DOCK_ITEM, "PlankTransientDockItem", &g_define_type_info, 0);
	PlankTransientDockItem_private_offset = g_type_add_instance_private (plank_transient_dock_item_type_id, sizeof (PlankTransientDockItemPrivate));
	return plank_transient_dock_item_type_id;
}

GType
plank_transient_dock_item_get_type (void)
{
	static volatile gsize plank_transient_dock_item_type_id__volatile = 0;
	if (g_once_init_enter (&plank_transient_dock_item_type_id__volatile)) {
		GType plank_transient_dock_item_type_id;
		plank_transient_dock_item_type_id = plank_transient_dock_item_get_type_once ();
		g_once_init_leave (&plank_transient_dock_item_type_id__volatile, plank_transient_dock_item_type_id);
	}
	return plank_transient_dock_item_type_id__volatile;
}
