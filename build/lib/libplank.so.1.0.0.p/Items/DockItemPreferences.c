/* DockItemPreferences.c generated by valac 0.48.17, the Vala compiler
 * generated from DockItemPreferences.vala, do not modify */

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

#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gio/gio.h>

#define PLANK_TYPE_PREFERENCES (plank_preferences_get_type ())
#define PLANK_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_PREFERENCES, PlankPreferences))
#define PLANK_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_PREFERENCES, PlankPreferencesClass))
#define PLANK_IS_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_PREFERENCES))
#define PLANK_IS_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_PREFERENCES))
#define PLANK_PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_PREFERENCES, PlankPreferencesClass))

typedef struct _PlankPreferences PlankPreferences;
typedef struct _PlankPreferencesClass PlankPreferencesClass;
typedef struct _PlankPreferencesPrivate PlankPreferencesPrivate;

#define PLANK_TYPE_DOCK_ITEM_PREFERENCES (plank_dock_item_preferences_get_type ())
#define PLANK_DOCK_ITEM_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferences))
#define PLANK_DOCK_ITEM_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferencesClass))
#define PLANK_IS_DOCK_ITEM_PREFERENCES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES))
#define PLANK_IS_DOCK_ITEM_PREFERENCES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_DOCK_ITEM_PREFERENCES))
#define PLANK_DOCK_ITEM_PREFERENCES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferencesClass))

typedef struct _PlankDockItemPreferences PlankDockItemPreferences;
typedef struct _PlankDockItemPreferencesClass PlankDockItemPreferencesClass;
typedef struct _PlankDockItemPreferencesPrivate PlankDockItemPreferencesPrivate;
enum  {
	PLANK_DOCK_ITEM_PREFERENCES_0_PROPERTY,
	PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY,
	PLANK_DOCK_ITEM_PREFERENCES_NUM_PROPERTIES
};
static GParamSpec* plank_dock_item_preferences_properties[PLANK_DOCK_ITEM_PREFERENCES_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _PlankPreferences {
	GObject parent_instance;
	PlankPreferencesPrivate * priv;
};

struct _PlankPreferencesClass {
	GObjectClass parent_class;
	void (*verify) (PlankPreferences* self, const gchar* prop);
	void (*reset_properties) (PlankPreferences* self);
};

struct _PlankDockItemPreferences {
	PlankPreferences parent_instance;
	PlankDockItemPreferencesPrivate * priv;
};

struct _PlankDockItemPreferencesClass {
	PlankPreferencesClass parent_class;
};

struct _PlankDockItemPreferencesPrivate {
	gchar* _Launcher;
};

static gint PlankDockItemPreferences_private_offset;
static gpointer plank_dock_item_preferences_parent_class = NULL;

GType plank_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankPreferences, g_object_unref)
GType plank_dock_item_preferences_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankDockItemPreferences, g_object_unref)
void plank_preferences_reset_properties (PlankPreferences* self);
void plank_preferences_verify (PlankPreferences* self,
                               const gchar* prop);
PlankDockItemPreferences* plank_dock_item_preferences_new_with_launcher (const gchar* launcher);
PlankDockItemPreferences* plank_dock_item_preferences_construct_with_launcher (GType object_type,
                                                                               const gchar* launcher);
PlankPreferences* plank_preferences_construct (GType object_type);
void plank_dock_item_preferences_set_Launcher (PlankDockItemPreferences* self,
                                               const gchar* value);
PlankDockItemPreferences* plank_dock_item_preferences_new_with_file (GFile* file);
PlankDockItemPreferences* plank_dock_item_preferences_construct_with_file (GType object_type,
                                                                           GFile* file);
PlankPreferences* plank_preferences_construct_with_file (GType object_type,
                                                         GFile* file);
PlankDockItemPreferences* plank_dock_item_preferences_new_with_filename (const gchar* filename);
PlankDockItemPreferences* plank_dock_item_preferences_construct_with_filename (GType object_type,
                                                                               const gchar* filename);
PlankPreferences* plank_preferences_construct_with_filename (GType object_type,
                                                             const gchar* filename);
static void plank_dock_item_preferences_real_reset_properties (PlankPreferences* base);
static void plank_dock_item_preferences_real_verify (PlankPreferences* base,
                                              const gchar* prop);
const gchar* plank_dock_item_preferences_get_Launcher (PlankDockItemPreferences* self);
PlankDockItemPreferences* plank_dock_item_preferences_new (void);
PlankDockItemPreferences* plank_dock_item_preferences_construct (GType object_type);
static void plank_dock_item_preferences_finalize (GObject * obj);
static GType plank_dock_item_preferences_get_type_once (void);
static void _vala_plank_dock_item_preferences_get_property (GObject * object,
                                                     guint property_id,
                                                     GValue * value,
                                                     GParamSpec * pspec);
static void _vala_plank_dock_item_preferences_set_property (GObject * object,
                                                     guint property_id,
                                                     const GValue * value,
                                                     GParamSpec * pspec);

static inline gpointer
plank_dock_item_preferences_get_instance_private (PlankDockItemPreferences* self)
{
	return G_STRUCT_MEMBER_P (self, PlankDockItemPreferences_private_offset);
}

/**
 * {@inheritDoc}
 */
PlankDockItemPreferences*
plank_dock_item_preferences_construct_with_launcher (GType object_type,
                                                     const gchar* launcher)
{
	PlankDockItemPreferences * self = NULL;
#line 33 "../lib/Items/DockItemPreferences.vala"
	g_return_val_if_fail (launcher != NULL, NULL);
#line 35 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) plank_preferences_construct (object_type);
#line 36 "../lib/Items/DockItemPreferences.vala"
	plank_dock_item_preferences_set_Launcher (self, launcher);
#line 33 "../lib/Items/DockItemPreferences.vala"
	return self;
#line 149 "DockItemPreferences.c"
}

PlankDockItemPreferences*
plank_dock_item_preferences_new_with_launcher (const gchar* launcher)
{
#line 33 "../lib/Items/DockItemPreferences.vala"
	return plank_dock_item_preferences_construct_with_launcher (PLANK_TYPE_DOCK_ITEM_PREFERENCES, launcher);
#line 157 "DockItemPreferences.c"
}

/**
 * {@inheritDoc}
 */
PlankDockItemPreferences*
plank_dock_item_preferences_construct_with_file (GType object_type,
                                                 GFile* file)
{
	PlankDockItemPreferences * self = NULL;
#line 42 "../lib/Items/DockItemPreferences.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 44 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) plank_preferences_construct_with_file (object_type, file);
#line 42 "../lib/Items/DockItemPreferences.vala"
	return self;
#line 174 "DockItemPreferences.c"
}

PlankDockItemPreferences*
plank_dock_item_preferences_new_with_file (GFile* file)
{
#line 42 "../lib/Items/DockItemPreferences.vala"
	return plank_dock_item_preferences_construct_with_file (PLANK_TYPE_DOCK_ITEM_PREFERENCES, file);
#line 182 "DockItemPreferences.c"
}

/**
 * {@inheritDoc}
 */
PlankDockItemPreferences*
plank_dock_item_preferences_construct_with_filename (GType object_type,
                                                     const gchar* filename)
{
	PlankDockItemPreferences * self = NULL;
#line 50 "../lib/Items/DockItemPreferences.vala"
	g_return_val_if_fail (filename != NULL, NULL);
#line 52 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) plank_preferences_construct_with_filename (object_type, filename);
#line 50 "../lib/Items/DockItemPreferences.vala"
	return self;
#line 199 "DockItemPreferences.c"
}

PlankDockItemPreferences*
plank_dock_item_preferences_new_with_filename (const gchar* filename)
{
#line 50 "../lib/Items/DockItemPreferences.vala"
	return plank_dock_item_preferences_construct_with_filename (PLANK_TYPE_DOCK_ITEM_PREFERENCES, filename);
#line 207 "DockItemPreferences.c"
}

/**
 * {@inheritDoc}
 */
static void
plank_dock_item_preferences_real_reset_properties (PlankPreferences* base)
{
	PlankDockItemPreferences * self;
#line 58 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) base;
#line 60 "../lib/Items/DockItemPreferences.vala"
	plank_dock_item_preferences_set_Launcher (self, "");
#line 221 "DockItemPreferences.c"
}

/**
 * {@inheritDoc}
 */
static void
plank_dock_item_preferences_real_verify (PlankPreferences* base,
                                         const gchar* prop)
{
	PlankDockItemPreferences * self;
	const gchar* _tmp0_;
	GQuark _tmp2_ = 0U;
#line 68 "../lib/Items/DockItemPreferences.vala"
	static GQuark _tmp1_label0 = 0;
#line 236 "DockItemPreferences.c"
	GError* _inner_error0_ = NULL;
#line 66 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) base;
#line 66 "../lib/Items/DockItemPreferences.vala"
	g_return_if_fail (prop != NULL);
#line 68 "../lib/Items/DockItemPreferences.vala"
	_tmp0_ = prop;
#line 68 "../lib/Items/DockItemPreferences.vala"
	_tmp2_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
#line 68 "../lib/Items/DockItemPreferences.vala"
	if (_tmp2_ == ((0 != _tmp1_label0) ? _tmp1_label0 : (_tmp1_label0 = g_quark_from_static_string ("Launcher")))) {
#line 68 "../lib/Items/DockItemPreferences.vala"
		switch (0) {
#line 250 "DockItemPreferences.c"
			default:
			{
				const gchar* _tmp3_;
#line 70 "../lib/Items/DockItemPreferences.vala"
				_tmp3_ = self->priv->_Launcher;
#line 70 "../lib/Items/DockItemPreferences.vala"
				if (g_str_has_prefix (_tmp3_, "/")) {
#line 258 "DockItemPreferences.c"
					{
						gchar* _tmp4_ = NULL;
						const gchar* _tmp5_;
						gchar* _tmp6_;
#line 72 "../lib/Items/DockItemPreferences.vala"
						_tmp5_ = self->priv->_Launcher;
#line 72 "../lib/Items/DockItemPreferences.vala"
						_tmp6_ = g_filename_to_uri (_tmp5_, NULL, &_inner_error0_);
#line 72 "../lib/Items/DockItemPreferences.vala"
						_tmp4_ = _tmp6_;
#line 72 "../lib/Items/DockItemPreferences.vala"
						if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 72 "../lib/Items/DockItemPreferences.vala"
							if (_inner_error0_->domain == G_CONVERT_ERROR) {
#line 273 "DockItemPreferences.c"
								goto __catch0_g_convert_error;
							}
#line 72 "../lib/Items/DockItemPreferences.vala"
							g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 72 "../lib/Items/DockItemPreferences.vala"
							g_clear_error (&_inner_error0_);
#line 72 "../lib/Items/DockItemPreferences.vala"
							return;
#line 282 "DockItemPreferences.c"
						}
#line 72 "../lib/Items/DockItemPreferences.vala"
						plank_dock_item_preferences_set_Launcher (self, _tmp4_);
#line 71 "../lib/Items/DockItemPreferences.vala"
						_g_free0 (_tmp4_);
#line 288 "DockItemPreferences.c"
					}
					goto __finally0;
					__catch0_g_convert_error:
					{
						GError* e = NULL;
						GError* _tmp7_;
						const gchar* _tmp8_;
#line 71 "../lib/Items/DockItemPreferences.vala"
						e = _inner_error0_;
#line 71 "../lib/Items/DockItemPreferences.vala"
						_inner_error0_ = NULL;
#line 74 "../lib/Items/DockItemPreferences.vala"
						_tmp7_ = e;
#line 74 "../lib/Items/DockItemPreferences.vala"
						_tmp8_ = _tmp7_->message;
#line 74 "../lib/Items/DockItemPreferences.vala"
						g_warning ("DockItemPreferences.vala:74: %s", _tmp8_);
#line 71 "../lib/Items/DockItemPreferences.vala"
						_g_error_free0 (e);
#line 308 "DockItemPreferences.c"
					}
					__finally0:
#line 71 "../lib/Items/DockItemPreferences.vala"
					if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 71 "../lib/Items/DockItemPreferences.vala"
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 71 "../lib/Items/DockItemPreferences.vala"
						g_clear_error (&_inner_error0_);
#line 71 "../lib/Items/DockItemPreferences.vala"
						return;
#line 319 "DockItemPreferences.c"
					}
				}
#line 76 "../lib/Items/DockItemPreferences.vala"
				break;
#line 324 "DockItemPreferences.c"
			}
		}
	}
}

PlankDockItemPreferences*
plank_dock_item_preferences_construct (GType object_type)
{
	PlankDockItemPreferences * self = NULL;
#line 25 "../lib/Items/DockItemPreferences.vala"
	self = (PlankDockItemPreferences*) plank_preferences_construct (object_type);
#line 25 "../lib/Items/DockItemPreferences.vala"
	return self;
#line 338 "DockItemPreferences.c"
}

PlankDockItemPreferences*
plank_dock_item_preferences_new (void)
{
#line 25 "../lib/Items/DockItemPreferences.vala"
	return plank_dock_item_preferences_construct (PLANK_TYPE_DOCK_ITEM_PREFERENCES);
#line 346 "DockItemPreferences.c"
}

const gchar*
plank_dock_item_preferences_get_Launcher (PlankDockItemPreferences* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 28 "../lib/Items/DockItemPreferences.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "../lib/Items/DockItemPreferences.vala"
	_tmp0_ = self->priv->_Launcher;
#line 28 "../lib/Items/DockItemPreferences.vala"
	result = _tmp0_;
#line 28 "../lib/Items/DockItemPreferences.vala"
	return result;
#line 362 "DockItemPreferences.c"
}

void
plank_dock_item_preferences_set_Launcher (PlankDockItemPreferences* self,
                                          const gchar* value)
{
	gchar* old_value;
#line 28 "../lib/Items/DockItemPreferences.vala"
	g_return_if_fail (self != NULL);
#line 28 "../lib/Items/DockItemPreferences.vala"
	old_value = plank_dock_item_preferences_get_Launcher (self);
#line 28 "../lib/Items/DockItemPreferences.vala"
	if (g_strcmp0 (value, old_value) != 0) {
#line 376 "DockItemPreferences.c"
		gchar* _tmp0_;
#line 28 "../lib/Items/DockItemPreferences.vala"
		_tmp0_ = g_strdup (value);
#line 28 "../lib/Items/DockItemPreferences.vala"
		_g_free0 (self->priv->_Launcher);
#line 28 "../lib/Items/DockItemPreferences.vala"
		self->priv->_Launcher = _tmp0_;
#line 28 "../lib/Items/DockItemPreferences.vala"
		g_object_notify_by_pspec ((GObject *) self, plank_dock_item_preferences_properties[PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY]);
#line 386 "DockItemPreferences.c"
	}
}

static void
plank_dock_item_preferences_class_init (PlankDockItemPreferencesClass * klass,
                                        gpointer klass_data)
{
#line 25 "../lib/Items/DockItemPreferences.vala"
	plank_dock_item_preferences_parent_class = g_type_class_peek_parent (klass);
#line 25 "../lib/Items/DockItemPreferences.vala"
	g_type_class_adjust_private_offset (klass, &PlankDockItemPreferences_private_offset);
#line 25 "../lib/Items/DockItemPreferences.vala"
	((PlankPreferencesClass *) klass)->reset_properties = (void (*) (PlankPreferences*)) plank_dock_item_preferences_real_reset_properties;
#line 25 "../lib/Items/DockItemPreferences.vala"
	((PlankPreferencesClass *) klass)->verify = (void (*) (PlankPreferences*, const gchar*)) plank_dock_item_preferences_real_verify;
#line 25 "../lib/Items/DockItemPreferences.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_plank_dock_item_preferences_get_property;
#line 25 "../lib/Items/DockItemPreferences.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_plank_dock_item_preferences_set_property;
#line 25 "../lib/Items/DockItemPreferences.vala"
	G_OBJECT_CLASS (klass)->finalize = plank_dock_item_preferences_finalize;
#line 25 "../lib/Items/DockItemPreferences.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY, plank_dock_item_preferences_properties[PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY] = g_param_spec_string ("Launcher", "launcher", "The uri for this item.", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 410 "DockItemPreferences.c"
}

static void
plank_dock_item_preferences_instance_init (PlankDockItemPreferences * self,
                                           gpointer klass)
{
#line 25 "../lib/Items/DockItemPreferences.vala"
	self->priv = plank_dock_item_preferences_get_instance_private (self);
#line 419 "DockItemPreferences.c"
}

static void
plank_dock_item_preferences_finalize (GObject * obj)
{
	PlankDockItemPreferences * self;
#line 25 "../lib/Items/DockItemPreferences.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferences);
#line 28 "../lib/Items/DockItemPreferences.vala"
	_g_free0 (self->priv->_Launcher);
#line 25 "../lib/Items/DockItemPreferences.vala"
	G_OBJECT_CLASS (plank_dock_item_preferences_parent_class)->finalize (obj);
#line 432 "DockItemPreferences.c"
}

/**
 * Contains preference keys for a dock item.
 */
static GType
plank_dock_item_preferences_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PlankDockItemPreferencesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_dock_item_preferences_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankDockItemPreferences), 0, (GInstanceInitFunc) plank_dock_item_preferences_instance_init, NULL };
	GType plank_dock_item_preferences_type_id;
	plank_dock_item_preferences_type_id = g_type_register_static (PLANK_TYPE_PREFERENCES, "PlankDockItemPreferences", &g_define_type_info, 0);
	PlankDockItemPreferences_private_offset = g_type_add_instance_private (plank_dock_item_preferences_type_id, sizeof (PlankDockItemPreferencesPrivate));
	return plank_dock_item_preferences_type_id;
}

GType
plank_dock_item_preferences_get_type (void)
{
	static volatile gsize plank_dock_item_preferences_type_id__volatile = 0;
	if (g_once_init_enter (&plank_dock_item_preferences_type_id__volatile)) {
		GType plank_dock_item_preferences_type_id;
		plank_dock_item_preferences_type_id = plank_dock_item_preferences_get_type_once ();
		g_once_init_leave (&plank_dock_item_preferences_type_id__volatile, plank_dock_item_preferences_type_id);
	}
	return plank_dock_item_preferences_type_id__volatile;
}

static void
_vala_plank_dock_item_preferences_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec)
{
	PlankDockItemPreferences * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferences);
#line 25 "../lib/Items/DockItemPreferences.vala"
	switch (property_id) {
#line 25 "../lib/Items/DockItemPreferences.vala"
		case PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY:
#line 25 "../lib/Items/DockItemPreferences.vala"
		g_value_set_string (value, plank_dock_item_preferences_get_Launcher (self));
#line 25 "../lib/Items/DockItemPreferences.vala"
		break;
#line 476 "DockItemPreferences.c"
		default:
#line 25 "../lib/Items/DockItemPreferences.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "../lib/Items/DockItemPreferences.vala"
		break;
#line 482 "DockItemPreferences.c"
	}
}

static void
_vala_plank_dock_item_preferences_set_property (GObject * object,
                                                guint property_id,
                                                const GValue * value,
                                                GParamSpec * pspec)
{
	PlankDockItemPreferences * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PLANK_TYPE_DOCK_ITEM_PREFERENCES, PlankDockItemPreferences);
#line 25 "../lib/Items/DockItemPreferences.vala"
	switch (property_id) {
#line 25 "../lib/Items/DockItemPreferences.vala"
		case PLANK_DOCK_ITEM_PREFERENCES_LAUNCHER_PROPERTY:
#line 25 "../lib/Items/DockItemPreferences.vala"
		plank_dock_item_preferences_set_Launcher (self, g_value_get_string (value));
#line 25 "../lib/Items/DockItemPreferences.vala"
		break;
#line 502 "DockItemPreferences.c"
		default:
#line 25 "../lib/Items/DockItemPreferences.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "../lib/Items/DockItemPreferences.vala"
		break;
#line 508 "DockItemPreferences.c"
	}
}

