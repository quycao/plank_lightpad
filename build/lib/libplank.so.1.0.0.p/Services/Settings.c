/* Settings.c generated by valac 0.48.17, the Vala compiler
 * generated from Settings.vala, do not modify */

/**/
/*  Copyright (C) 2014 Rico Tzschichholz*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
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

#define PLANK_TYPE_SETTINGS (plank_settings_get_type ())
#define PLANK_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANK_TYPE_SETTINGS, PlankSettings))
#define PLANK_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANK_TYPE_SETTINGS, PlankSettingsClass))
#define PLANK_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANK_TYPE_SETTINGS))
#define PLANK_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANK_TYPE_SETTINGS))
#define PLANK_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANK_TYPE_SETTINGS, PlankSettingsClass))

typedef struct _PlankSettings PlankSettings;
typedef struct _PlankSettingsClass PlankSettingsClass;
typedef struct _PlankSettingsPrivate PlankSettingsPrivate;
enum  {
	PLANK_SETTINGS_0_PROPERTY,
	PLANK_SETTINGS_SETTINGS_PROPERTY,
	PLANK_SETTINGS_BIND_FLAGS_PROPERTY,
	PLANK_SETTINGS_NUM_PROPERTIES
};
static GParamSpec* plank_settings_properties[PLANK_SETTINGS_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_param_spec_unref0(var) ((var == NULL) ? NULL : (var = (g_param_spec_unref (var), NULL)))

struct _PlankSettings {
	GObject parent_instance;
	PlankSettingsPrivate * priv;
};

struct _PlankSettingsClass {
	GObjectClass parent_class;
	void (*verify) (PlankSettings* self, const gchar* name);
};

struct _PlankSettingsPrivate {
	GSettings* _settings;
	GSettingsBindFlags _bind_flags;
};

static gint PlankSettings_private_offset;
static gpointer plank_settings_parent_class = NULL;

GType plank_settings_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PlankSettings, g_object_unref)
void plank_settings_verify (PlankSettings* self,
                            const gchar* name);
PlankSettings* plank_settings_construct (GType object_type,
                                         const gchar* schema);
PlankSettings* plank_settings_construct_with_path (GType object_type,
                                                   const gchar* schema,
                                                   const gchar* path);
static void plank_settings_real_verify (PlankSettings* self,
                                 const gchar* name);
void plank_settings_reset_all (PlankSettings* self);
GSettings* plank_settings_get_settings (PlankSettings* self);
void plank_settings_delay (PlankSettings* self);
void plank_logger_verbose (const gchar* msg,
                           ...);
void plank_settings_apply (PlankSettings* self);
static void plank_settings_set_settings (PlankSettings* self,
                                  GSettings* value);
GSettingsBindFlags plank_settings_get_bind_flags (PlankSettings* self);
static void plank_settings_set_bind_flags (PlankSettings* self,
                                    GSettingsBindFlags value);
static GObject * plank_settings_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties);
static void plank_settings_finalize (GObject * obj);
static GType plank_settings_get_type_once (void);
static void _vala_plank_settings_get_property (GObject * object,
                                        guint property_id,
                                        GValue * value,
                                        GParamSpec * pspec);
static void _vala_plank_settings_set_property (GObject * object,
                                        guint property_id,
                                        const GValue * value,
                                        GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);

static inline gpointer
plank_settings_get_instance_private (PlankSettings* self)
{
	return G_STRUCT_MEMBER_P (self, PlankSettings_private_offset);
}

/**
 * {@inheritDoc}
 */
PlankSettings*
plank_settings_construct (GType object_type,
                          const gchar* schema)
{
	PlankSettings * self = NULL;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
#line 36 "../lib/Services/Settings.vala"
	g_return_val_if_fail (schema != NULL, NULL);
#line 38 "../lib/Services/Settings.vala"
	_tmp0_ = g_settings_new (schema);
#line 38 "../lib/Services/Settings.vala"
	_tmp1_ = _tmp0_;
#line 38 "../lib/Services/Settings.vala"
	self = (PlankSettings*) g_object_new (object_type, "settings", _tmp1_, NULL);
#line 38 "../lib/Services/Settings.vala"
	_g_object_unref0 (_tmp1_);
#line 36 "../lib/Services/Settings.vala"
	return self;
#line 138 "Settings.c"
}

/**
 * {@inheritDoc}
 */
PlankSettings*
plank_settings_construct_with_path (GType object_type,
                                    const gchar* schema,
                                    const gchar* path)
{
	PlankSettings * self = NULL;
	GSettings* _tmp0_;
	GSettings* _tmp1_;
#line 44 "../lib/Services/Settings.vala"
	g_return_val_if_fail (schema != NULL, NULL);
#line 44 "../lib/Services/Settings.vala"
	g_return_val_if_fail (path != NULL, NULL);
#line 46 "../lib/Services/Settings.vala"
	_tmp0_ = g_settings_new_with_path (schema, path);
#line 46 "../lib/Services/Settings.vala"
	_tmp1_ = _tmp0_;
#line 46 "../lib/Services/Settings.vala"
	self = (PlankSettings*) g_object_new (object_type, "settings", _tmp1_, NULL);
#line 46 "../lib/Services/Settings.vala"
	_g_object_unref0 (_tmp1_);
#line 44 "../lib/Services/Settings.vala"
	return self;
#line 166 "Settings.c"
}

/**
 * Verify the property given by its name and change the property if necessary.
 *
 * @param name the name of the property
 */
static void
plank_settings_real_verify (PlankSettings* self,
                            const gchar* name)
{
#line 89 "../lib/Services/Settings.vala"
	g_return_if_fail (name != NULL);
#line 180 "Settings.c"
}

void
plank_settings_verify (PlankSettings* self,
                       const gchar* name)
{
#line 89 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 89 "../lib/Services/Settings.vala"
	PLANK_SETTINGS_GET_CLASS (self)->verify (self, name);
#line 191 "Settings.c"
}

/**
 * Resets all properties to their default values.
 */
void
plank_settings_reset_all (PlankSettings* self)
{
	GSettings* _tmp0_;
	gchar** _tmp1_;
	gchar** _tmp2_;
#line 98 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 100 "../lib/Services/Settings.vala"
	_tmp0_ = self->priv->_settings;
#line 100 "../lib/Services/Settings.vala"
	_tmp2_ = _tmp1_ = g_settings_list_keys (_tmp0_);
#line 209 "Settings.c"
	{
		gchar** key_collection = NULL;
		gint key_collection_length1 = 0;
		gint _key_collection_size_ = 0;
		gint key_it = 0;
#line 100 "../lib/Services/Settings.vala"
		key_collection = _tmp2_;
#line 100 "../lib/Services/Settings.vala"
		key_collection_length1 = _vala_array_length (_tmp1_);
#line 100 "../lib/Services/Settings.vala"
		for (key_it = 0; key_it < key_collection_length1; key_it = key_it + 1) {
#line 221 "Settings.c"
			const gchar* key = NULL;
#line 100 "../lib/Services/Settings.vala"
			key = key_collection[key_it];
#line 225 "Settings.c"
			{
				GSettings* _tmp3_;
				const gchar* _tmp4_;
#line 101 "../lib/Services/Settings.vala"
				_tmp3_ = self->priv->_settings;
#line 101 "../lib/Services/Settings.vala"
				_tmp4_ = key;
#line 101 "../lib/Services/Settings.vala"
				g_settings_reset (_tmp3_, _tmp4_);
#line 235 "Settings.c"
			}
		}
#line 100 "../lib/Services/Settings.vala"
		key_collection = (_vala_array_free (key_collection, key_collection_length1, (GDestroyNotify) g_free), NULL);
#line 240 "Settings.c"
	}
}

/**
 * Delays saving changes until apply() is called.
 */
void
plank_settings_delay (PlankSettings* self)
{
	GSettings* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	GSettings* _tmp3_;
#line 107 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 109 "../lib/Services/Settings.vala"
	_tmp0_ = self->priv->_settings;
#line 109 "../lib/Services/Settings.vala"
	g_object_get (_tmp0_, "delay-apply", &_tmp1_, NULL);
#line 109 "../lib/Services/Settings.vala"
	_tmp2_ = _tmp1_;
#line 109 "../lib/Services/Settings.vala"
	if (_tmp2_) {
#line 110 "../lib/Services/Settings.vala"
		return;
#line 266 "Settings.c"
	}
#line 112 "../lib/Services/Settings.vala"
	plank_logger_verbose ("Settings.delay()", NULL);
#line 114 "../lib/Services/Settings.vala"
	_tmp3_ = self->priv->_settings;
#line 114 "../lib/Services/Settings.vala"
	g_settings_delay (_tmp3_);
#line 274 "Settings.c"
}

/**
 * If any settings were changed, apply them now.
 */
void
plank_settings_apply (PlankSettings* self)
{
	GSettings* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	GSettings* _tmp3_;
#line 120 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 122 "../lib/Services/Settings.vala"
	_tmp0_ = self->priv->_settings;
#line 122 "../lib/Services/Settings.vala"
	g_object_get (_tmp0_, "delay-apply", &_tmp1_, NULL);
#line 122 "../lib/Services/Settings.vala"
	_tmp2_ = _tmp1_;
#line 122 "../lib/Services/Settings.vala"
	if (!_tmp2_) {
#line 123 "../lib/Services/Settings.vala"
		return;
#line 299 "Settings.c"
	}
#line 125 "../lib/Services/Settings.vala"
	plank_logger_verbose ("Settings.apply()", NULL);
#line 127 "../lib/Services/Settings.vala"
	_tmp3_ = self->priv->_settings;
#line 127 "../lib/Services/Settings.vala"
	g_settings_apply (_tmp3_);
#line 307 "Settings.c"
}

GSettings*
plank_settings_get_settings (PlankSettings* self)
{
	GSettings* result;
	GSettings* _tmp0_;
#line 28 "../lib/Services/Settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "../lib/Services/Settings.vala"
	_tmp0_ = self->priv->_settings;
#line 28 "../lib/Services/Settings.vala"
	result = _tmp0_;
#line 28 "../lib/Services/Settings.vala"
	return result;
#line 323 "Settings.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 28 "../lib/Services/Settings.vala"
	return self ? g_object_ref (self) : NULL;
#line 331 "Settings.c"
}

static void
plank_settings_set_settings (PlankSettings* self,
                             GSettings* value)
{
	GSettings* _tmp0_;
#line 28 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 28 "../lib/Services/Settings.vala"
	_tmp0_ = _g_object_ref0 (value);
#line 28 "../lib/Services/Settings.vala"
	_g_object_unref0 (self->priv->_settings);
#line 28 "../lib/Services/Settings.vala"
	self->priv->_settings = _tmp0_;
#line 347 "Settings.c"
}

GSettingsBindFlags
plank_settings_get_bind_flags (PlankSettings* self)
{
	GSettingsBindFlags result;
	GSettingsBindFlags _tmp0_;
#line 31 "../lib/Services/Settings.vala"
	g_return_val_if_fail (self != NULL, 0U);
#line 31 "../lib/Services/Settings.vala"
	_tmp0_ = self->priv->_bind_flags;
#line 31 "../lib/Services/Settings.vala"
	result = _tmp0_;
#line 31 "../lib/Services/Settings.vala"
	return result;
#line 363 "Settings.c"
}

static void
plank_settings_set_bind_flags (PlankSettings* self,
                               GSettingsBindFlags value)
{
#line 31 "../lib/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 31 "../lib/Services/Settings.vala"
	self->priv->_bind_flags = value;
#line 374 "Settings.c"
}

static gpointer
_g_param_spec_ref0 (gpointer self)
{
#line 63 "../lib/Services/Settings.vala"
	return self ? g_param_spec_ref (self) : NULL;
#line 382 "Settings.c"
}

static GObject *
plank_settings_constructor (GType type,
                            guint n_construct_properties,
                            GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	PlankSettings * self;
	const gchar* class_type_name = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	GSettings* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	GParamSpec** properties = NULL;
	GObjectClass* _tmp6_;
	guint _tmp7_ = 0;
	GParamSpec** _tmp8_;
	gint properties_length1;
	gint _properties_size_;
	GSettings* _tmp9_;
	gchar** _tmp10_;
	gchar** _tmp11_;
#line 49 "../lib/Services/Settings.vala"
	parent_class = G_OBJECT_CLASS (plank_settings_parent_class);
#line 49 "../lib/Services/Settings.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 49 "../lib/Services/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_SETTINGS, PlankSettings);
#line 51 "../lib/Services/Settings.vala"
	_tmp0_ = g_type_name (G_TYPE_FROM_INSTANCE ((GObject*) self));
#line 51 "../lib/Services/Settings.vala"
	class_type_name = _tmp0_;
#line 53 "../lib/Services/Settings.vala"
	_tmp1_ = class_type_name;
#line 53 "../lib/Services/Settings.vala"
	_tmp2_ = self->priv->_settings;
#line 53 "../lib/Services/Settings.vala"
	g_object_get (_tmp2_, "path", &_tmp3_, NULL);
#line 53 "../lib/Services/Settings.vala"
	_tmp4_ = _tmp3_;
#line 53 "../lib/Services/Settings.vala"
	_tmp5_ = _tmp4_;
#line 53 "../lib/Services/Settings.vala"
	g_debug ("Settings.vala:53: Bind '%s' to '%s'", _tmp1_, _tmp5_);
#line 53 "../lib/Services/Settings.vala"
	_g_free0 (_tmp5_);
#line 55 "../lib/Services/Settings.vala"
	_tmp6_ = G_OBJECT_GET_CLASS ((GObject*) self);
#line 55 "../lib/Services/Settings.vala"
	_tmp8_ = g_object_class_list_properties (_tmp6_, &_tmp7_);
#line 55 "../lib/Services/Settings.vala"
	properties = _tmp8_;
#line 55 "../lib/Services/Settings.vala"
	properties_length1 = _tmp7_;
#line 55 "../lib/Services/Settings.vala"
	_properties_size_ = properties_length1;
#line 58 "../lib/Services/Settings.vala"
	_tmp9_ = self->priv->_settings;
#line 58 "../lib/Services/Settings.vala"
	_tmp11_ = _tmp10_ = g_settings_list_keys (_tmp9_);
#line 447 "Settings.c"
	{
		gchar** key_collection = NULL;
		gint key_collection_length1 = 0;
		gint _key_collection_size_ = 0;
		gint key_it = 0;
#line 58 "../lib/Services/Settings.vala"
		key_collection = _tmp11_;
#line 58 "../lib/Services/Settings.vala"
		key_collection_length1 = _vala_array_length (_tmp10_);
#line 58 "../lib/Services/Settings.vala"
		for (key_it = 0; key_it < key_collection_length1; key_it = key_it + 1) {
#line 459 "Settings.c"
			const gchar* key = NULL;
#line 58 "../lib/Services/Settings.vala"
			key = key_collection[key_it];
#line 463 "Settings.c"
			{
				GParamSpec* property = NULL;
				GParamSpec** _tmp12_;
				gint _tmp12__length1;
				GParamSpec* _tmp18_;
				const gchar* name = NULL;
				GParamSpec* _tmp19_;
				const gchar* _tmp20_;
				const gchar* nick = NULL;
				GParamSpec* _tmp21_;
				const gchar* _tmp22_;
				GType type = 0UL;
				GParamSpec* _tmp23_;
				GSettings* _tmp24_;
				gchar* _tmp25_;
				gchar* _tmp26_;
				gchar* _tmp27_;
				const gchar* _tmp28_;
				const gchar* _tmp29_;
				const gchar* _tmp30_;
				gboolean _tmp31_ = FALSE;
				gboolean _tmp32_ = FALSE;
				gboolean _tmp33_ = FALSE;
				const gchar* _tmp40_;
#line 60 "../lib/Services/Settings.vala"
				property = NULL;
#line 61 "../lib/Services/Settings.vala"
				_tmp12_ = properties;
#line 61 "../lib/Services/Settings.vala"
				_tmp12__length1 = properties_length1;
#line 494 "Settings.c"
				{
					GParamSpec** p_collection = NULL;
					gint p_collection_length1 = 0;
					gint _p_collection_size_ = 0;
					gint p_it = 0;
#line 61 "../lib/Services/Settings.vala"
					p_collection = _tmp12_;
#line 61 "../lib/Services/Settings.vala"
					p_collection_length1 = _tmp12__length1;
#line 61 "../lib/Services/Settings.vala"
					for (p_it = 0; p_it < p_collection_length1; p_it = p_it + 1) {
#line 506 "Settings.c"
						GParamSpec* p = NULL;
#line 61 "../lib/Services/Settings.vala"
						p = p_collection[p_it];
#line 510 "Settings.c"
						{
							GParamSpec* _tmp13_;
							const gchar* _tmp14_;
							const gchar* _tmp15_;
#line 62 "../lib/Services/Settings.vala"
							_tmp13_ = p;
#line 62 "../lib/Services/Settings.vala"
							_tmp14_ = g_param_spec_get_nick (_tmp13_);
#line 62 "../lib/Services/Settings.vala"
							_tmp15_ = key;
#line 62 "../lib/Services/Settings.vala"
							if (g_strcmp0 (_tmp14_, _tmp15_) == 0) {
#line 523 "Settings.c"
								GParamSpec* _tmp16_;
								GParamSpec* _tmp17_;
#line 63 "../lib/Services/Settings.vala"
								_tmp16_ = p;
#line 63 "../lib/Services/Settings.vala"
								_tmp17_ = _g_param_spec_ref0 (_tmp16_);
#line 63 "../lib/Services/Settings.vala"
								_g_param_spec_unref0 (property);
#line 63 "../lib/Services/Settings.vala"
								property = _tmp17_;
#line 64 "../lib/Services/Settings.vala"
								break;
#line 536 "Settings.c"
							}
						}
					}
				}
#line 66 "../lib/Services/Settings.vala"
				_tmp18_ = property;
#line 66 "../lib/Services/Settings.vala"
				if (_tmp18_ == NULL) {
#line 67 "../lib/Services/Settings.vala"
					_g_param_spec_unref0 (property);
#line 67 "../lib/Services/Settings.vala"
					continue;
#line 549 "Settings.c"
				}
#line 69 "../lib/Services/Settings.vala"
				_tmp19_ = property;
#line 69 "../lib/Services/Settings.vala"
				_tmp20_ = g_param_spec_get_name (_tmp19_);
#line 69 "../lib/Services/Settings.vala"
				name = _tmp20_;
#line 70 "../lib/Services/Settings.vala"
				_tmp21_ = property;
#line 70 "../lib/Services/Settings.vala"
				_tmp22_ = g_param_spec_get_nick (_tmp21_);
#line 70 "../lib/Services/Settings.vala"
				nick = _tmp22_;
#line 71 "../lib/Services/Settings.vala"
				_tmp23_ = property;
#line 71 "../lib/Services/Settings.vala"
				type = _tmp23_->value_type;
#line 73 "../lib/Services/Settings.vala"
				_tmp24_ = self->priv->_settings;
#line 73 "../lib/Services/Settings.vala"
				g_object_get (_tmp24_, "path", &_tmp25_, NULL);
#line 73 "../lib/Services/Settings.vala"
				_tmp26_ = _tmp25_;
#line 73 "../lib/Services/Settings.vala"
				_tmp27_ = _tmp26_;
#line 73 "../lib/Services/Settings.vala"
				_tmp28_ = nick;
#line 73 "../lib/Services/Settings.vala"
				_tmp29_ = class_type_name;
#line 73 "../lib/Services/Settings.vala"
				_tmp30_ = name;
#line 73 "../lib/Services/Settings.vala"
				plank_logger_verbose ("Bind '%s%s' to '%s.%s'", _tmp27_, _tmp28_, _tmp29_, _tmp30_, NULL);
#line 73 "../lib/Services/Settings.vala"
				_g_free0 (_tmp27_);
#line 74 "../lib/Services/Settings.vala"
				if (G_TYPE_IS_FUNDAMENTAL (type)) {
#line 74 "../lib/Services/Settings.vala"
					_tmp33_ = TRUE;
#line 589 "Settings.c"
				} else {
#line 74 "../lib/Services/Settings.vala"
					_tmp33_ = G_TYPE_IS_ENUM (type);
#line 593 "Settings.c"
				}
#line 74 "../lib/Services/Settings.vala"
				if (_tmp33_) {
#line 74 "../lib/Services/Settings.vala"
					_tmp32_ = TRUE;
#line 599 "Settings.c"
				} else {
#line 74 "../lib/Services/Settings.vala"
					_tmp32_ = G_TYPE_IS_FLAGS (type);
#line 603 "Settings.c"
				}
#line 74 "../lib/Services/Settings.vala"
				if (_tmp32_) {
#line 74 "../lib/Services/Settings.vala"
					_tmp31_ = TRUE;
#line 609 "Settings.c"
				} else {
#line 74 "../lib/Services/Settings.vala"
					_tmp31_ = type == G_TYPE_STRV;
#line 613 "Settings.c"
				}
#line 74 "../lib/Services/Settings.vala"
				if (_tmp31_) {
#line 617 "Settings.c"
					GSettings* _tmp34_;
					const gchar* _tmp35_;
					const gchar* _tmp36_;
					GSettingsBindFlags _tmp37_;
#line 75 "../lib/Services/Settings.vala"
					_tmp34_ = self->priv->_settings;
#line 75 "../lib/Services/Settings.vala"
					_tmp35_ = nick;
#line 75 "../lib/Services/Settings.vala"
					_tmp36_ = name;
#line 75 "../lib/Services/Settings.vala"
					_tmp37_ = self->priv->_bind_flags;
#line 75 "../lib/Services/Settings.vala"
					g_settings_bind (_tmp34_, _tmp35_, (GObject*) self, _tmp36_, _tmp37_);
#line 632 "Settings.c"
				} else {
					const gchar* _tmp38_;
					const gchar* _tmp39_;
#line 77 "../lib/Services/Settings.vala"
					_tmp38_ = name;
#line 77 "../lib/Services/Settings.vala"
					_tmp39_ = g_type_name (type);
#line 77 "../lib/Services/Settings.vala"
					g_warning ("Settings.vala:77: Binding of '%s' from type '%s' not supported yet!", _tmp38_, _tmp39_);
#line 642 "Settings.c"
				}
#line 80 "../lib/Services/Settings.vala"
				_tmp40_ = name;
#line 80 "../lib/Services/Settings.vala"
				plank_settings_verify (self, _tmp40_);
#line 58 "../lib/Services/Settings.vala"
				_g_param_spec_unref0 (property);
#line 650 "Settings.c"
			}
		}
#line 58 "../lib/Services/Settings.vala"
		key_collection = (_vala_array_free (key_collection, key_collection_length1, (GDestroyNotify) g_free), NULL);
#line 655 "Settings.c"
	}
#line 49 "../lib/Services/Settings.vala"
	properties = (g_free (properties), NULL);
#line 49 "../lib/Services/Settings.vala"
	return obj;
#line 661 "Settings.c"
}

static void
plank_settings_class_init (PlankSettingsClass * klass,
                           gpointer klass_data)
{
#line 25 "../lib/Services/Settings.vala"
	plank_settings_parent_class = g_type_class_peek_parent (klass);
#line 25 "../lib/Services/Settings.vala"
	g_type_class_adjust_private_offset (klass, &PlankSettings_private_offset);
#line 25 "../lib/Services/Settings.vala"
	((PlankSettingsClass *) klass)->verify = (void (*) (PlankSettings*, const gchar*)) plank_settings_real_verify;
#line 25 "../lib/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_plank_settings_get_property;
#line 25 "../lib/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_plank_settings_set_property;
#line 25 "../lib/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->constructor = plank_settings_constructor;
#line 25 "../lib/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->finalize = plank_settings_finalize;
#line 25 "../lib/Services/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), PLANK_SETTINGS_SETTINGS_PROPERTY, plank_settings_properties[PLANK_SETTINGS_SETTINGS_PROPERTY] = g_param_spec_object ("settings", "settings", "settings", g_settings_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY | G_PARAM_EXPLICIT_NOTIFY));
#line 25 "../lib/Services/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), PLANK_SETTINGS_BIND_FLAGS_PROPERTY, plank_settings_properties[PLANK_SETTINGS_BIND_FLAGS_PROPERTY] = g_param_spec_flags ("bind-flags", "bind-flags", "bind-flags", g_settings_bind_flags_get_type (), G_SETTINGS_BIND_DEFAULT, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY | G_PARAM_EXPLICIT_NOTIFY));
#line 686 "Settings.c"
}

static void
plank_settings_instance_init (PlankSettings * self,
                              gpointer klass)
{
#line 25 "../lib/Services/Settings.vala"
	self->priv = plank_settings_get_instance_private (self);
#line 31 "../lib/Services/Settings.vala"
	self->priv->_bind_flags = G_SETTINGS_BIND_DEFAULT;
#line 697 "Settings.c"
}

static void
plank_settings_finalize (GObject * obj)
{
	PlankSettings * self;
#line 25 "../lib/Services/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANK_TYPE_SETTINGS, PlankSettings);
#line 28 "../lib/Services/Settings.vala"
	_g_object_unref0 (self->priv->_settings);
#line 25 "../lib/Services/Settings.vala"
	G_OBJECT_CLASS (plank_settings_parent_class)->finalize (obj);
#line 710 "Settings.c"
}

/**
 * The base class for gsettings-based configuration classes. Defined properties will be bound
 * to the corresponing schema-key of the given schema-path. The property's nick-name must match
 * the schema-key.
 */
static GType
plank_settings_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PlankSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plank_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlankSettings), 0, (GInstanceInitFunc) plank_settings_instance_init, NULL };
	GType plank_settings_type_id;
	plank_settings_type_id = g_type_register_static (G_TYPE_OBJECT, "PlankSettings", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	PlankSettings_private_offset = g_type_add_instance_private (plank_settings_type_id, sizeof (PlankSettingsPrivate));
	return plank_settings_type_id;
}

GType
plank_settings_get_type (void)
{
	static volatile gsize plank_settings_type_id__volatile = 0;
	if (g_once_init_enter (&plank_settings_type_id__volatile)) {
		GType plank_settings_type_id;
		plank_settings_type_id = plank_settings_get_type_once ();
		g_once_init_leave (&plank_settings_type_id__volatile, plank_settings_type_id);
	}
	return plank_settings_type_id__volatile;
}

static void
_vala_plank_settings_get_property (GObject * object,
                                   guint property_id,
                                   GValue * value,
                                   GParamSpec * pspec)
{
	PlankSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PLANK_TYPE_SETTINGS, PlankSettings);
#line 25 "../lib/Services/Settings.vala"
	switch (property_id) {
#line 25 "../lib/Services/Settings.vala"
		case PLANK_SETTINGS_SETTINGS_PROPERTY:
#line 25 "../lib/Services/Settings.vala"
		g_value_set_object (value, plank_settings_get_settings (self));
#line 25 "../lib/Services/Settings.vala"
		break;
#line 25 "../lib/Services/Settings.vala"
		case PLANK_SETTINGS_BIND_FLAGS_PROPERTY:
#line 25 "../lib/Services/Settings.vala"
		g_value_set_flags (value, plank_settings_get_bind_flags (self));
#line 25 "../lib/Services/Settings.vala"
		break;
#line 762 "Settings.c"
		default:
#line 25 "../lib/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "../lib/Services/Settings.vala"
		break;
#line 768 "Settings.c"
	}
}

static void
_vala_plank_settings_set_property (GObject * object,
                                   guint property_id,
                                   const GValue * value,
                                   GParamSpec * pspec)
{
	PlankSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, PLANK_TYPE_SETTINGS, PlankSettings);
#line 25 "../lib/Services/Settings.vala"
	switch (property_id) {
#line 25 "../lib/Services/Settings.vala"
		case PLANK_SETTINGS_SETTINGS_PROPERTY:
#line 25 "../lib/Services/Settings.vala"
		plank_settings_set_settings (self, g_value_get_object (value));
#line 25 "../lib/Services/Settings.vala"
		break;
#line 25 "../lib/Services/Settings.vala"
		case PLANK_SETTINGS_BIND_FLAGS_PROPERTY:
#line 25 "../lib/Services/Settings.vala"
		plank_settings_set_bind_flags (self, g_value_get_flags (value));
#line 25 "../lib/Services/Settings.vala"
		break;
#line 794 "Settings.c"
		default:
#line 25 "../lib/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "../lib/Services/Settings.vala"
		break;
#line 800 "Settings.c"
	}
}

static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
#line 114 "../lib/Services/EnvironmentSettings.vala"
	if ((array != NULL) && (destroy_func != NULL)) {
#line 811 "Settings.c"
		gint i;
#line 114 "../lib/Services/EnvironmentSettings.vala"
		for (i = 0; i < array_length; i = i + 1) {
#line 114 "../lib/Services/EnvironmentSettings.vala"
			if (((gpointer*) array)[i] != NULL) {
#line 114 "../lib/Services/EnvironmentSettings.vala"
				destroy_func (((gpointer*) array)[i]);
#line 819 "Settings.c"
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
#line 114 "../lib/Services/EnvironmentSettings.vala"
	_vala_array_destroy (array, array_length, destroy_func);
#line 114 "../lib/Services/EnvironmentSettings.vala"
	g_free (array);
#line 834 "Settings.c"
}

static gint
_vala_array_length (gpointer array)
{
	gint length;
	length = 0;
#line 114 "../lib/Services/EnvironmentSettings.vala"
	if (array) {
#line 114 "../lib/Services/EnvironmentSettings.vala"
		while (((gpointer*) array)[length]) {
#line 114 "../lib/Services/EnvironmentSettings.vala"
			length++;
#line 848 "Settings.c"
		}
	}
#line 114 "../lib/Services/EnvironmentSettings.vala"
	return length;
#line 853 "Settings.c"
}
