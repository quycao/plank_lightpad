/* DockItemDrawValue.c generated by valac 0.48.17, the Vala compiler
 * generated from DockItemDrawValue.vala, do not modify */

/**/
/*  Copyright (C) 2015 Rico Tzschichholz*/
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
#include <glib.h>
#include <gee.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <gobject/gvaluecollector.h>

#define PLANK_TYPE_DOCK_ELEMENT (plank_dock_element_get_type ())
#define PLANK_DOCK_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ELEMENT, PlankDockElement))
#define PLANK_DOCK_ELEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ELEMENT, PlankDockElementClass))
#define PLANK_IS_DOCK_ELEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ELEMENT))
#define PLANK_IS_DOCK_ELEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ELEMENT))
#define PLANK_DOCK_ELEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ELEMENT, PlankDockElementClass))

typedef struct _PlankDockElement PlankDockElement;
typedef struct _PlankDockElementClass PlankDockElementClass;

#define PLANK_TYPE_DOCK_ITEM (plank_dock_item_get_type ())
#define PLANK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ITEM, PlankDockItem))
#define PLANK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ITEM, PlankDockItemClass))
#define PLANK_IS_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ITEM))
#define PLANK_IS_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ITEM))
#define PLANK_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ITEM, PlankDockItemClass))

typedef struct _PlankDockItem PlankDockItem;
typedef struct _PlankDockItemClass PlankDockItemClass;

#define PLANK_TYPE_DOCK_ITEM_DRAW_VALUE (plank_dock_item_draw_value_get_type ())
#define PLANK_DOCK_ITEM_DRAW_VALUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ITEM_DRAW_VALUE, PlankDockItemDrawValue))
#define PLANK_DOCK_ITEM_DRAW_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ITEM_DRAW_VALUE, PlankDockItemDrawValueClass))
#define PLANK_IS_DOCK_ITEM_DRAW_VALUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ITEM_DRAW_VALUE))
#define PLANK_IS_DOCK_ITEM_DRAW_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ITEM_DRAW_VALUE))
#define PLANK_DOCK_ITEM_DRAW_VALUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ITEM_DRAW_VALUE, PlankDockItemDrawValueClass))

typedef struct _PlankDockItemDrawValue PlankDockItemDrawValue;
typedef struct _PlankDockItemDrawValueClass PlankDockItemDrawValueClass;
typedef void (*PlankDrawValueFunc) (PlankDockItem* item, PlankDockItemDrawValue* draw_value, gpointer user_data);
typedef void (*PlankDrawValuesFunc) (GeeHashMap* draw_values, gpointer user_data);

#define PLANK_TYPE_POINT_D (plank_point_d_get_type ())
typedef struct _PlankPointD PlankPointD;
typedef struct _PlankDockItemDrawValuePrivate PlankDockItemDrawValuePrivate;
typedef struct _PlankParamSpecDockItemDrawValue PlankParamSpecDockItemDrawValue;

struct _PlankPointD {
	gdouble x;
	gdouble y;
};

struct _PlankDockItemDrawValue {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PlankDockItemDrawValuePrivate * priv;
	PlankPointD center;
	PlankPointD static_center;
	gdouble icon_size;
	GdkRectangle hover_region;
	GdkRectangle draw_region;
	GdkRectangle background_region;
	gdouble zoom;
	gdouble opacity;
	gdouble darken;
	gdouble lighten;
	gboolean show_indicator;
};

struct _PlankDockItemDrawValueClass {
	GTypeClass parent_class;
	void (*finalize) (PlankDockItemDrawValue *self);
};

struct _PlankParamSpecDockItemDrawValue {
	GParamSpec parent_instance;
};

static gpointer plank_dock_item_draw_value_parent_class = NULL;

GType plank_dock_element_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockElement, g_object_unref)
GType plank_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItem, g_object_unref)
gpointer plank_dock_item_draw_value_ref (gpointer instance);
void plank_dock_item_draw_value_unref (gpointer instance);
GParamSpec* plank_param_spec_dock_item_draw_value (const gchar* name,
                                                   const gchar* nick,
                                                   const gchar* blurb,
                                                   GType object_type,
                                                   GParamFlags flags);
void plank_value_set_dock_item_draw_value (GValue* value,
                                           gpointer v_object);
void plank_value_take_dock_item_draw_value (GValue* value,
                                            gpointer v_object);
gpointer plank_value_get_dock_item_draw_value (const GValue* value);
GType plank_dock_item_draw_value_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItemDrawValue, plank_dock_item_draw_value_unref)
GType plank_point_d_get_type (void) G_GNUC_CONST;
PlankPointD* plank_point_d_dup (const PlankPointD* self);
void plank_point_d_free (PlankPointD* self);
void plank_dock_item_draw_value_move_in (PlankDockItemDrawValue* self,
                                         GtkPositionType position,
                                         gdouble damount);
void plank_dock_item_draw_value_move_right (PlankDockItemDrawValue* self,
                                            GtkPositionType position,
                                            gdouble damount);
PlankDockItemDrawValue* plank_dock_item_draw_value_new (void);
PlankDockItemDrawValue* plank_dock_item_draw_value_construct (GType object_type);
static void plank_dock_item_draw_value_finalize (PlankDockItemDrawValue * obj);
static GType plank_dock_item_draw_value_get_type_once (void);

PlankPointD*
plank_point_d_dup (const PlankPointD* self)
{
	PlankPointD* dup;
#line 37 "../lib/Items/DockItemDrawValue.vala"
	dup = g_new0 (PlankPointD, 1);
#line 37 "../lib/Items/DockItemDrawValue.vala"
	memcpy (dup, self, sizeof (PlankPointD));
#line 37 "../lib/Items/DockItemDrawValue.vala"
	return dup;
#line 146 "DockItemDrawValue.c"
}

void
plank_point_d_free (PlankPointD* self)
{
#line 37 "../lib/Items/DockItemDrawValue.vala"
	g_free (self);
#line 154 "DockItemDrawValue.c"
}

static GType
plank_point_d_get_type_once (void)
{
	GType plank_point_d_type_id;
	plank_point_d_type_id = g_boxed_type_register_static ("PlankPointD", (GBoxedCopyFunc) plank_point_d_dup, (GBoxedFreeFunc) plank_point_d_free);
	return plank_point_d_type_id;
}

GType
plank_point_d_get_type (void)
{
	static volatile gsize plank_point_d_type_id__volatile = 0;
	if (g_once_init_enter (&plank_point_d_type_id__volatile)) {
		GType plank_point_d_type_id;
		plank_point_d_type_id = plank_point_d_get_type_once ();
		g_once_init_leave (&plank_point_d_type_id__volatile, plank_point_d_type_id);
	}
	return plank_point_d_type_id__volatile;
}

void
plank_dock_item_draw_value_move_in (PlankDockItemDrawValue* self,
                                    GtkPositionType position,
                                    gdouble damount)
{
	gint amount = 0;
#line 64 "../lib/Items/DockItemDrawValue.vala"
	g_return_if_fail (self != NULL);
#line 66 "../lib/Items/DockItemDrawValue.vala"
	amount = (gint) damount;
#line 68 "../lib/Items/DockItemDrawValue.vala"
	switch (position) {
#line 189 "DockItemDrawValue.c"
		default:
#line 68 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_BOTTOM:
#line 193 "DockItemDrawValue.c"
		{
#line 71 "../lib/Items/DockItemDrawValue.vala"
			self->center.y = self->center.y - damount;
#line 72 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.y = self->static_center.y - damount;
#line 73 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.y = self->hover_region.y - amount;
#line 74 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.y = self->draw_region.y - amount;
#line 75 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 205 "DockItemDrawValue.c"
		}
#line 68 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_TOP:
#line 209 "DockItemDrawValue.c"
		{
#line 77 "../lib/Items/DockItemDrawValue.vala"
			self->center.y = self->center.y + damount;
#line 78 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.y = self->static_center.y + damount;
#line 79 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.y = self->hover_region.y + amount;
#line 80 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.y = self->draw_region.y + amount;
#line 81 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 221 "DockItemDrawValue.c"
		}
#line 68 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_LEFT:
#line 225 "DockItemDrawValue.c"
		{
#line 83 "../lib/Items/DockItemDrawValue.vala"
			self->center.x = self->center.x + damount;
#line 84 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.x = self->static_center.x + damount;
#line 85 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.x = self->hover_region.x + amount;
#line 86 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.x = self->draw_region.x + amount;
#line 87 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 237 "DockItemDrawValue.c"
		}
#line 68 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_RIGHT:
#line 241 "DockItemDrawValue.c"
		{
#line 89 "../lib/Items/DockItemDrawValue.vala"
			self->center.x = self->center.x - damount;
#line 90 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.x = self->static_center.x - damount;
#line 91 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.x = self->hover_region.x - amount;
#line 92 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.x = self->draw_region.x - amount;
#line 93 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 253 "DockItemDrawValue.c"
		}
	}
}

void
plank_dock_item_draw_value_move_right (PlankDockItemDrawValue* self,
                                       GtkPositionType position,
                                       gdouble damount)
{
	gint amount = 0;
#line 97 "../lib/Items/DockItemDrawValue.vala"
	g_return_if_fail (self != NULL);
#line 99 "../lib/Items/DockItemDrawValue.vala"
	amount = (gint) damount;
#line 101 "../lib/Items/DockItemDrawValue.vala"
	switch (position) {
#line 270 "DockItemDrawValue.c"
		default:
#line 101 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_BOTTOM:
#line 274 "DockItemDrawValue.c"
		{
#line 104 "../lib/Items/DockItemDrawValue.vala"
			self->center.x = self->center.x + damount;
#line 105 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.x = self->static_center.x + damount;
#line 106 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.x = self->hover_region.x + amount;
#line 107 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.x = self->draw_region.x + amount;
#line 108 "../lib/Items/DockItemDrawValue.vala"
			self->background_region.x = self->background_region.x + amount;
#line 109 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 288 "DockItemDrawValue.c"
		}
#line 101 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_TOP:
#line 292 "DockItemDrawValue.c"
		{
#line 111 "../lib/Items/DockItemDrawValue.vala"
			self->center.x = self->center.x + damount;
#line 112 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.x = self->static_center.x + damount;
#line 113 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.x = self->hover_region.x + amount;
#line 114 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.x = self->draw_region.x + amount;
#line 115 "../lib/Items/DockItemDrawValue.vala"
			self->background_region.x = self->background_region.x + amount;
#line 116 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 306 "DockItemDrawValue.c"
		}
#line 101 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_LEFT:
#line 310 "DockItemDrawValue.c"
		{
#line 118 "../lib/Items/DockItemDrawValue.vala"
			self->center.y = self->center.y + damount;
#line 119 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.y = self->static_center.y + damount;
#line 120 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.y = self->hover_region.y + amount;
#line 121 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.y = self->draw_region.y + amount;
#line 122 "../lib/Items/DockItemDrawValue.vala"
			self->background_region.y = self->background_region.y + amount;
#line 123 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 324 "DockItemDrawValue.c"
		}
#line 101 "../lib/Items/DockItemDrawValue.vala"
		case GTK_POS_RIGHT:
#line 328 "DockItemDrawValue.c"
		{
#line 125 "../lib/Items/DockItemDrawValue.vala"
			self->center.y = self->center.y + damount;
#line 126 "../lib/Items/DockItemDrawValue.vala"
			self->static_center.y = self->static_center.y + damount;
#line 127 "../lib/Items/DockItemDrawValue.vala"
			self->hover_region.y = self->hover_region.y + amount;
#line 128 "../lib/Items/DockItemDrawValue.vala"
			self->draw_region.y = self->draw_region.y + amount;
#line 129 "../lib/Items/DockItemDrawValue.vala"
			self->background_region.y = self->background_region.y + amount;
#line 130 "../lib/Items/DockItemDrawValue.vala"
			break;
#line 342 "DockItemDrawValue.c"
		}
	}
}

PlankDockItemDrawValue*
plank_dock_item_draw_value_construct (GType object_type)
{
	PlankDockItemDrawValue* self = NULL;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	self = (PlankDockItemDrawValue*) g_type_create_instance (object_type);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return self;
#line 355 "DockItemDrawValue.c"
}

PlankDockItemDrawValue*
plank_dock_item_draw_value_new (void)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return plank_dock_item_draw_value_construct (PLANK_TYPE_DOCK_ITEM_DRAW_VALUE);
#line 363 "DockItemDrawValue.c"
}

static void
plank_value_dock_item_draw_value_init (GValue* value)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	value->data[0].v_pointer = NULL;
#line 371 "DockItemDrawValue.c"
}

static void
plank_value_dock_item_draw_value_free_value (GValue* value)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (value->data[0].v_pointer) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		plank_dock_item_draw_value_unref (value->data[0].v_pointer);
#line 381 "DockItemDrawValue.c"
	}
}

static void
plank_value_dock_item_draw_value_copy_value (const GValue* src_value,
                                             GValue* dest_value)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (src_value->data[0].v_pointer) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		dest_value->data[0].v_pointer = plank_dock_item_draw_value_ref (src_value->data[0].v_pointer);
#line 393 "DockItemDrawValue.c"
	} else {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		dest_value->data[0].v_pointer = NULL;
#line 397 "DockItemDrawValue.c"
	}
}

static gpointer
plank_value_dock_item_draw_value_peek_pointer (const GValue* value)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return value->data[0].v_pointer;
#line 406 "DockItemDrawValue.c"
}

static gchar*
plank_value_dock_item_draw_value_collect_value (GValue* value,
                                                guint n_collect_values,
                                                GTypeCValue* collect_values,
                                                guint collect_flags)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (collect_values[0].v_pointer) {
#line 417 "DockItemDrawValue.c"
		PlankDockItemDrawValue * object;
		object = collect_values[0].v_pointer;
#line 46 "../lib/Items/DockItemDrawValue.vala"
		if (object->parent_instance.g_class == NULL) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 424 "DockItemDrawValue.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 428 "DockItemDrawValue.c"
		}
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = plank_dock_item_draw_value_ref (object);
#line 432 "DockItemDrawValue.c"
	} else {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = NULL;
#line 436 "DockItemDrawValue.c"
	}
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return NULL;
#line 440 "DockItemDrawValue.c"
}

static gchar*
plank_value_dock_item_draw_value_lcopy_value (const GValue* value,
                                              guint n_collect_values,
                                              GTypeCValue* collect_values,
                                              guint collect_flags)
{
	PlankDockItemDrawValue ** object_p;
	object_p = collect_values[0].v_pointer;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (!object_p) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 455 "DockItemDrawValue.c"
	}
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (!value->data[0].v_pointer) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		*object_p = NULL;
#line 461 "DockItemDrawValue.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		*object_p = value->data[0].v_pointer;
#line 465 "DockItemDrawValue.c"
	} else {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		*object_p = plank_dock_item_draw_value_ref (value->data[0].v_pointer);
#line 469 "DockItemDrawValue.c"
	}
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return NULL;
#line 473 "DockItemDrawValue.c"
}

GParamSpec*
plank_param_spec_dock_item_draw_value (const gchar* name,
                                       const gchar* nick,
                                       const gchar* blurb,
                                       GType object_type,
                                       GParamFlags flags)
{
	PlankParamSpecDockItemDrawValue* spec;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_return_val_if_fail (g_type_is_a (object_type, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE), NULL);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return G_PARAM_SPEC (spec);
#line 492 "DockItemDrawValue.c"
}

gpointer
plank_value_get_dock_item_draw_value (const GValue* value)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE), NULL);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return value->data[0].v_pointer;
#line 502 "DockItemDrawValue.c"
}

void
plank_value_set_dock_item_draw_value (GValue* value,
                                      gpointer v_object)
{
	PlankDockItemDrawValue * old;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE));
#line 46 "../lib/Items/DockItemDrawValue.vala"
	old = value->data[0].v_pointer;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (v_object) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE));
#line 46 "../lib/Items/DockItemDrawValue.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = v_object;
#line 46 "../lib/Items/DockItemDrawValue.vala"
		plank_dock_item_draw_value_ref (value->data[0].v_pointer);
#line 524 "DockItemDrawValue.c"
	} else {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = NULL;
#line 528 "DockItemDrawValue.c"
	}
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (old) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		plank_dock_item_draw_value_unref (old);
#line 534 "DockItemDrawValue.c"
	}
}

void
plank_value_take_dock_item_draw_value (GValue* value,
                                       gpointer v_object)
{
	PlankDockItemDrawValue * old;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE));
#line 46 "../lib/Items/DockItemDrawValue.vala"
	old = value->data[0].v_pointer;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (v_object) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE));
#line 46 "../lib/Items/DockItemDrawValue.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = v_object;
#line 555 "DockItemDrawValue.c"
	} else {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		value->data[0].v_pointer = NULL;
#line 559 "DockItemDrawValue.c"
	}
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (old) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		plank_dock_item_draw_value_unref (old);
#line 565 "DockItemDrawValue.c"
	}
}

static void
plank_dock_item_draw_value_class_init (PlankDockItemDrawValueClass * klass,
                                       gpointer klass_data)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	plank_dock_item_draw_value_parent_class = g_type_class_peek_parent (klass);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	((PlankDockItemDrawValueClass *) klass)->finalize = plank_dock_item_draw_value_finalize;
#line 577 "DockItemDrawValue.c"
}

static void
plank_dock_item_draw_value_instance_init (PlankDockItemDrawValue * self,
                                          gpointer klass)
{
#line 46 "../lib/Items/DockItemDrawValue.vala"
	self->ref_count = 1;
#line 586 "DockItemDrawValue.c"
}

static void
plank_dock_item_draw_value_finalize (PlankDockItemDrawValue * obj)
{
	PlankDockItemDrawValue * self;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_DOCK_ITEM_DRAW_VALUE, PlankDockItemDrawValue);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_signal_handlers_destroy (self);
#line 597 "DockItemDrawValue.c"
}

/**
 * Contains all positions and modifications to draw a dock-item on the dock
 */
static GType
plank_dock_item_draw_value_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { plank_value_dock_item_draw_value_init, plank_value_dock_item_draw_value_free_value, plank_value_dock_item_draw_value_copy_value, plank_value_dock_item_draw_value_peek_pointer, "p", plank_value_dock_item_draw_value_collect_value, "p", plank_value_dock_item_draw_value_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (PlankDockItemDrawValueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_dock_item_draw_value_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankDockItemDrawValue), 0, (GInstanceInitFunc) plank_dock_item_draw_value_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType plank_dock_item_draw_value_type_id;
	plank_dock_item_draw_value_type_id = g_type_register_fundamental (g_type_fundamental_next (), "PlankDockItemDrawValue", &g_define_type_info, &g_define_type_fundamental_info, 0);
	return plank_dock_item_draw_value_type_id;
}

GType
plank_dock_item_draw_value_get_type (void)
{
	static volatile gsize plank_dock_item_draw_value_type_id__volatile = 0;
	if (g_once_init_enter (&plank_dock_item_draw_value_type_id__volatile)) {
		GType plank_dock_item_draw_value_type_id;
		plank_dock_item_draw_value_type_id = plank_dock_item_draw_value_get_type_once ();
		g_once_init_leave (&plank_dock_item_draw_value_type_id__volatile, plank_dock_item_draw_value_type_id);
	}
	return plank_dock_item_draw_value_type_id__volatile;
}

gpointer
plank_dock_item_draw_value_ref (gpointer instance)
{
	PlankDockItemDrawValue * self;
	self = instance;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	g_atomic_int_inc (&self->ref_count);
#line 46 "../lib/Items/DockItemDrawValue.vala"
	return instance;
#line 635 "DockItemDrawValue.c"
}

void
plank_dock_item_draw_value_unref (gpointer instance)
{
	PlankDockItemDrawValue * self;
	self = instance;
#line 46 "../lib/Items/DockItemDrawValue.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 46 "../lib/Items/DockItemDrawValue.vala"
		PLANK_DOCK_ITEM_DRAW_VALUE_GET_CLASS (self)->finalize (self);
#line 46 "../lib/Items/DockItemDrawValue.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 649 "DockItemDrawValue.c"
	}
}

