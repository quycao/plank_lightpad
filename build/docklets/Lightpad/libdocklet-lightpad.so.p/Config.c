/* Config.c generated by valac 0.48.17, the Vala compiler
 * generated from Config.vala, do not modify */

#include <glib-object.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>
#include <stdlib.h>
#include <string.h>

#define TYPE_BASE_CONFIG (base_config_get_type ())
#define BASE_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BASE_CONFIG, BaseConfig))
#define BASE_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BASE_CONFIG, BaseConfigClass))
#define IS_BASE_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BASE_CONFIG))
#define IS_BASE_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BASE_CONFIG))
#define BASE_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BASE_CONFIG, BaseConfigClass))

typedef struct _BaseConfig BaseConfig;
typedef struct _BaseConfigClass BaseConfigClass;
typedef struct _BaseConfigPrivate BaseConfigPrivate;
typedef struct _ParamSpecBaseConfig ParamSpecBaseConfig;

#define TYPE_FILE_CONFIG (file_config_get_type ())
#define FILE_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FILE_CONFIG, FileConfig))
#define FILE_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FILE_CONFIG, FileConfigClass))
#define IS_FILE_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FILE_CONFIG))
#define IS_FILE_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FILE_CONFIG))
#define FILE_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FILE_CONFIG, FileConfigClass))

typedef struct _FileConfig FileConfig;
typedef struct _FileConfigClass FileConfigClass;
typedef struct _FileConfigPrivate FileConfigPrivate;
#define _g_key_file_unref0(var) ((var == NULL) ? NULL : (var = (g_key_file_unref (var), NULL)))

struct _BaseConfig {
	GTypeInstance parent_instance;
	volatile int ref_count;
	BaseConfigPrivate * priv;
	gint grid_y;
	gint grid_x;
	gint grid_row_spacing;
	gint grid_col_spacing;
	gdouble item_font_size;
	gint item_icon_size;
	gint item_box_width;
	gint item_box_height;
	gint sb_width;
	gint sb_height;
	gint screen_w;
	gint screen_h;
};

struct _BaseConfigClass {
	GTypeClass parent_class;
	void (*finalize) (BaseConfig *self);
};

struct _ParamSpecBaseConfig {
	GParamSpec parent_instance;
};

struct _FileConfig {
	BaseConfig parent_instance;
	FileConfigPrivate * priv;
};

struct _FileConfigClass {
	BaseConfigClass parent_class;
};

struct _FileConfigPrivate {
	GKeyFile* config_f;
};

static gpointer base_config_parent_class = NULL;
static gint FileConfig_private_offset;
static gpointer file_config_parent_class = NULL;

G_GNUC_INTERNAL gpointer base_config_ref (gpointer instance);
G_GNUC_INTERNAL void base_config_unref (gpointer instance);
G_GNUC_INTERNAL GParamSpec* param_spec_base_config (const gchar* name,
                                    const gchar* nick,
                                    const gchar* blurb,
                                    GType object_type,
                                    GParamFlags flags);
G_GNUC_INTERNAL void value_set_base_config (GValue* value,
                            gpointer v_object) G_GNUC_UNUSED;
G_GNUC_INTERNAL void value_take_base_config (GValue* value,
                             gpointer v_object);
G_GNUC_INTERNAL gpointer value_get_base_config (const GValue* value) G_GNUC_UNUSED;
G_GNUC_INTERNAL GType base_config_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BaseConfig, base_config_unref)
G_GNUC_INTERNAL BaseConfig* base_config_new (gint screen_width,
                             gint screen_height,
                             gboolean init_default);
G_GNUC_INTERNAL BaseConfig* base_config_construct (GType object_type,
                                   gint screen_width,
                                   gint screen_height,
                                   gboolean init_default);
static void base_config_default_icon_size (BaseConfig* self);
static void base_config_default_grid_size (BaseConfig* self);
static void base_config_finalize (BaseConfig * obj);
static GType base_config_get_type_once (void);
G_GNUC_INTERNAL void merge_int (gint* ptr,
                gint val);
G_GNUC_INTERNAL void merge_double (gdouble* ptr,
                   gdouble val);
G_GNUC_INTERNAL GType file_config_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (FileConfig, base_config_unref)
G_GNUC_INTERNAL FileConfig* file_config_new (gint screen_width,
                             gint screen_height,
                             const gchar* file);
G_GNUC_INTERNAL FileConfig* file_config_construct (GType object_type,
                                   gint screen_width,
                                   gint screen_height,
                                   const gchar* file);
static void file_config_finalize (BaseConfig * obj);
static GType file_config_get_type_once (void);

G_GNUC_INTERNAL BaseConfig*
base_config_construct (GType object_type,
                       gint screen_width,
                       gint screen_height,
                       gboolean init_default)
{
	BaseConfig* self = NULL;
#line 19 "../docklets/Lightpad/Config.vala"
	self = (BaseConfig*) g_type_create_instance (object_type);
#line 20 "../docklets/Lightpad/Config.vala"
	self->screen_w = screen_width;
#line 21 "../docklets/Lightpad/Config.vala"
	self->screen_h = screen_height;
#line 22 "../docklets/Lightpad/Config.vala"
	if (init_default) {
#line 23 "../docklets/Lightpad/Config.vala"
		base_config_default_icon_size (self);
#line 24 "../docklets/Lightpad/Config.vala"
		base_config_default_grid_size (self);
#line 26 "../docklets/Lightpad/Config.vala"
		self->item_font_size = 11.5;
#line 28 "../docklets/Lightpad/Config.vala"
		self->item_box_width = self->item_icon_size + 60;
#line 29 "../docklets/Lightpad/Config.vala"
		self->item_box_height = self->item_icon_size + 30;
#line 31 "../docklets/Lightpad/Config.vala"
		self->grid_row_spacing = 30;
#line 32 "../docklets/Lightpad/Config.vala"
		self->grid_col_spacing = 30;
#line 151 "Config.c"
	}
#line 19 "../docklets/Lightpad/Config.vala"
	return self;
#line 155 "Config.c"
}

G_GNUC_INTERNAL BaseConfig*
base_config_new (gint screen_width,
                 gint screen_height,
                 gboolean init_default)
{
#line 19 "../docklets/Lightpad/Config.vala"
	return base_config_construct (TYPE_BASE_CONFIG, screen_width, screen_height, init_default);
#line 165 "Config.c"
}

static void
base_config_default_icon_size (BaseConfig* self)
{
	gdouble scale_factor = 0.0;
	gdouble suggested_size = 0.0;
#line 36 "../docklets/Lightpad/Config.vala"
	g_return_if_fail (self != NULL);
#line 37 "../docklets/Lightpad/Config.vala"
	scale_factor = 1.0 / 3.0;
#line 38 "../docklets/Lightpad/Config.vala"
	suggested_size = pow ((gdouble) (self->screen_w * self->screen_w), scale_factor);
#line 39 "../docklets/Lightpad/Config.vala"
	suggested_size = suggested_size / 1.7;
#line 40 "../docklets/Lightpad/Config.vala"
	if (suggested_size < ((gdouble) 27)) {
#line 41 "../docklets/Lightpad/Config.vala"
		self->item_icon_size = 24;
#line 185 "Config.c"
	} else {
		gboolean _tmp0_ = FALSE;
#line 42 "../docklets/Lightpad/Config.vala"
		if (suggested_size >= ((gdouble) 27)) {
#line 42 "../docklets/Lightpad/Config.vala"
			_tmp0_ = suggested_size < ((gdouble) 40);
#line 192 "Config.c"
		} else {
#line 42 "../docklets/Lightpad/Config.vala"
			_tmp0_ = FALSE;
#line 196 "Config.c"
		}
#line 42 "../docklets/Lightpad/Config.vala"
		if (_tmp0_) {
#line 43 "../docklets/Lightpad/Config.vala"
			self->item_icon_size = 32;
#line 202 "Config.c"
		} else {
			gboolean _tmp1_ = FALSE;
			gboolean _tmp2_ = FALSE;
#line 44 "../docklets/Lightpad/Config.vala"
			if (suggested_size >= ((gdouble) 40)) {
#line 44 "../docklets/Lightpad/Config.vala"
				_tmp2_ = suggested_size < ((gdouble) 56);
#line 210 "Config.c"
			} else {
#line 44 "../docklets/Lightpad/Config.vala"
				_tmp2_ = FALSE;
#line 214 "Config.c"
			}
#line 44 "../docklets/Lightpad/Config.vala"
			if (_tmp2_) {
#line 44 "../docklets/Lightpad/Config.vala"
				_tmp1_ = TRUE;
#line 220 "Config.c"
			} else {
#line 44 "../docklets/Lightpad/Config.vala"
				_tmp1_ = self->screen_h == 720;
#line 224 "Config.c"
			}
#line 44 "../docklets/Lightpad/Config.vala"
			if (_tmp1_) {
#line 45 "../docklets/Lightpad/Config.vala"
				self->item_icon_size = 48;
#line 230 "Config.c"
			} else {
#line 46 "../docklets/Lightpad/Config.vala"
				if (suggested_size >= ((gdouble) 56)) {
#line 47 "../docklets/Lightpad/Config.vala"
					self->item_icon_size = 64;
#line 236 "Config.c"
				}
			}
		}
	}
}

static void
base_config_default_grid_size (BaseConfig* self)
{
#line 51 "../docklets/Lightpad/Config.vala"
	g_return_if_fail (self != NULL);
#line 53 "../docklets/Lightpad/Config.vala"
	if ((self->screen_w / ((gdouble) self->screen_h)) < 1.4) {
#line 54 "../docklets/Lightpad/Config.vala"
		self->grid_x = 5;
#line 55 "../docklets/Lightpad/Config.vala"
		self->grid_y = 5;
#line 254 "Config.c"
	} else {
#line 56 "../docklets/Lightpad/Config.vala"
		if (self->screen_h == 600) {
#line 57 "../docklets/Lightpad/Config.vala"
			self->grid_y = 6;
#line 58 "../docklets/Lightpad/Config.vala"
			self->grid_x = 4;
#line 262 "Config.c"
		} else {
#line 59 "../docklets/Lightpad/Config.vala"
			if (self->screen_h == 720) {
#line 60 "../docklets/Lightpad/Config.vala"
				self->grid_y = 7;
#line 61 "../docklets/Lightpad/Config.vala"
				self->grid_x = 5;
#line 270 "Config.c"
			} else {
#line 62 "../docklets/Lightpad/Config.vala"
				if (self->screen_h == 1080) {
#line 63 "../docklets/Lightpad/Config.vala"
					self->grid_y = 9;
#line 64 "../docklets/Lightpad/Config.vala"
					self->grid_x = 7;
#line 278 "Config.c"
				} else {
#line 66 "../docklets/Lightpad/Config.vala"
					self->grid_y = 6;
#line 67 "../docklets/Lightpad/Config.vala"
					self->grid_x = 4;
#line 284 "Config.c"
				}
			}
		}
	}
}

static void
value_base_config_init (GValue* value)
{
#line 1 "../docklets/Lightpad/Config.vala"
	value->data[0].v_pointer = NULL;
#line 296 "Config.c"
}

static void
value_base_config_free_value (GValue* value)
{
#line 1 "../docklets/Lightpad/Config.vala"
	if (value->data[0].v_pointer) {
#line 1 "../docklets/Lightpad/Config.vala"
		base_config_unref (value->data[0].v_pointer);
#line 306 "Config.c"
	}
}

static void
value_base_config_copy_value (const GValue* src_value,
                              GValue* dest_value)
{
#line 1 "../docklets/Lightpad/Config.vala"
	if (src_value->data[0].v_pointer) {
#line 1 "../docklets/Lightpad/Config.vala"
		dest_value->data[0].v_pointer = base_config_ref (src_value->data[0].v_pointer);
#line 318 "Config.c"
	} else {
#line 1 "../docklets/Lightpad/Config.vala"
		dest_value->data[0].v_pointer = NULL;
#line 322 "Config.c"
	}
}

static gpointer
value_base_config_peek_pointer (const GValue* value)
{
#line 1 "../docklets/Lightpad/Config.vala"
	return value->data[0].v_pointer;
#line 331 "Config.c"
}

static gchar*
value_base_config_collect_value (GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
#line 1 "../docklets/Lightpad/Config.vala"
	if (collect_values[0].v_pointer) {
#line 342 "Config.c"
		BaseConfig * object;
		object = collect_values[0].v_pointer;
#line 1 "../docklets/Lightpad/Config.vala"
		if (object->parent_instance.g_class == NULL) {
#line 1 "../docklets/Lightpad/Config.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 349 "Config.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 1 "../docklets/Lightpad/Config.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 353 "Config.c"
		}
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = base_config_ref (object);
#line 357 "Config.c"
	} else {
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = NULL;
#line 361 "Config.c"
	}
#line 1 "../docklets/Lightpad/Config.vala"
	return NULL;
#line 365 "Config.c"
}

static gchar*
value_base_config_lcopy_value (const GValue* value,
                               guint n_collect_values,
                               GTypeCValue* collect_values,
                               guint collect_flags)
{
	BaseConfig ** object_p;
	object_p = collect_values[0].v_pointer;
#line 1 "../docklets/Lightpad/Config.vala"
	if (!object_p) {
#line 1 "../docklets/Lightpad/Config.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 380 "Config.c"
	}
#line 1 "../docklets/Lightpad/Config.vala"
	if (!value->data[0].v_pointer) {
#line 1 "../docklets/Lightpad/Config.vala"
		*object_p = NULL;
#line 386 "Config.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 1 "../docklets/Lightpad/Config.vala"
		*object_p = value->data[0].v_pointer;
#line 390 "Config.c"
	} else {
#line 1 "../docklets/Lightpad/Config.vala"
		*object_p = base_config_ref (value->data[0].v_pointer);
#line 394 "Config.c"
	}
#line 1 "../docklets/Lightpad/Config.vala"
	return NULL;
#line 398 "Config.c"
}

G_GNUC_INTERNAL GParamSpec*
param_spec_base_config (const gchar* name,
                        const gchar* nick,
                        const gchar* blurb,
                        GType object_type,
                        GParamFlags flags)
{
	ParamSpecBaseConfig* spec;
#line 1 "../docklets/Lightpad/Config.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_BASE_CONFIG), NULL);
#line 1 "../docklets/Lightpad/Config.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 1 "../docklets/Lightpad/Config.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 1 "../docklets/Lightpad/Config.vala"
	return G_PARAM_SPEC (spec);
#line 417 "Config.c"
}

G_GNUC_INTERNAL gpointer
value_get_base_config (const GValue* value)
{
#line 1 "../docklets/Lightpad/Config.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_BASE_CONFIG), NULL);
#line 1 "../docklets/Lightpad/Config.vala"
	return value->data[0].v_pointer;
#line 427 "Config.c"
}

G_GNUC_INTERNAL void
value_set_base_config (GValue* value,
                       gpointer v_object)
{
	BaseConfig * old;
#line 1 "../docklets/Lightpad/Config.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_BASE_CONFIG));
#line 1 "../docklets/Lightpad/Config.vala"
	old = value->data[0].v_pointer;
#line 1 "../docklets/Lightpad/Config.vala"
	if (v_object) {
#line 1 "../docklets/Lightpad/Config.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_BASE_CONFIG));
#line 1 "../docklets/Lightpad/Config.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = v_object;
#line 1 "../docklets/Lightpad/Config.vala"
		base_config_ref (value->data[0].v_pointer);
#line 449 "Config.c"
	} else {
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = NULL;
#line 453 "Config.c"
	}
#line 1 "../docklets/Lightpad/Config.vala"
	if (old) {
#line 1 "../docklets/Lightpad/Config.vala"
		base_config_unref (old);
#line 459 "Config.c"
	}
}

G_GNUC_INTERNAL void
value_take_base_config (GValue* value,
                        gpointer v_object)
{
	BaseConfig * old;
#line 1 "../docklets/Lightpad/Config.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_BASE_CONFIG));
#line 1 "../docklets/Lightpad/Config.vala"
	old = value->data[0].v_pointer;
#line 1 "../docklets/Lightpad/Config.vala"
	if (v_object) {
#line 1 "../docklets/Lightpad/Config.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_BASE_CONFIG));
#line 1 "../docklets/Lightpad/Config.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = v_object;
#line 480 "Config.c"
	} else {
#line 1 "../docklets/Lightpad/Config.vala"
		value->data[0].v_pointer = NULL;
#line 484 "Config.c"
	}
#line 1 "../docklets/Lightpad/Config.vala"
	if (old) {
#line 1 "../docklets/Lightpad/Config.vala"
		base_config_unref (old);
#line 490 "Config.c"
	}
}

static void
base_config_class_init (BaseConfigClass * klass,
                        gpointer klass_data)
{
#line 1 "../docklets/Lightpad/Config.vala"
	base_config_parent_class = g_type_class_peek_parent (klass);
#line 1 "../docklets/Lightpad/Config.vala"
	((BaseConfigClass *) klass)->finalize = base_config_finalize;
#line 502 "Config.c"
}

static void
base_config_instance_init (BaseConfig * self,
                           gpointer klass)
{
#line 1 "../docklets/Lightpad/Config.vala"
	self->ref_count = 1;
#line 511 "Config.c"
}

static void
base_config_finalize (BaseConfig * obj)
{
	BaseConfig * self;
#line 1 "../docklets/Lightpad/Config.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_BASE_CONFIG, BaseConfig);
#line 1 "../docklets/Lightpad/Config.vala"
	g_signal_handlers_destroy (self);
#line 522 "Config.c"
}

static GType
base_config_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { value_base_config_init, value_base_config_free_value, value_base_config_copy_value, value_base_config_peek_pointer, "p", value_base_config_collect_value, "p", value_base_config_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (BaseConfigClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) base_config_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaseConfig), 0, (GInstanceInitFunc) base_config_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType base_config_type_id;
	base_config_type_id = g_type_register_fundamental (g_type_fundamental_next (), "BaseConfig", &g_define_type_info, &g_define_type_fundamental_info, 0);
	return base_config_type_id;
}

G_GNUC_INTERNAL GType
base_config_get_type (void)
{
	static volatile gsize base_config_type_id__volatile = 0;
	if (g_once_init_enter (&base_config_type_id__volatile)) {
		GType base_config_type_id;
		base_config_type_id = base_config_get_type_once ();
		g_once_init_leave (&base_config_type_id__volatile, base_config_type_id);
	}
	return base_config_type_id__volatile;
}

G_GNUC_INTERNAL gpointer
base_config_ref (gpointer instance)
{
	BaseConfig * self;
	self = instance;
#line 1 "../docklets/Lightpad/Config.vala"
	g_atomic_int_inc (&self->ref_count);
#line 1 "../docklets/Lightpad/Config.vala"
	return instance;
#line 557 "Config.c"
}

G_GNUC_INTERNAL void
base_config_unref (gpointer instance)
{
	BaseConfig * self;
	self = instance;
#line 1 "../docklets/Lightpad/Config.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 1 "../docklets/Lightpad/Config.vala"
		BASE_CONFIG_GET_CLASS (self)->finalize (self);
#line 1 "../docklets/Lightpad/Config.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 571 "Config.c"
	}
}

G_GNUC_INTERNAL void
merge_int (gint* ptr,
           gint val)
{
#line 73 "../docklets/Lightpad/Config.vala"
	if (val > -1) {
#line 74 "../docklets/Lightpad/Config.vala"
		*ptr = val;
#line 583 "Config.c"
	}
}

G_GNUC_INTERNAL void
merge_double (gdouble* ptr,
              gdouble val)
{
#line 78 "../docklets/Lightpad/Config.vala"
	if (val > (-1.0)) {
#line 79 "../docklets/Lightpad/Config.vala"
		*ptr = val;
#line 595 "Config.c"
	}
}

static inline gpointer
file_config_get_instance_private (FileConfig* self)
{
	return G_STRUCT_MEMBER_P (self, FileConfig_private_offset);
}

G_GNUC_INTERNAL FileConfig*
file_config_construct (GType object_type,
                       gint screen_width,
                       gint screen_height,
                       const gchar* file)
{
	FileConfig* self = NULL;
	GKeyFile* _tmp0_;
#line 96 "../docklets/Lightpad/Config.vala"
	static const gchar* group[3] = {"Grid", "AppItem", "SearchBar"};
#line 615 "Config.c"
	GError* _inner_error0_ = NULL;
#line 85 "../docklets/Lightpad/Config.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 86 "../docklets/Lightpad/Config.vala"
	self = (FileConfig*) base_config_construct (object_type, screen_width, screen_height, TRUE);
#line 88 "../docklets/Lightpad/Config.vala"
	_tmp0_ = g_key_file_new ();
#line 88 "../docklets/Lightpad/Config.vala"
	_g_key_file_unref0 (self->priv->config_f);
#line 88 "../docklets/Lightpad/Config.vala"
	self->priv->config_f = _tmp0_;
#line 627 "Config.c"
	{
		GKeyFile* _tmp1_;
#line 90 "../docklets/Lightpad/Config.vala"
		_tmp1_ = self->priv->config_f;
#line 90 "../docklets/Lightpad/Config.vala"
		g_key_file_load_from_file (_tmp1_, file, G_KEY_FILE_KEEP_COMMENTS, &_inner_error0_);
#line 90 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 636 "Config.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 89 "../docklets/Lightpad/Config.vala"
		g_clear_error (&_inner_error0_);
#line 92 "../docklets/Lightpad/Config.vala"
		g_message ("Config.vala:92: Config file not found. Using default values");
#line 93 "../docklets/Lightpad/Config.vala"
		return self;
#line 649 "Config.c"
	}
	__finally0:
#line 89 "../docklets/Lightpad/Config.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 89 "../docklets/Lightpad/Config.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 89 "../docklets/Lightpad/Config.vala"
		g_clear_error (&_inner_error0_);
#line 89 "../docklets/Lightpad/Config.vala"
		return NULL;
#line 660 "Config.c"
	}
	{
		gint _tmp2_ = 0;
		GKeyFile* _tmp3_;
		const gchar* _tmp4_;
		gint _tmp5_ = 0;
		GKeyFile* _tmp6_;
		const gchar* _tmp7_;
		gint _tmp8_ = 0;
		GKeyFile* _tmp9_;
		const gchar* _tmp10_;
		gint _tmp11_ = 0;
		GKeyFile* _tmp12_;
		const gchar* _tmp13_;
		gdouble _tmp14_ = 0.0;
		GKeyFile* _tmp15_;
		const gchar* _tmp16_;
		gint _tmp17_ = 0;
		GKeyFile* _tmp18_;
		const gchar* _tmp19_;
		gint _tmp20_ = 0;
		GKeyFile* _tmp21_;
		const gchar* _tmp22_;
		gint _tmp23_ = 0;
		GKeyFile* _tmp24_;
		const gchar* _tmp25_;
		gint _tmp26_ = 0;
		GKeyFile* _tmp27_;
		const gchar* _tmp28_;
		gint _tmp29_ = 0;
		GKeyFile* _tmp30_;
		const gchar* _tmp31_;
#line 98 "../docklets/Lightpad/Config.vala"
		_tmp3_ = self->priv->config_f;
#line 98 "../docklets/Lightpad/Config.vala"
		_tmp4_ = group[0];
#line 98 "../docklets/Lightpad/Config.vala"
		_tmp2_ = g_key_file_get_integer (_tmp3_, _tmp4_, "Y", &_inner_error0_);
#line 98 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 701 "Config.c"
			goto __catch1_g_error;
		}
#line 98 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->grid_y, _tmp2_);
#line 99 "../docklets/Lightpad/Config.vala"
		_tmp6_ = self->priv->config_f;
#line 99 "../docklets/Lightpad/Config.vala"
		_tmp7_ = group[0];
#line 99 "../docklets/Lightpad/Config.vala"
		_tmp5_ = g_key_file_get_integer (_tmp6_, _tmp7_, "X", &_inner_error0_);
#line 99 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 714 "Config.c"
			goto __catch1_g_error;
		}
#line 99 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->grid_x, _tmp5_);
#line 100 "../docklets/Lightpad/Config.vala"
		_tmp9_ = self->priv->config_f;
#line 100 "../docklets/Lightpad/Config.vala"
		_tmp10_ = group[0];
#line 100 "../docklets/Lightpad/Config.vala"
		_tmp8_ = g_key_file_get_integer (_tmp9_, _tmp10_, "RowSpacing", &_inner_error0_);
#line 100 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 727 "Config.c"
			goto __catch1_g_error;
		}
#line 100 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->grid_row_spacing, _tmp8_);
#line 101 "../docklets/Lightpad/Config.vala"
		_tmp12_ = self->priv->config_f;
#line 101 "../docklets/Lightpad/Config.vala"
		_tmp13_ = group[0];
#line 101 "../docklets/Lightpad/Config.vala"
		_tmp11_ = g_key_file_get_integer (_tmp12_, _tmp13_, "ColumnSpacing", &_inner_error0_);
#line 101 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 740 "Config.c"
			goto __catch1_g_error;
		}
#line 101 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->grid_col_spacing, _tmp11_);
#line 103 "../docklets/Lightpad/Config.vala"
		_tmp15_ = self->priv->config_f;
#line 103 "../docklets/Lightpad/Config.vala"
		_tmp16_ = group[1];
#line 103 "../docklets/Lightpad/Config.vala"
		_tmp14_ = g_key_file_get_double (_tmp15_, _tmp16_, "FontSize", &_inner_error0_);
#line 103 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 753 "Config.c"
			goto __catch1_g_error;
		}
#line 103 "../docklets/Lightpad/Config.vala"
		merge_double (&((BaseConfig*) self)->item_font_size, _tmp14_);
#line 104 "../docklets/Lightpad/Config.vala"
		_tmp18_ = self->priv->config_f;
#line 104 "../docklets/Lightpad/Config.vala"
		_tmp19_ = group[1];
#line 104 "../docklets/Lightpad/Config.vala"
		_tmp17_ = g_key_file_get_integer (_tmp18_, _tmp19_, "IconSize", &_inner_error0_);
#line 104 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 766 "Config.c"
			goto __catch1_g_error;
		}
#line 104 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->item_icon_size, _tmp17_);
#line 105 "../docklets/Lightpad/Config.vala"
		_tmp21_ = self->priv->config_f;
#line 105 "../docklets/Lightpad/Config.vala"
		_tmp22_ = group[1];
#line 105 "../docklets/Lightpad/Config.vala"
		_tmp20_ = g_key_file_get_integer (_tmp21_, _tmp22_, "BoxWidth", &_inner_error0_);
#line 105 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 779 "Config.c"
			goto __catch1_g_error;
		}
#line 105 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->item_box_width, _tmp20_);
#line 106 "../docklets/Lightpad/Config.vala"
		_tmp24_ = self->priv->config_f;
#line 106 "../docklets/Lightpad/Config.vala"
		_tmp25_ = group[1];
#line 106 "../docklets/Lightpad/Config.vala"
		_tmp23_ = g_key_file_get_integer (_tmp24_, _tmp25_, "BoxHeight", &_inner_error0_);
#line 106 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 792 "Config.c"
			goto __catch1_g_error;
		}
#line 106 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->item_box_height, _tmp23_);
#line 108 "../docklets/Lightpad/Config.vala"
		_tmp27_ = self->priv->config_f;
#line 108 "../docklets/Lightpad/Config.vala"
		_tmp28_ = group[2];
#line 108 "../docklets/Lightpad/Config.vala"
		_tmp26_ = g_key_file_get_integer (_tmp27_, _tmp28_, "Width", &_inner_error0_);
#line 108 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 805 "Config.c"
			goto __catch1_g_error;
		}
#line 108 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->sb_width, _tmp26_);
#line 109 "../docklets/Lightpad/Config.vala"
		_tmp30_ = self->priv->config_f;
#line 109 "../docklets/Lightpad/Config.vala"
		_tmp31_ = group[2];
#line 109 "../docklets/Lightpad/Config.vala"
		_tmp29_ = g_key_file_get_integer (_tmp30_, _tmp31_, "Height", &_inner_error0_);
#line 109 "../docklets/Lightpad/Config.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 818 "Config.c"
			goto __catch1_g_error;
		}
#line 109 "../docklets/Lightpad/Config.vala"
		merge_int (&((BaseConfig*) self)->sb_height, _tmp29_);
#line 823 "Config.c"
	}
	goto __finally1;
	__catch1_g_error:
	{
#line 97 "../docklets/Lightpad/Config.vala"
		g_clear_error (&_inner_error0_);
#line 112 "../docklets/Lightpad/Config.vala"
		g_message ("Config.vala:112: Key config missing");
#line 832 "Config.c"
	}
	__finally1:
#line 97 "../docklets/Lightpad/Config.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 97 "../docklets/Lightpad/Config.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 97 "../docklets/Lightpad/Config.vala"
		g_clear_error (&_inner_error0_);
#line 97 "../docklets/Lightpad/Config.vala"
		return NULL;
#line 843 "Config.c"
	}
#line 85 "../docklets/Lightpad/Config.vala"
	return self;
#line 847 "Config.c"
}

G_GNUC_INTERNAL FileConfig*
file_config_new (gint screen_width,
                 gint screen_height,
                 const gchar* file)
{
#line 85 "../docklets/Lightpad/Config.vala"
	return file_config_construct (TYPE_FILE_CONFIG, screen_width, screen_height, file);
#line 857 "Config.c"
}

static void
file_config_class_init (FileConfigClass * klass,
                        gpointer klass_data)
{
#line 82 "../docklets/Lightpad/Config.vala"
	file_config_parent_class = g_type_class_peek_parent (klass);
#line 82 "../docklets/Lightpad/Config.vala"
	((BaseConfigClass *) klass)->finalize = file_config_finalize;
#line 82 "../docklets/Lightpad/Config.vala"
	g_type_class_adjust_private_offset (klass, &FileConfig_private_offset);
#line 870 "Config.c"
}

static void
file_config_instance_init (FileConfig * self,
                           gpointer klass)
{
#line 82 "../docklets/Lightpad/Config.vala"
	self->priv = file_config_get_instance_private (self);
#line 879 "Config.c"
}

static void
file_config_finalize (BaseConfig * obj)
{
	FileConfig * self;
#line 82 "../docklets/Lightpad/Config.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_FILE_CONFIG, FileConfig);
#line 83 "../docklets/Lightpad/Config.vala"
	_g_key_file_unref0 (self->priv->config_f);
#line 82 "../docklets/Lightpad/Config.vala"
	BASE_CONFIG_CLASS (file_config_parent_class)->finalize (obj);
#line 892 "Config.c"
}

static GType
file_config_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (FileConfigClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) file_config_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FileConfig), 0, (GInstanceInitFunc) file_config_instance_init, NULL };
	GType file_config_type_id;
	file_config_type_id = g_type_register_static (TYPE_BASE_CONFIG, "FileConfig", &g_define_type_info, 0);
	FileConfig_private_offset = g_type_add_instance_private (file_config_type_id, sizeof (FileConfigPrivate));
	return file_config_type_id;
}

G_GNUC_INTERNAL GType
file_config_get_type (void)
{
	static volatile gsize file_config_type_id__volatile = 0;
	if (g_once_init_enter (&file_config_type_id__volatile)) {
		GType file_config_type_id;
		file_config_type_id = file_config_get_type_once ();
		g_once_init_leave (&file_config_type_id__volatile, file_config_type_id);
	}
	return file_config_type_id__volatile;
}
