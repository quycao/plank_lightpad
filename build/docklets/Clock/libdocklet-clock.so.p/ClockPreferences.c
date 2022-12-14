/* ClockPreferences.c generated by valac 0.48.17, the Vala compiler
 * generated from ClockPreferences.vala, do not modify */

/**/
/*  Copyright (C) 2011 Robert Dyer*/
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

#include "plank.h"
#include <glib-object.h>
#include <glib.h>
#include <gio/gio.h>

#define DOCKY_TYPE_CLOCK_PREFERENCES (docky_clock_preferences_get_type ())
#define DOCKY_CLOCK_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferences))
#define DOCKY_CLOCK_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferencesClass))
#define DOCKY_IS_CLOCK_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_CLOCK_PREFERENCES))
#define DOCKY_IS_CLOCK_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_CLOCK_PREFERENCES))
#define DOCKY_CLOCK_PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferencesClass))

typedef struct _DockyClockPreferences DockyClockPreferences;
typedef struct _DockyClockPreferencesClass DockyClockPreferencesClass;
typedef struct _DockyClockPreferencesPrivate DockyClockPreferencesPrivate;
enum  {
	DOCKY_CLOCK_PREFERENCES_0_PROPERTY,
	DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY,
	DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY,
	DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY,
	DOCKY_CLOCK_PREFERENCES_NUM_PROPERTIES
};
static GParamSpec* docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_NUM_PROPERTIES];

struct _DockyClockPreferences {
	PlankDockItemPreferences parent_instance;
	DockyClockPreferencesPrivate * priv;
};

struct _DockyClockPreferencesClass {
	PlankDockItemPreferencesClass parent_class;
};

struct _DockyClockPreferencesPrivate {
	gboolean _ShowMilitary;
	gboolean _ShowDigital;
	gboolean _ShowDate;
};

static gint DockyClockPreferences_private_offset;
static gpointer docky_clock_preferences_parent_class = NULL;

GType docky_clock_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyClockPreferences, g_object_unref)
DockyClockPreferences* docky_clock_preferences_new_with_file (GFile* file);
DockyClockPreferences* docky_clock_preferences_construct_with_file (GType object_type,
                                                                    GFile* file);
static void docky_clock_preferences_real_reset_properties (PlankPreferences* base);
void docky_clock_preferences_set_ShowMilitary (DockyClockPreferences* self,
                                               gboolean value);
void docky_clock_preferences_set_ShowDigital (DockyClockPreferences* self,
                                              gboolean value);
void docky_clock_preferences_set_ShowDate (DockyClockPreferences* self,
                                           gboolean value);
DockyClockPreferences* docky_clock_preferences_new (void);
DockyClockPreferences* docky_clock_preferences_construct (GType object_type);
gboolean docky_clock_preferences_get_ShowMilitary (DockyClockPreferences* self);
gboolean docky_clock_preferences_get_ShowDigital (DockyClockPreferences* self);
gboolean docky_clock_preferences_get_ShowDate (DockyClockPreferences* self);
static void docky_clock_preferences_finalize (GObject * obj);
static GType docky_clock_preferences_get_type_once (void);
static void _vala_docky_clock_preferences_get_property (GObject * object,
                                                 guint property_id,
                                                 GValue * value,
                                                 GParamSpec * pspec);
static void _vala_docky_clock_preferences_set_property (GObject * object,
                                                 guint property_id,
                                                 const GValue * value,
                                                 GParamSpec * pspec);

static inline gpointer
docky_clock_preferences_get_instance_private (DockyClockPreferences* self)
{
	return G_STRUCT_MEMBER_P (self, DockyClockPreferences_private_offset);
}

DockyClockPreferences*
docky_clock_preferences_construct_with_file (GType object_type,
                                             GFile* file)
{
	DockyClockPreferences * self = NULL;
#line 35 "../docklets/Clock/ClockPreferences.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 37 "../docklets/Clock/ClockPreferences.vala"
	self = (DockyClockPreferences*) plank_dock_item_preferences_construct_with_file (object_type, file);
#line 35 "../docklets/Clock/ClockPreferences.vala"
	return self;
#line 111 "ClockPreferences.c"
}

DockyClockPreferences*
docky_clock_preferences_new_with_file (GFile* file)
{
#line 35 "../docklets/Clock/ClockPreferences.vala"
	return docky_clock_preferences_construct_with_file (DOCKY_TYPE_CLOCK_PREFERENCES, file);
#line 119 "ClockPreferences.c"
}

static void
docky_clock_preferences_real_reset_properties (PlankPreferences* base)
{
	DockyClockPreferences * self;
#line 40 "../docklets/Clock/ClockPreferences.vala"
	self = (DockyClockPreferences*) base;
#line 42 "../docklets/Clock/ClockPreferences.vala"
	docky_clock_preferences_set_ShowMilitary (self, FALSE);
#line 43 "../docklets/Clock/ClockPreferences.vala"
	docky_clock_preferences_set_ShowDigital (self, FALSE);
#line 44 "../docklets/Clock/ClockPreferences.vala"
	docky_clock_preferences_set_ShowDate (self, FALSE);
#line 134 "ClockPreferences.c"
}

DockyClockPreferences*
docky_clock_preferences_construct (GType object_type)
{
	DockyClockPreferences * self = NULL;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	self = (DockyClockPreferences*) plank_dock_item_preferences_construct (object_type);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	return self;
#line 145 "ClockPreferences.c"
}

DockyClockPreferences*
docky_clock_preferences_new (void)
{
#line 24 "../docklets/Clock/ClockPreferences.vala"
	return docky_clock_preferences_construct (DOCKY_TYPE_CLOCK_PREFERENCES);
#line 153 "ClockPreferences.c"
}

gboolean
docky_clock_preferences_get_ShowMilitary (DockyClockPreferences* self)
{
	gboolean result;
#line 27 "../docklets/Clock/ClockPreferences.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 27 "../docklets/Clock/ClockPreferences.vala"
	result = self->priv->_ShowMilitary;
#line 27 "../docklets/Clock/ClockPreferences.vala"
	return result;
#line 166 "ClockPreferences.c"
}

void
docky_clock_preferences_set_ShowMilitary (DockyClockPreferences* self,
                                          gboolean value)
{
	gboolean old_value;
#line 27 "../docklets/Clock/ClockPreferences.vala"
	g_return_if_fail (self != NULL);
#line 27 "../docklets/Clock/ClockPreferences.vala"
	old_value = docky_clock_preferences_get_ShowMilitary (self);
#line 27 "../docklets/Clock/ClockPreferences.vala"
	if (old_value != value) {
#line 27 "../docklets/Clock/ClockPreferences.vala"
		self->priv->_ShowMilitary = value;
#line 27 "../docklets/Clock/ClockPreferences.vala"
		g_object_notify_by_pspec ((GObject *) self, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY]);
#line 184 "ClockPreferences.c"
	}
}

gboolean
docky_clock_preferences_get_ShowDigital (DockyClockPreferences* self)
{
	gboolean result;
#line 30 "../docklets/Clock/ClockPreferences.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 30 "../docklets/Clock/ClockPreferences.vala"
	result = self->priv->_ShowDigital;
#line 30 "../docklets/Clock/ClockPreferences.vala"
	return result;
#line 198 "ClockPreferences.c"
}

void
docky_clock_preferences_set_ShowDigital (DockyClockPreferences* self,
                                         gboolean value)
{
	gboolean old_value;
#line 30 "../docklets/Clock/ClockPreferences.vala"
	g_return_if_fail (self != NULL);
#line 30 "../docklets/Clock/ClockPreferences.vala"
	old_value = docky_clock_preferences_get_ShowDigital (self);
#line 30 "../docklets/Clock/ClockPreferences.vala"
	if (old_value != value) {
#line 30 "../docklets/Clock/ClockPreferences.vala"
		self->priv->_ShowDigital = value;
#line 30 "../docklets/Clock/ClockPreferences.vala"
		g_object_notify_by_pspec ((GObject *) self, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY]);
#line 216 "ClockPreferences.c"
	}
}

gboolean
docky_clock_preferences_get_ShowDate (DockyClockPreferences* self)
{
	gboolean result;
#line 33 "../docklets/Clock/ClockPreferences.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 33 "../docklets/Clock/ClockPreferences.vala"
	result = self->priv->_ShowDate;
#line 33 "../docklets/Clock/ClockPreferences.vala"
	return result;
#line 230 "ClockPreferences.c"
}

void
docky_clock_preferences_set_ShowDate (DockyClockPreferences* self,
                                      gboolean value)
{
	gboolean old_value;
#line 33 "../docklets/Clock/ClockPreferences.vala"
	g_return_if_fail (self != NULL);
#line 33 "../docklets/Clock/ClockPreferences.vala"
	old_value = docky_clock_preferences_get_ShowDate (self);
#line 33 "../docklets/Clock/ClockPreferences.vala"
	if (old_value != value) {
#line 33 "../docklets/Clock/ClockPreferences.vala"
		self->priv->_ShowDate = value;
#line 33 "../docklets/Clock/ClockPreferences.vala"
		g_object_notify_by_pspec ((GObject *) self, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY]);
#line 248 "ClockPreferences.c"
	}
}

static void
docky_clock_preferences_class_init (DockyClockPreferencesClass * klass,
                                    gpointer klass_data)
{
#line 24 "../docklets/Clock/ClockPreferences.vala"
	docky_clock_preferences_parent_class = g_type_class_peek_parent (klass);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	g_type_class_adjust_private_offset (klass, &DockyClockPreferences_private_offset);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	((PlankPreferencesClass *) klass)->reset_properties = (void (*) (PlankPreferences*)) docky_clock_preferences_real_reset_properties;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_docky_clock_preferences_get_property;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_docky_clock_preferences_set_property;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	G_OBJECT_CLASS (klass)->finalize = docky_clock_preferences_finalize;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY] = g_param_spec_boolean ("ShowMilitary", "show-military", "If the clock shows 24hr time (when showing digital and in the hover).", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 24 "../docklets/Clock/ClockPreferences.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY] = g_param_spec_boolean ("ShowDigital", "show-digital", "If the clock shows a digital clock (true) or an analog clock (false).", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 24 "../docklets/Clock/ClockPreferences.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY, docky_clock_preferences_properties[DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY] = g_param_spec_boolean ("ShowDate", "show-date", "If the clock shows the date in digital mode.", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 274 "ClockPreferences.c"
}

static void
docky_clock_preferences_instance_init (DockyClockPreferences * self,
                                       gpointer klass)
{
#line 24 "../docklets/Clock/ClockPreferences.vala"
	self->priv = docky_clock_preferences_get_instance_private (self);
#line 283 "ClockPreferences.c"
}

static void
docky_clock_preferences_finalize (GObject * obj)
{
	DockyClockPreferences * self;
#line 24 "../docklets/Clock/ClockPreferences.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferences);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	G_OBJECT_CLASS (docky_clock_preferences_parent_class)->finalize (obj);
#line 294 "ClockPreferences.c"
}

static GType
docky_clock_preferences_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DockyClockPreferencesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) docky_clock_preferences_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DockyClockPreferences), 0, (GInstanceInitFunc) docky_clock_preferences_instance_init, NULL };
	GType docky_clock_preferences_type_id;
	docky_clock_preferences_type_id = g_type_register_static (PLANK_TYPE_DOCK_ITEM_PREFERENCES, "DockyClockPreferences", &g_define_type_info, 0);
	DockyClockPreferences_private_offset = g_type_add_instance_private (docky_clock_preferences_type_id, sizeof (DockyClockPreferencesPrivate));
	return docky_clock_preferences_type_id;
}

GType
docky_clock_preferences_get_type (void)
{
	static volatile gsize docky_clock_preferences_type_id__volatile = 0;
	if (g_once_init_enter (&docky_clock_preferences_type_id__volatile)) {
		GType docky_clock_preferences_type_id;
		docky_clock_preferences_type_id = docky_clock_preferences_get_type_once ();
		g_once_init_leave (&docky_clock_preferences_type_id__volatile, docky_clock_preferences_type_id);
	}
	return docky_clock_preferences_type_id__volatile;
}

static void
_vala_docky_clock_preferences_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec)
{
	DockyClockPreferences * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferences);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	switch (property_id) {
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		g_value_set_boolean (value, docky_clock_preferences_get_ShowMilitary (self));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		g_value_set_boolean (value, docky_clock_preferences_get_ShowDigital (self));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		g_value_set_boolean (value, docky_clock_preferences_get_ShowDate (self));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 347 "ClockPreferences.c"
		default:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 353 "ClockPreferences.c"
	}
}

static void
_vala_docky_clock_preferences_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec)
{
	DockyClockPreferences * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DOCKY_TYPE_CLOCK_PREFERENCES, DockyClockPreferences);
#line 24 "../docklets/Clock/ClockPreferences.vala"
	switch (property_id) {
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_MILITARY_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		docky_clock_preferences_set_ShowMilitary (self, g_value_get_boolean (value));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_DIGITAL_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		docky_clock_preferences_set_ShowDigital (self, g_value_get_boolean (value));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 24 "../docklets/Clock/ClockPreferences.vala"
		case DOCKY_CLOCK_PREFERENCES_SHOW_DATE_PROPERTY:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		docky_clock_preferences_set_ShowDate (self, g_value_get_boolean (value));
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 385 "ClockPreferences.c"
		default:
#line 24 "../docklets/Clock/ClockPreferences.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 24 "../docklets/Clock/ClockPreferences.vala"
		break;
#line 391 "ClockPreferences.c"
	}
}

