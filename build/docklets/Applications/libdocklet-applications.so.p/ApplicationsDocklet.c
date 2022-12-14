/* ApplicationsDocklet.c generated by valac 0.48.17, the Vala compiler
 * generated from ApplicationsDocklet.vala, do not modify */

/**/
/*  Copyright (C) 2017 Rico Tzschichholz*/
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

#include "plank.h"
#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>

#define DOCKY_TYPE_APPLICATIONS_DOCKLET (docky_applications_docklet_get_type ())
#define DOCKY_APPLICATIONS_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_APPLICATIONS_DOCKLET, DockyApplicationsDocklet))
#define DOCKY_APPLICATIONS_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_APPLICATIONS_DOCKLET, DockyApplicationsDockletClass))
#define DOCKY_IS_APPLICATIONS_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_APPLICATIONS_DOCKLET))
#define DOCKY_IS_APPLICATIONS_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_APPLICATIONS_DOCKLET))
#define DOCKY_APPLICATIONS_DOCKLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_APPLICATIONS_DOCKLET, DockyApplicationsDockletClass))

typedef struct _DockyApplicationsDocklet DockyApplicationsDocklet;
typedef struct _DockyApplicationsDockletClass DockyApplicationsDockletClass;
typedef struct _DockyApplicationsDockletPrivate DockyApplicationsDockletPrivate;
enum  {
	DOCKY_APPLICATIONS_DOCKLET_0_PROPERTY,
	DOCKY_APPLICATIONS_DOCKLET_NUM_PROPERTIES
};
static GParamSpec* docky_applications_docklet_properties[DOCKY_APPLICATIONS_DOCKLET_NUM_PROPERTIES];

#define DOCKY_TYPE_APPLICATIONS_DOCK_ITEM (docky_applications_dock_item_get_type ())
#define DOCKY_APPLICATIONS_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_APPLICATIONS_DOCK_ITEM, DockyApplicationsDockItem))
#define DOCKY_APPLICATIONS_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_APPLICATIONS_DOCK_ITEM, DockyApplicationsDockItemClass))
#define DOCKY_IS_APPLICATIONS_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_APPLICATIONS_DOCK_ITEM))
#define DOCKY_IS_APPLICATIONS_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_APPLICATIONS_DOCK_ITEM))
#define DOCKY_APPLICATIONS_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_APPLICATIONS_DOCK_ITEM, DockyApplicationsDockItemClass))

typedef struct _DockyApplicationsDockItem DockyApplicationsDockItem;
typedef struct _DockyApplicationsDockItemClass DockyApplicationsDockItemClass;

struct _DockyApplicationsDocklet {
	GObject parent_instance;
	DockyApplicationsDockletPrivate * priv;
};

struct _DockyApplicationsDockletClass {
	GObjectClass parent_class;
};

static gpointer docky_applications_docklet_parent_class = NULL;
static PlankDockletIface * docky_applications_docklet_plank_docklet_parent_iface = NULL;

void docklet_init (PlankDockletManager* manager);
GType docky_applications_docklet_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyApplicationsDocklet, g_object_unref)
static const gchar* docky_applications_docklet_real_get_id (PlankDocklet* base);
static const gchar* docky_applications_docklet_real_get_name (PlankDocklet* base);
static const gchar* docky_applications_docklet_real_get_description (PlankDocklet* base);
static const gchar* docky_applications_docklet_real_get_icon (PlankDocklet* base);
static gboolean docky_applications_docklet_real_is_supported (PlankDocklet* base);
static PlankDockElement* docky_applications_docklet_real_make_element (PlankDocklet* base,
                                                                const gchar* launcher,
                                                                GFile* file);
DockyApplicationsDockItem* docky_applications_dock_item_new_with_dockitem_file (GFile* file);
DockyApplicationsDockItem* docky_applications_dock_item_construct_with_dockitem_file (GType object_type,
                                                                                      GFile* file);
GType docky_applications_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyApplicationsDockItem, g_object_unref)
DockyApplicationsDocklet* docky_applications_docklet_new (void);
DockyApplicationsDocklet* docky_applications_docklet_construct (GType object_type);
static GType docky_applications_docklet_get_type_once (void);

void
docklet_init (PlankDockletManager* manager)
{
#line 18 "../docklets/Applications/ApplicationsDocklet.vala"
	g_return_if_fail (manager != NULL);
#line 20 "../docklets/Applications/ApplicationsDocklet.vala"
	plank_docklet_manager_register_docklet (manager, DOCKY_TYPE_APPLICATIONS_DOCKLET);
#line 95 "ApplicationsDocklet.c"
}

static const gchar*
docky_applications_docklet_real_get_id (PlankDocklet* base)
{
	DockyApplicationsDocklet * self;
	const gchar* result = NULL;
#line 27 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 29 "../docklets/Applications/ApplicationsDocklet.vala"
	result = "applications";
#line 29 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 109 "ApplicationsDocklet.c"
}

static const gchar*
docky_applications_docklet_real_get_name (PlankDocklet* base)
{
	DockyApplicationsDocklet * self;
	const gchar* result = NULL;
#line 32 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 34 "../docklets/Applications/ApplicationsDocklet.vala"
	result = _ ("Applications");
#line 34 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 123 "ApplicationsDocklet.c"
}

static const gchar*
docky_applications_docklet_real_get_description (PlankDocklet* base)
{
	DockyApplicationsDocklet * self;
	const gchar* result = NULL;
#line 37 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 39 "../docklets/Applications/ApplicationsDocklet.vala"
	result = "Simply start any of your applications.";
#line 39 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 137 "ApplicationsDocklet.c"
}

static const gchar*
docky_applications_docklet_real_get_icon (PlankDocklet* base)
{
	DockyApplicationsDocklet * self;
	const gchar* result = NULL;
#line 42 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 44 "../docklets/Applications/ApplicationsDocklet.vala"
	result = "gnome-applications;;gnome-main-menu";
#line 44 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 151 "ApplicationsDocklet.c"
}

static gboolean
docky_applications_docklet_real_is_supported (PlankDocklet* base)
{
	DockyApplicationsDocklet * self;
	gboolean result = FALSE;
#line 47 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 49 "../docklets/Applications/ApplicationsDocklet.vala"
	result = TRUE;
#line 49 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 165 "ApplicationsDocklet.c"
}

static PlankDockElement*
docky_applications_docklet_real_make_element (PlankDocklet* base,
                                              const gchar* launcher,
                                              GFile* file)
{
	DockyApplicationsDocklet * self;
	DockyApplicationsDockItem* _tmp0_;
	PlankDockElement* result = NULL;
#line 52 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) base;
#line 52 "../docklets/Applications/ApplicationsDocklet.vala"
	g_return_val_if_fail (launcher != NULL, NULL);
#line 52 "../docklets/Applications/ApplicationsDocklet.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 54 "../docklets/Applications/ApplicationsDocklet.vala"
	_tmp0_ = docky_applications_dock_item_new_with_dockitem_file (file);
#line 54 "../docklets/Applications/ApplicationsDocklet.vala"
	result = (PlankDockElement*) _tmp0_;
#line 54 "../docklets/Applications/ApplicationsDocklet.vala"
	return result;
#line 188 "ApplicationsDocklet.c"
}

DockyApplicationsDocklet*
docky_applications_docklet_construct (GType object_type)
{
	DockyApplicationsDocklet * self = NULL;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	self = (DockyApplicationsDocklet*) g_object_new (object_type, NULL);
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	return self;
#line 199 "ApplicationsDocklet.c"
}

DockyApplicationsDocklet*
docky_applications_docklet_new (void)
{
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	return docky_applications_docklet_construct (DOCKY_TYPE_APPLICATIONS_DOCKLET);
#line 207 "ApplicationsDocklet.c"
}

static void
docky_applications_docklet_class_init (DockyApplicationsDockletClass * klass,
                                       gpointer klass_data)
{
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	docky_applications_docklet_parent_class = g_type_class_peek_parent (klass);
#line 216 "ApplicationsDocklet.c"
}

static void
docky_applications_docklet_plank_docklet_interface_init (PlankDockletIface * iface,
                                                         gpointer iface_data)
{
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	docky_applications_docklet_plank_docklet_parent_iface = g_type_interface_peek_parent (iface);
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->get_id = (const gchar* (*) (PlankDocklet*)) docky_applications_docklet_real_get_id;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->get_name = (const gchar* (*) (PlankDocklet*)) docky_applications_docklet_real_get_name;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->get_description = (const gchar* (*) (PlankDocklet*)) docky_applications_docklet_real_get_description;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->get_icon = (const gchar* (*) (PlankDocklet*)) docky_applications_docklet_real_get_icon;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->is_supported = (gboolean (*) (PlankDocklet*)) docky_applications_docklet_real_is_supported;
#line 25 "../docklets/Applications/ApplicationsDocklet.vala"
	iface->make_element = (PlankDockElement* (*) (PlankDocklet*, const gchar*, GFile*)) docky_applications_docklet_real_make_element;
#line 237 "ApplicationsDocklet.c"
}

static void
docky_applications_docklet_instance_init (DockyApplicationsDocklet * self,
                                          gpointer klass)
{
}

static GType
docky_applications_docklet_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DockyApplicationsDockletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) docky_applications_docklet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DockyApplicationsDocklet), 0, (GInstanceInitFunc) docky_applications_docklet_instance_init, NULL };
	static const GInterfaceInfo plank_docklet_info = { (GInterfaceInitFunc) docky_applications_docklet_plank_docklet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType docky_applications_docklet_type_id;
	docky_applications_docklet_type_id = g_type_register_static (G_TYPE_OBJECT, "DockyApplicationsDocklet", &g_define_type_info, 0);
	g_type_add_interface_static (docky_applications_docklet_type_id, PLANK_TYPE_DOCKLET, &plank_docklet_info);
	return docky_applications_docklet_type_id;
}

GType
docky_applications_docklet_get_type (void)
{
	static volatile gsize docky_applications_docklet_type_id__volatile = 0;
	if (g_once_init_enter (&docky_applications_docklet_type_id__volatile)) {
		GType docky_applications_docklet_type_id;
		docky_applications_docklet_type_id = docky_applications_docklet_get_type_once ();
		g_once_init_leave (&docky_applications_docklet_type_id__volatile, docky_applications_docklet_type_id);
	}
	return docky_applications_docklet_type_id__volatile;
}

