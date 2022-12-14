/* PlankDockItem.c generated by valac 0.48.17, the Vala compiler
 * generated from PlankDockItem.vala, do not modify */

/**/
/*  Copyright (C) 2011 Robert Dyer, Rico Tzschichholz*/
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
#include <gio/gio.h>
#include <glib/gi18n-lib.h>

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

#define PLANK_TYPE_PLANK_DOCK_ITEM (plank_plank_dock_item_get_type ())
#define PLANK_PLANK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_PLANK_DOCK_ITEM, PlankPlankDockItem))
#define PLANK_PLANK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_PLANK_DOCK_ITEM, PlankPlankDockItemClass))
#define PLANK_IS_PLANK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_PLANK_DOCK_ITEM))
#define PLANK_IS_PLANK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_PLANK_DOCK_ITEM))
#define PLANK_PLANK_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_PLANK_DOCK_ITEM, PlankPlankDockItemClass))

typedef struct _PlankPlankDockItem PlankPlankDockItem;
typedef struct _PlankPlankDockItemClass PlankPlankDockItemClass;
typedef struct _PlankPlankDockItemPrivate PlankPlankDockItemPrivate;
enum  {
	PLANK_PLANK_DOCK_ITEM_0_PROPERTY,
	PLANK_PLANK_DOCK_ITEM_NUM_PROPERTIES
};
static GParamSpec* plank_plank_dock_item_properties[PLANK_PLANK_DOCK_ITEM_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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
typedef enum  {
	PLANK_XDG_SESSION_DESKTOP_GNOME = 1 << 0,
	PLANK_XDG_SESSION_DESKTOP_KDE = 1 << 1,
	PLANK_XDG_SESSION_DESKTOP_LXDE = 1 << 2,
	PLANK_XDG_SESSION_DESKTOP_MATE = 1 << 3,
	PLANK_XDG_SESSION_DESKTOP_RAZOR = 1 << 4,
	PLANK_XDG_SESSION_DESKTOP_ROX = 1 << 5,
	PLANK_XDG_SESSION_DESKTOP_TDE = 1 << 6,
	PLANK_XDG_SESSION_DESKTOP_UNITY = 1 << 7,
	PLANK_XDG_SESSION_DESKTOP_XFCE = 1 << 8,
	PLANK_XDG_SESSION_DESKTOP_EDE = 1 << 9,
	PLANK_XDG_SESSION_DESKTOP_CINNAMON = 1 << 10,
	PLANK_XDG_SESSION_DESKTOP_PANTHEON = 1 << 11,
	PLANK_XDG_SESSION_DESKTOP_OLD = 1 << 12,
	PLANK_XDG_SESSION_DESKTOP_UBUNTU = 1 << 13
} PlankXdgSessionDesktop;

#define PLANK_TYPE_XDG_SESSION_DESKTOP (plank_xdg_session_desktop_get_type ())
typedef enum  {
	PLANK_INDICATOR_STATE_NONE,
	PLANK_INDICATOR_STATE_SINGLE,
	PLANK_INDICATOR_STATE_SINGLE_PLUS
} PlankIndicatorState;

#define PLANK_TYPE_INDICATOR_STATE (plank_indicator_state_get_type ())

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

struct _PlankPlankDockItem {
	PlankDockItem parent_instance;
	PlankPlankDockItemPrivate * priv;
};

struct _PlankPlankDockItemClass {
	PlankDockItemClass parent_class;
};

static gpointer plank_plank_dock_item_parent_class = NULL;
static PlankPlankDockItem* plank_plank_dock_item_instance;
static PlankPlankDockItem* plank_plank_dock_item_instance = NULL;

GType plank_dock_element_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockElement, g_object_unref)
GType plank_popup_button_get_type (void) G_GNUC_CONST;
GType plank_animation_type_get_type (void) G_GNUC_CONST;
GType plank_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItem, g_object_unref)
GType plank_surface_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankSurface, g_object_unref)
GType plank_plank_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankPlankDockItem, g_object_unref)
gboolean plank_dock_element_can_be_removed (PlankDockElement* self);
PlankAnimationType plank_dock_element_on_clicked (PlankDockElement* self,
                                                  PlankPopupButton button,
                                                  GdkModifierType mod,
                                                  guint32 event_time);
GeeArrayList* plank_dock_element_get_menu_items (PlankDockElement* self);
PlankPlankDockItem* plank_plank_dock_item_get_instance (void);
static PlankPlankDockItem* plank_plank_dock_item_new (void);
static PlankPlankDockItem* plank_plank_dock_item_construct (GType object_type);
PlankDockItemPreferences* plank_dock_item_preferences_new (void);
PlankDockItemPreferences* plank_dock_item_preferences_construct (GType object_type);
GType plank_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankPreferences, g_object_unref)
GType plank_dock_item_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItemPreferences, g_object_unref)
static gboolean plank_plank_dock_item_real_can_be_removed (PlankDockElement* base);
static PlankAnimationType plank_plank_dock_item_real_on_clicked (PlankDockElement* base,
                                                          PlankPopupButton button,
                                                          GdkModifierType mod,
                                                          guint32 event_time);
static GeeArrayList* plank_plank_dock_item_real_get_menu_items (PlankDockElement* base);
GtkMenuItem* plank_dock_element_create_menu_item (const gchar* title,
                                                  const gchar* icon,
                                                  gboolean force_show_icon);
static void __lambda24_ (PlankPlankDockItem* self);
static void ___lambda24__gtk_menu_item_activate (GtkMenuItem* _sender,
                                          gpointer self);
static void __lambda25_ (PlankPlankDockItem* self);
static void ___lambda25__gtk_menu_item_activate (GtkMenuItem* _sender,
                                          gpointer self);
static void __lambda26_ (PlankPlankDockItem* self);
static void ___lambda26__gtk_menu_item_activate (GtkMenuItem* _sender,
                                          gpointer self);
static void __lambda27_ (PlankPlankDockItem* self);
static void ___lambda27__gtk_menu_item_activate (GtkMenuItem* _sender,
                                          gpointer self);
GType plank_xdg_session_desktop_get_type (void) G_GNUC_CONST;
gboolean plank_environment_is_session_desktop (PlankXdgSessionDesktop type);
static void ___lambda28_ (PlankPlankDockItem* self);
static void ____lambda28__gtk_menu_item_activate (GtkMenuItem* _sender,
                                           gpointer self);
static GObject * plank_plank_dock_item_constructor (GType type,
                                             guint n_construct_properties,
                                             GObjectConstructParam * construct_properties);
GType plank_indicator_state_get_type (void) G_GNUC_CONST;
void plank_dock_item_set_Indicator (PlankDockItem* self,
                                    PlankIndicatorState value);
static void plank_plank_dock_item_finalize (GObject * obj);
static GType plank_plank_dock_item_get_type_once (void);

PlankPlankDockItem*
plank_plank_dock_item_get_instance (void)
{
	PlankPlankDockItem* _tmp0_;
	PlankPlankDockItem* _tmp2_;
	PlankPlankDockItem* result = NULL;
#line 31 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = plank_plank_dock_item_instance;
#line 31 "../lib/Items/PlankDockItem.vala"
	if (_tmp0_ == NULL) {
#line 259 "PlankDockItem.c"
		PlankPlankDockItem* _tmp1_;
#line 32 "../lib/Items/PlankDockItem.vala"
		_tmp1_ = plank_plank_dock_item_new ();
#line 32 "../lib/Items/PlankDockItem.vala"
		_g_object_unref0 (plank_plank_dock_item_instance);
#line 32 "../lib/Items/PlankDockItem.vala"
		plank_plank_dock_item_instance = _tmp1_;
#line 267 "PlankDockItem.c"
	}
#line 34 "../lib/Items/PlankDockItem.vala"
	_tmp2_ = plank_plank_dock_item_instance;
#line 34 "../lib/Items/PlankDockItem.vala"
	result = _tmp2_;
#line 34 "../lib/Items/PlankDockItem.vala"
	return result;
#line 275 "PlankDockItem.c"
}

static PlankPlankDockItem*
plank_plank_dock_item_construct (GType object_type)
{
	PlankPlankDockItem * self = NULL;
	PlankDockItemPreferences* _tmp0_;
	PlankDockItemPreferences* _tmp1_;
#line 39 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = plank_dock_item_preferences_new ();
#line 39 "../lib/Items/PlankDockItem.vala"
	_tmp1_ = _tmp0_;
#line 39 "../lib/Items/PlankDockItem.vala"
	self = (PlankPlankDockItem*) g_object_new (object_type, "Prefs", _tmp1_, "Text", "Plank", "Icon", "plank", NULL);
#line 39 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (_tmp1_);
#line 37 "../lib/Items/PlankDockItem.vala"
	return self;
#line 294 "PlankDockItem.c"
}

static PlankPlankDockItem*
plank_plank_dock_item_new (void)
{
#line 37 "../lib/Items/PlankDockItem.vala"
	return plank_plank_dock_item_construct (PLANK_TYPE_PLANK_DOCK_ITEM);
#line 302 "PlankDockItem.c"
}

/**
 * {@inheritDoc}
 */
static gboolean
plank_plank_dock_item_real_can_be_removed (PlankDockElement* base)
{
	PlankPlankDockItem * self;
	gboolean result = FALSE;
#line 51 "../lib/Items/PlankDockItem.vala"
	self = (PlankPlankDockItem*) base;
#line 53 "../lib/Items/PlankDockItem.vala"
	result = FALSE;
#line 53 "../lib/Items/PlankDockItem.vala"
	return result;
#line 319 "PlankDockItem.c"
}

/**
 * {@inheritDoc}
 */
static PlankAnimationType
plank_plank_dock_item_real_on_clicked (PlankDockElement* base,
                                       PlankPopupButton button,
                                       GdkModifierType mod,
                                       guint32 event_time)
{
	PlankPlankDockItem * self;
	GApplication* _tmp0_;
	PlankAnimationType result = 0;
#line 59 "../lib/Items/PlankDockItem.vala"
	self = (PlankPlankDockItem*) base;
#line 61 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 61 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "preferences", NULL);
#line 63 "../lib/Items/PlankDockItem.vala"
	result = PLANK_ANIMATION_TYPE_DARKEN;
#line 63 "../lib/Items/PlankDockItem.vala"
	return result;
#line 344 "PlankDockItem.c"
}

/**
 * {@inheritDoc}
 */
static void
__lambda24_ (PlankPlankDockItem* self)
{
	GApplication* _tmp0_;
#line 74 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 74 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "help", NULL);
#line 358 "PlankDockItem.c"
}

static void
___lambda24__gtk_menu_item_activate (GtkMenuItem* _sender,
                                     gpointer self)
{
#line 74 "../lib/Items/PlankDockItem.vala"
	__lambda24_ ((PlankPlankDockItem*) self);
#line 367 "PlankDockItem.c"
}

static void
__lambda25_ (PlankPlankDockItem* self)
{
	GApplication* _tmp0_;
#line 78 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 78 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "translate", NULL);
#line 378 "PlankDockItem.c"
}

static void
___lambda25__gtk_menu_item_activate (GtkMenuItem* _sender,
                                     gpointer self)
{
#line 78 "../lib/Items/PlankDockItem.vala"
	__lambda25_ ((PlankPlankDockItem*) self);
#line 387 "PlankDockItem.c"
}

static void
__lambda26_ (PlankPlankDockItem* self)
{
	GApplication* _tmp0_;
#line 84 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 84 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "preferences", NULL);
#line 398 "PlankDockItem.c"
}

static void
___lambda26__gtk_menu_item_activate (GtkMenuItem* _sender,
                                     gpointer self)
{
#line 84 "../lib/Items/PlankDockItem.vala"
	__lambda26_ ((PlankPlankDockItem*) self);
#line 407 "PlankDockItem.c"
}

static void
__lambda27_ (PlankPlankDockItem* self)
{
	GApplication* _tmp0_;
#line 88 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 88 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "about", NULL);
#line 418 "PlankDockItem.c"
}

static void
___lambda27__gtk_menu_item_activate (GtkMenuItem* _sender,
                                     gpointer self)
{
#line 88 "../lib/Items/PlankDockItem.vala"
	__lambda27_ ((PlankPlankDockItem*) self);
#line 427 "PlankDockItem.c"
}

static void
___lambda28_ (PlankPlankDockItem* self)
{
	GApplication* _tmp0_;
#line 96 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = g_application_get_default ();
#line 96 "../lib/Items/PlankDockItem.vala"
	g_action_group_activate_action ((GActionGroup*) _tmp0_, "quit", NULL);
#line 438 "PlankDockItem.c"
}

static void
____lambda28__gtk_menu_item_activate (GtkMenuItem* _sender,
                                      gpointer self)
{
#line 96 "../lib/Items/PlankDockItem.vala"
	___lambda28_ ((PlankPlankDockItem*) self);
#line 447 "PlankDockItem.c"
}

static GeeArrayList*
plank_plank_dock_item_real_get_menu_items (PlankDockElement* base)
{
	PlankPlankDockItem * self;
	GeeArrayList* items = NULL;
	GeeArrayList* _tmp0_;
	GtkMenuItem* item = NULL;
	GtkMenuItem* _tmp1_;
	GtkMenuItem* _tmp2_;
	GeeArrayList* _tmp3_;
	GtkMenuItem* _tmp4_;
	GtkMenuItem* _tmp5_;
	GtkMenuItem* _tmp6_;
	GeeArrayList* _tmp7_;
	GtkMenuItem* _tmp8_;
	GeeArrayList* _tmp9_;
	GtkSeparatorMenuItem* _tmp10_;
	GtkSeparatorMenuItem* _tmp11_;
	GtkImageMenuItem* _tmp12_;
	GtkMenuItem* _tmp13_;
	GeeArrayList* _tmp14_;
	GtkMenuItem* _tmp15_;
	GtkImageMenuItem* _tmp16_;
	GtkMenuItem* _tmp17_;
	GeeArrayList* _tmp18_;
	GtkMenuItem* _tmp19_;
	GeeArrayList* result = NULL;
#line 69 "../lib/Items/PlankDockItem.vala"
	self = (PlankPlankDockItem*) base;
#line 71 "../lib/Items/PlankDockItem.vala"
	_tmp0_ = gee_array_list_new (gtk_menu_item_get_type (), (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, NULL, NULL, NULL);
#line 71 "../lib/Items/PlankDockItem.vala"
	items = _tmp0_;
#line 73 "../lib/Items/PlankDockItem.vala"
	_tmp1_ = plank_dock_element_create_menu_item (_ ("Get _Help Online..."), "help", FALSE);
#line 73 "../lib/Items/PlankDockItem.vala"
	item = _tmp1_;
#line 74 "../lib/Items/PlankDockItem.vala"
	_tmp2_ = item;
#line 74 "../lib/Items/PlankDockItem.vala"
	g_signal_connect_object (_tmp2_, "activate", (GCallback) ___lambda24__gtk_menu_item_activate, self, 0);
#line 75 "../lib/Items/PlankDockItem.vala"
	_tmp3_ = items;
#line 75 "../lib/Items/PlankDockItem.vala"
	_tmp4_ = item;
#line 75 "../lib/Items/PlankDockItem.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp3_, _tmp4_);
#line 77 "../lib/Items/PlankDockItem.vala"
	_tmp5_ = plank_dock_element_create_menu_item (_ ("_Translate This Application..."), "locale", FALSE);
#line 77 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (item);
#line 77 "../lib/Items/PlankDockItem.vala"
	item = _tmp5_;
#line 78 "../lib/Items/PlankDockItem.vala"
	_tmp6_ = item;
#line 78 "../lib/Items/PlankDockItem.vala"
	g_signal_connect_object (_tmp6_, "activate", (GCallback) ___lambda25__gtk_menu_item_activate, self, 0);
#line 79 "../lib/Items/PlankDockItem.vala"
	_tmp7_ = items;
#line 79 "../lib/Items/PlankDockItem.vala"
	_tmp8_ = item;
#line 79 "../lib/Items/PlankDockItem.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, _tmp8_);
#line 81 "../lib/Items/PlankDockItem.vala"
	_tmp9_ = items;
#line 81 "../lib/Items/PlankDockItem.vala"
	_tmp10_ = (GtkSeparatorMenuItem*) gtk_separator_menu_item_new ();
#line 81 "../lib/Items/PlankDockItem.vala"
	g_object_ref_sink (_tmp10_);
#line 81 "../lib/Items/PlankDockItem.vala"
	_tmp11_ = _tmp10_;
#line 81 "../lib/Items/PlankDockItem.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp9_, (GtkMenuItem*) _tmp11_);
#line 81 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (_tmp11_);
#line 83 "../lib/Items/PlankDockItem.vala"
	_tmp12_ = (GtkImageMenuItem*) gtk_image_menu_item_new_from_stock (GTK_STOCK_PREFERENCES, NULL);
#line 83 "../lib/Items/PlankDockItem.vala"
	g_object_ref_sink (_tmp12_);
#line 83 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (item);
#line 83 "../lib/Items/PlankDockItem.vala"
	item = (GtkMenuItem*) _tmp12_;
#line 84 "../lib/Items/PlankDockItem.vala"
	_tmp13_ = item;
#line 84 "../lib/Items/PlankDockItem.vala"
	g_signal_connect_object (_tmp13_, "activate", (GCallback) ___lambda26__gtk_menu_item_activate, self, 0);
#line 85 "../lib/Items/PlankDockItem.vala"
	_tmp14_ = items;
#line 85 "../lib/Items/PlankDockItem.vala"
	_tmp15_ = item;
#line 85 "../lib/Items/PlankDockItem.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp14_, _tmp15_);
#line 87 "../lib/Items/PlankDockItem.vala"
	_tmp16_ = (GtkImageMenuItem*) gtk_image_menu_item_new_from_stock (GTK_STOCK_ABOUT, NULL);
#line 87 "../lib/Items/PlankDockItem.vala"
	g_object_ref_sink (_tmp16_);
#line 87 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (item);
#line 87 "../lib/Items/PlankDockItem.vala"
	item = (GtkMenuItem*) _tmp16_;
#line 88 "../lib/Items/PlankDockItem.vala"
	_tmp17_ = item;
#line 88 "../lib/Items/PlankDockItem.vala"
	g_signal_connect_object (_tmp17_, "activate", (GCallback) ___lambda27__gtk_menu_item_activate, self, 0);
#line 89 "../lib/Items/PlankDockItem.vala"
	_tmp18_ = items;
#line 89 "../lib/Items/PlankDockItem.vala"
	_tmp19_ = item;
#line 89 "../lib/Items/PlankDockItem.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp18_, _tmp19_);
#line 92 "../lib/Items/PlankDockItem.vala"
	if (!plank_environment_is_session_desktop (PLANK_XDG_SESSION_DESKTOP_PANTHEON)) {
#line 563 "PlankDockItem.c"
		GeeArrayList* _tmp20_;
		GtkSeparatorMenuItem* _tmp21_;
		GtkSeparatorMenuItem* _tmp22_;
		GtkImageMenuItem* _tmp23_;
		GtkMenuItem* _tmp24_;
		GeeArrayList* _tmp25_;
		GtkMenuItem* _tmp26_;
#line 93 "../lib/Items/PlankDockItem.vala"
		_tmp20_ = items;
#line 93 "../lib/Items/PlankDockItem.vala"
		_tmp21_ = (GtkSeparatorMenuItem*) gtk_separator_menu_item_new ();
#line 93 "../lib/Items/PlankDockItem.vala"
		g_object_ref_sink (_tmp21_);
#line 93 "../lib/Items/PlankDockItem.vala"
		_tmp22_ = _tmp21_;
#line 93 "../lib/Items/PlankDockItem.vala"
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp20_, (GtkMenuItem*) _tmp22_);
#line 93 "../lib/Items/PlankDockItem.vala"
		_g_object_unref0 (_tmp22_);
#line 95 "../lib/Items/PlankDockItem.vala"
		_tmp23_ = (GtkImageMenuItem*) gtk_image_menu_item_new_from_stock (GTK_STOCK_QUIT, NULL);
#line 95 "../lib/Items/PlankDockItem.vala"
		g_object_ref_sink (_tmp23_);
#line 95 "../lib/Items/PlankDockItem.vala"
		_g_object_unref0 (item);
#line 95 "../lib/Items/PlankDockItem.vala"
		item = (GtkMenuItem*) _tmp23_;
#line 96 "../lib/Items/PlankDockItem.vala"
		_tmp24_ = item;
#line 96 "../lib/Items/PlankDockItem.vala"
		g_signal_connect_object (_tmp24_, "activate", (GCallback) ____lambda28__gtk_menu_item_activate, self, 0);
#line 97 "../lib/Items/PlankDockItem.vala"
		_tmp25_ = items;
#line 97 "../lib/Items/PlankDockItem.vala"
		_tmp26_ = item;
#line 97 "../lib/Items/PlankDockItem.vala"
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp25_, _tmp26_);
#line 601 "PlankDockItem.c"
	}
#line 100 "../lib/Items/PlankDockItem.vala"
	result = items;
#line 100 "../lib/Items/PlankDockItem.vala"
	_g_object_unref0 (item);
#line 100 "../lib/Items/PlankDockItem.vala"
	return result;
#line 609 "PlankDockItem.c"
}

static GObject *
plank_plank_dock_item_constructor (GType type,
                                   guint n_construct_properties,
                                   GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	PlankPlankDockItem * self;
#line 42 "../lib/Items/PlankDockItem.vala"
	parent_class = G_OBJECT_CLASS (plank_plank_dock_item_parent_class);
#line 42 "../lib/Items/PlankDockItem.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 42 "../lib/Items/PlankDockItem.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_PLANK_DOCK_ITEM, PlankPlankDockItem);
#line 45 "../lib/Items/PlankDockItem.vala"
	plank_dock_item_set_Indicator ((PlankDockItem*) self, PLANK_INDICATOR_STATE_SINGLE);
#line 42 "../lib/Items/PlankDockItem.vala"
	return obj;
#line 630 "PlankDockItem.c"
}

static void
plank_plank_dock_item_class_init (PlankPlankDockItemClass * klass,
                                  gpointer klass_data)
{
#line 25 "../lib/Items/PlankDockItem.vala"
	plank_plank_dock_item_parent_class = g_type_class_peek_parent (klass);
#line 25 "../lib/Items/PlankDockItem.vala"
	((PlankDockElementClass *) klass)->can_be_removed = (gboolean (*) (PlankDockElement*)) plank_plank_dock_item_real_can_be_removed;
#line 25 "../lib/Items/PlankDockItem.vala"
	((PlankDockElementClass *) klass)->on_clicked = (PlankAnimationType (*) (PlankDockElement*, PlankPopupButton, GdkModifierType, guint32)) plank_plank_dock_item_real_on_clicked;
#line 25 "../lib/Items/PlankDockItem.vala"
	((PlankDockElementClass *) klass)->get_menu_items = (GeeArrayList* (*) (PlankDockElement*)) plank_plank_dock_item_real_get_menu_items;
#line 25 "../lib/Items/PlankDockItem.vala"
	G_OBJECT_CLASS (klass)->constructor = plank_plank_dock_item_constructor;
#line 25 "../lib/Items/PlankDockItem.vala"
	G_OBJECT_CLASS (klass)->finalize = plank_plank_dock_item_finalize;
#line 649 "PlankDockItem.c"
}

static void
plank_plank_dock_item_instance_init (PlankPlankDockItem * self,
                                     gpointer klass)
{
}

static void
plank_plank_dock_item_finalize (GObject * obj)
{
	PlankPlankDockItem * self;
#line 25 "../lib/Items/PlankDockItem.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_PLANK_DOCK_ITEM, PlankPlankDockItem);
#line 25 "../lib/Items/PlankDockItem.vala"
	G_OBJECT_CLASS (plank_plank_dock_item_parent_class)->finalize (obj);
#line 666 "PlankDockItem.c"
}

/**
 * A dock item for the dock itself.  Has things like about, help, quit etc.
 */
static GType
plank_plank_dock_item_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PlankPlankDockItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_plank_dock_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankPlankDockItem), 0, (GInstanceInitFunc) plank_plank_dock_item_instance_init, NULL };
	GType plank_plank_dock_item_type_id;
	plank_plank_dock_item_type_id = g_type_register_static (PLANK_TYPE_DOCK_ITEM, "PlankPlankDockItem", &g_define_type_info, 0);
	return plank_plank_dock_item_type_id;
}

GType
plank_plank_dock_item_get_type (void)
{
	static volatile gsize plank_plank_dock_item_type_id__volatile = 0;
	if (g_once_init_enter (&plank_plank_dock_item_type_id__volatile)) {
		GType plank_plank_dock_item_type_id;
		plank_plank_dock_item_type_id = plank_plank_dock_item_get_type_once ();
		g_once_init_leave (&plank_plank_dock_item_type_id__volatile, plank_plank_dock_item_type_id);
	}
	return plank_plank_dock_item_type_id__volatile;
}

