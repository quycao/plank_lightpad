/* Utils.c generated by valac 0.48.17, the Vala compiler
 * generated from Utils.vala, do not modify */

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

#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gio/gio.h>
#include <float.h>
#include <math.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_settings_schema_unref0(var) ((var == NULL) ? NULL : (var = (g_settings_schema_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

GSettings* plank_create_settings (const gchar* schema_id,
                                  const gchar* path);
GSettings* plank_try_create_settings (const gchar* schema_id,
                                      const gchar* path);
gchar** plank_string_split_combine (const gchar* s,
                                    const gchar* delimiter,
                                    gint* result_length1);
G_GNUC_INTERNAL void plank_combine_strings (gchar*** _result_,
                            gint* _result__length1,
                            const gchar* delimiter,
                            gint n,
                            gint i);
gboolean plank_file_is_dockitem (GFile* file);
gdouble plank_nround (gdouble d,
                      guint n);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);

/**
 * Creates a new {@link GLib.Settings} object with a given schema and path.
 *
 * It is fatal if no schema to the given schema_id is found!
 *
 * If path is NULL then the path from the schema is used. It is an error if
 * path is NULL and the schema has no path of its own or if path is non-NULL
 * and not equal to the path that the schema does have.
 *
 * @param schema_id a schema ID
 * @param path the path to use
 * @return a new GLib.Settings object
 */
GSettings*
plank_create_settings (const gchar* schema_id,
                       const gchar* path)
{
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	GSettingsSchema* schema = NULL;
	GSettingsSchemaSource* _tmp4_;
	GSettingsSchema* _tmp5_;
	GSettings* _tmp6_;
	GSettings* result = NULL;
#line 35 "../lib/Services/Utils.vala"
	g_return_val_if_fail (schema_id != NULL, NULL);
#line 38 "../lib/Services/Utils.vala"
	_tmp0_ = g_get_current_dir ();
#line 38 "../lib/Services/Utils.vala"
	_tmp1_ = _tmp0_;
#line 38 "../lib/Services/Utils.vala"
	_tmp2_ = g_strconcat (_tmp1_, "/data", NULL);
#line 38 "../lib/Services/Utils.vala"
	_tmp3_ = _tmp2_;
#line 38 "../lib/Services/Utils.vala"
	g_setenv ("GSETTINGS_SCHEMA_DIR", _tmp3_, FALSE);
#line 38 "../lib/Services/Utils.vala"
	_g_free0 (_tmp3_);
#line 38 "../lib/Services/Utils.vala"
	_g_free0 (_tmp1_);
#line 40 "../lib/Services/Utils.vala"
	_tmp4_ = g_settings_schema_source_get_default ();
#line 40 "../lib/Services/Utils.vala"
	_tmp5_ = g_settings_schema_source_lookup (_tmp4_, schema_id, TRUE);
#line 40 "../lib/Services/Utils.vala"
	schema = _tmp5_;
#line 41 "../lib/Services/Utils.vala"
	if (schema == NULL) {
#line 42 "../lib/Services/Utils.vala"
		g_error ("Utils.vala:42: GSettingsSchema '%s' not found", schema_id);
#line 111 "Utils.c"
	}
#line 44 "../lib/Services/Utils.vala"
	_tmp6_ = g_settings_new_full (schema, NULL, path);
#line 44 "../lib/Services/Utils.vala"
	result = _tmp6_;
#line 44 "../lib/Services/Utils.vala"
	_g_settings_schema_unref0 (schema);
#line 44 "../lib/Services/Utils.vala"
	return result;
#line 121 "Utils.c"
}

/**
 * Tries to create a new {@link GLib.Settings} object with a given schema and path.
 *
 * If path is NULL then the path from the schema is used. It is an error if
 * path is NULL and the schema has no path of its own or if path is non-NULL
 * and not equal to the path that the schema does have.
 *
 * @param schema_id a schema ID
 * @param path the path to use
 * @return a new GLib.Settings object or NULL
 */
GSettings*
plank_try_create_settings (const gchar* schema_id,
                           const gchar* path)
{
	GSettingsSchema* schema = NULL;
	GSettingsSchemaSource* _tmp0_;
	GSettingsSchema* _tmp1_;
	GSettingsSchema* _tmp2_;
	GSettingsSchema* _tmp3_;
	GSettings* _tmp4_;
	GSettings* result = NULL;
#line 58 "../lib/Services/Utils.vala"
	g_return_val_if_fail (schema_id != NULL, NULL);
#line 60 "../lib/Services/Utils.vala"
	_tmp0_ = g_settings_schema_source_get_default ();
#line 60 "../lib/Services/Utils.vala"
	_tmp1_ = g_settings_schema_source_lookup (_tmp0_, schema_id, TRUE);
#line 60 "../lib/Services/Utils.vala"
	schema = _tmp1_;
#line 61 "../lib/Services/Utils.vala"
	_tmp2_ = schema;
#line 61 "../lib/Services/Utils.vala"
	if (_tmp2_ == NULL) {
#line 62 "../lib/Services/Utils.vala"
		g_warning ("Utils.vala:62: GSettingsSchema '%s' not found", schema_id);
#line 63 "../lib/Services/Utils.vala"
		result = NULL;
#line 63 "../lib/Services/Utils.vala"
		_g_settings_schema_unref0 (schema);
#line 63 "../lib/Services/Utils.vala"
		return result;
#line 166 "Utils.c"
	}
#line 66 "../lib/Services/Utils.vala"
	_tmp3_ = schema;
#line 66 "../lib/Services/Utils.vala"
	_tmp4_ = g_settings_new_full (_tmp3_, NULL, path);
#line 66 "../lib/Services/Utils.vala"
	result = _tmp4_;
#line 66 "../lib/Services/Utils.vala"
	_g_settings_schema_unref0 (schema);
#line 66 "../lib/Services/Utils.vala"
	return result;
#line 178 "Utils.c"
}

/**
 * Generates an array containing all combinations of a splitted strings parts
 * while preserving the given order of them.
 *
 * @param s a string
 * @param delimiter a delimiter string
 * @return an array of concated strings
 */
gchar**
plank_string_split_combine (const gchar* s,
                            const gchar* delimiter,
                            gint* result_length1)
{
	gchar** parts = NULL;
	gchar** _tmp0_;
	gchar** _tmp1_;
	gint parts_length1;
	gint _parts_size_;
	gint count = 0;
	gchar** _tmp2_;
	gint _tmp2__length1;
	gchar** _result_ = NULL;
	gchar** _tmp3_;
	gint _result__length1;
	gint __result__size_;
	gint pos = 0;
	gchar** _tmp10_;
	gint _tmp10__length1;
	gchar** result = NULL;
#line 77 "../lib/Services/Utils.vala"
	g_return_val_if_fail (s != NULL, NULL);
#line 77 "../lib/Services/Utils.vala"
	g_return_val_if_fail (delimiter != NULL, NULL);
#line 79 "../lib/Services/Utils.vala"
	_tmp1_ = _tmp0_ = g_strsplit (s, delimiter, 0);
#line 79 "../lib/Services/Utils.vala"
	parts = _tmp1_;
#line 79 "../lib/Services/Utils.vala"
	parts_length1 = _vala_array_length (_tmp0_);
#line 79 "../lib/Services/Utils.vala"
	_parts_size_ = parts_length1;
#line 80 "../lib/Services/Utils.vala"
	_tmp2_ = parts;
#line 80 "../lib/Services/Utils.vala"
	_tmp2__length1 = parts_length1;
#line 80 "../lib/Services/Utils.vala"
	count = _tmp2__length1;
#line 81 "../lib/Services/Utils.vala"
	_tmp3_ = g_new0 (gchar*, ((count * (count + 1)) / 2) + 1);
#line 81 "../lib/Services/Utils.vala"
	_result_ = _tmp3_;
#line 81 "../lib/Services/Utils.vala"
	_result__length1 = (count * (count + 1)) / 2;
#line 81 "../lib/Services/Utils.vala"
	__result__size_ = _result__length1;
#line 84 "../lib/Services/Utils.vala"
	pos = 0;
#line 238 "Utils.c"
	{
		gint i = 0;
#line 85 "../lib/Services/Utils.vala"
		i = 0;
#line 243 "Utils.c"
		{
			gboolean _tmp4_ = FALSE;
#line 85 "../lib/Services/Utils.vala"
			_tmp4_ = TRUE;
#line 85 "../lib/Services/Utils.vala"
			while (TRUE) {
#line 250 "Utils.c"
				gchar** _tmp6_;
				gint _tmp6__length1;
				gchar** _tmp7_;
				gint _tmp7__length1;
				const gchar* _tmp8_;
				gchar* _tmp9_;
#line 85 "../lib/Services/Utils.vala"
				if (!_tmp4_) {
#line 259 "Utils.c"
					gint _tmp5_;
#line 85 "../lib/Services/Utils.vala"
					_tmp5_ = i;
#line 85 "../lib/Services/Utils.vala"
					i = _tmp5_ + 1;
#line 265 "Utils.c"
				}
#line 85 "../lib/Services/Utils.vala"
				_tmp4_ = FALSE;
#line 85 "../lib/Services/Utils.vala"
				if (!(i < count)) {
#line 85 "../lib/Services/Utils.vala"
					break;
#line 273 "Utils.c"
				}
#line 86 "../lib/Services/Utils.vala"
				_tmp6_ = _result_;
#line 86 "../lib/Services/Utils.vala"
				_tmp6__length1 = _result__length1;
#line 86 "../lib/Services/Utils.vala"
				_tmp7_ = parts;
#line 86 "../lib/Services/Utils.vala"
				_tmp7__length1 = parts_length1;
#line 86 "../lib/Services/Utils.vala"
				_tmp8_ = _tmp7_[i];
#line 86 "../lib/Services/Utils.vala"
				_tmp9_ = g_strdup (_tmp8_);
#line 86 "../lib/Services/Utils.vala"
				_g_free0 (_tmp6_[pos]);
#line 86 "../lib/Services/Utils.vala"
				_tmp6_[pos] = _tmp9_;
#line 87 "../lib/Services/Utils.vala"
				pos += count - i;
#line 293 "Utils.c"
			}
		}
	}
#line 91 "../lib/Services/Utils.vala"
	plank_combine_strings (&_result_, (gint*) (&_result__length1), delimiter, 0, count);
#line 91 "../lib/Services/Utils.vala"
	__result__size_ = _result__length1;
#line 93 "../lib/Services/Utils.vala"
	_tmp10_ = _result_;
#line 93 "../lib/Services/Utils.vala"
	_tmp10__length1 = _result__length1;
#line 93 "../lib/Services/Utils.vala"
	if (result_length1) {
#line 93 "../lib/Services/Utils.vala"
		*result_length1 = _tmp10__length1;
#line 309 "Utils.c"
	}
#line 93 "../lib/Services/Utils.vala"
	result = _tmp10_;
#line 93 "../lib/Services/Utils.vala"
	parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
#line 93 "../lib/Services/Utils.vala"
	return result;
#line 317 "Utils.c"
}

G_GNUC_INTERNAL void
plank_combine_strings (gchar*** _result_,
                       gint* _result__length1,
                       const gchar* delimiter,
                       gint n,
                       gint i)
{
	gint pos = 0;
#line 96 "../lib/Services/Utils.vala"
	g_return_if_fail (delimiter != NULL);
#line 98 "../lib/Services/Utils.vala"
	if (i <= 1) {
#line 99 "../lib/Services/Utils.vala"
		return;
#line 334 "Utils.c"
	}
#line 101 "../lib/Services/Utils.vala"
	pos = n;
#line 338 "Utils.c"
	{
		gint j = 0;
#line 102 "../lib/Services/Utils.vala"
		j = 0;
#line 343 "Utils.c"
		{
			gboolean _tmp0_ = FALSE;
#line 102 "../lib/Services/Utils.vala"
			_tmp0_ = TRUE;
#line 102 "../lib/Services/Utils.vala"
			while (TRUE) {
#line 350 "Utils.c"
				const gchar* _tmp2_;
				const gchar* _tmp3_;
				gchar* _tmp4_;
#line 102 "../lib/Services/Utils.vala"
				if (!_tmp0_) {
#line 356 "Utils.c"
					gint _tmp1_;
#line 102 "../lib/Services/Utils.vala"
					_tmp1_ = j;
#line 102 "../lib/Services/Utils.vala"
					j = _tmp1_ + 1;
#line 362 "Utils.c"
				}
#line 102 "../lib/Services/Utils.vala"
				_tmp0_ = FALSE;
#line 102 "../lib/Services/Utils.vala"
				if (!(j < (i - 1))) {
#line 102 "../lib/Services/Utils.vala"
					break;
#line 370 "Utils.c"
				}
#line 103 "../lib/Services/Utils.vala"
				pos += i - j;
#line 104 "../lib/Services/Utils.vala"
				_tmp2_ = (*_result_)[n + j];
#line 104 "../lib/Services/Utils.vala"
				_tmp3_ = (*_result_)[pos];
#line 104 "../lib/Services/Utils.vala"
				_tmp4_ = g_strdup_printf ("%s%s%s", _tmp2_, delimiter, _tmp3_);
#line 104 "../lib/Services/Utils.vala"
				_g_free0 ((*_result_)[(n + j) + 1]);
#line 104 "../lib/Services/Utils.vala"
				(*_result_)[(n + j) + 1] = _tmp4_;
#line 384 "Utils.c"
			}
		}
	}
#line 107 "../lib/Services/Utils.vala"
	plank_combine_strings (_result_, (gint*) (_result__length1), delimiter, n + i, i - 1);
#line 390 "Utils.c"
}

/**
 * Whether the given file looks like a valid .dockitem file
 */
inline gboolean
plank_file_is_dockitem (GFile* file)
{
	GError* _inner_error0_ = NULL;
	gboolean result = FALSE;
#line 113 "../lib/Services/Utils.vala"
	g_return_val_if_fail (file != NULL, FALSE);
#line 403 "Utils.c"
	{
		GFileInfo* info = NULL;
		GFileInfo* _tmp0_;
		gboolean _tmp1_ = FALSE;
#line 116 "../lib/Services/Utils.vala"
		_tmp0_ = g_file_query_info (file, G_FILE_ATTRIBUTE_STANDARD_NAME "," G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN, 0, NULL, &_inner_error0_);
#line 116 "../lib/Services/Utils.vala"
		info = _tmp0_;
#line 116 "../lib/Services/Utils.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 414 "Utils.c"
			goto __catch0_g_error;
		}
#line 117 "../lib/Services/Utils.vala"
		if (!g_file_info_get_is_hidden (info)) {
#line 419 "Utils.c"
			const gchar* _tmp2_;
#line 117 "../lib/Services/Utils.vala"
			_tmp2_ = g_file_info_get_name (info);
#line 117 "../lib/Services/Utils.vala"
			_tmp1_ = g_str_has_suffix (_tmp2_, ".dockitem");
#line 425 "Utils.c"
		} else {
#line 117 "../lib/Services/Utils.vala"
			_tmp1_ = FALSE;
#line 429 "Utils.c"
		}
#line 117 "../lib/Services/Utils.vala"
		result = _tmp1_;
#line 117 "../lib/Services/Utils.vala"
		_g_object_unref0 (info);
#line 117 "../lib/Services/Utils.vala"
		return result;
#line 437 "Utils.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp3_;
		const gchar* _tmp4_;
#line 115 "../lib/Services/Utils.vala"
		e = _inner_error0_;
#line 115 "../lib/Services/Utils.vala"
		_inner_error0_ = NULL;
#line 119 "../lib/Services/Utils.vala"
		_tmp3_ = e;
#line 119 "../lib/Services/Utils.vala"
		_tmp4_ = _tmp3_->message;
#line 119 "../lib/Services/Utils.vala"
		g_warning ("Utils.vala:119: %s", _tmp4_);
#line 115 "../lib/Services/Utils.vala"
		_g_error_free0 (e);
#line 457 "Utils.c"
	}
	__finally0:
#line 115 "../lib/Services/Utils.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 462 "Utils.c"
		gboolean _tmp5_ = FALSE;
#line 115 "../lib/Services/Utils.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 115 "../lib/Services/Utils.vala"
		g_clear_error (&_inner_error0_);
#line 115 "../lib/Services/Utils.vala"
		return _tmp5_;
#line 470 "Utils.c"
	}
#line 122 "../lib/Services/Utils.vala"
	result = FALSE;
#line 122 "../lib/Services/Utils.vala"
	return result;
#line 476 "Utils.c"
}

inline gdouble
plank_nround (gdouble d,
              guint n)
{
	gdouble _result_ = 0.0;
	gdouble result = 0.0;
#line 129 "../lib/Services/Utils.vala"
	if (n > 0U) {
#line 487 "Utils.c"
		gdouble fac = 0.0;
#line 130 "../lib/Services/Utils.vala"
		fac = pow (10.0, (gdouble) n);
#line 131 "../lib/Services/Utils.vala"
		_result_ = round (d * fac) / fac;
#line 493 "Utils.c"
	} else {
#line 133 "../lib/Services/Utils.vala"
		_result_ = round (d);
#line 497 "Utils.c"
	}
#line 136 "../lib/Services/Utils.vala"
	result = _result_;
#line 136 "../lib/Services/Utils.vala"
	return result;
#line 503 "Utils.c"
}

static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gint i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}

static gint
_vala_array_length (gpointer array)
{
	gint length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}

