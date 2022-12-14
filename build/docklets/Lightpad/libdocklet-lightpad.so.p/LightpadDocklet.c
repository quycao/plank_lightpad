/* LightpadDocklet.c generated by valac 0.48.17, the Vala compiler
 * generated from LightpadDocklet.vala, do not modify */

#include "plank.h"
#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>

#define DOCKY_TYPE_LIGHTPAD_DOCKLET (docky_lightpad_docklet_get_type ())
#define DOCKY_LIGHTPAD_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_LIGHTPAD_DOCKLET, DockyLightpadDocklet))
#define DOCKY_LIGHTPAD_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_LIGHTPAD_DOCKLET, DockyLightpadDockletClass))
#define DOCKY_IS_LIGHTPAD_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_LIGHTPAD_DOCKLET))
#define DOCKY_IS_LIGHTPAD_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_LIGHTPAD_DOCKLET))
#define DOCKY_LIGHTPAD_DOCKLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_LIGHTPAD_DOCKLET, DockyLightpadDockletClass))

typedef struct _DockyLightpadDocklet DockyLightpadDocklet;
typedef struct _DockyLightpadDockletClass DockyLightpadDockletClass;
typedef struct _DockyLightpadDockletPrivate DockyLightpadDockletPrivate;
enum  {
	DOCKY_LIGHTPAD_DOCKLET_0_PROPERTY,
	DOCKY_LIGHTPAD_DOCKLET_NUM_PROPERTIES
};
static GParamSpec* docky_lightpad_docklet_properties[DOCKY_LIGHTPAD_DOCKLET_NUM_PROPERTIES];

#define DOCKY_TYPE_LIGHTPAD_DOCK_ITEM (docky_lightpad_dock_item_get_type ())
#define DOCKY_LIGHTPAD_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_LIGHTPAD_DOCK_ITEM, DockyLightpadDockItem))
#define DOCKY_LIGHTPAD_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_LIGHTPAD_DOCK_ITEM, DockyLightpadDockItemClass))
#define DOCKY_IS_LIGHTPAD_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_LIGHTPAD_DOCK_ITEM))
#define DOCKY_IS_LIGHTPAD_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_LIGHTPAD_DOCK_ITEM))
#define DOCKY_LIGHTPAD_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_LIGHTPAD_DOCK_ITEM, DockyLightpadDockItemClass))

typedef struct _DockyLightpadDockItem DockyLightpadDockItem;
typedef struct _DockyLightpadDockItemClass DockyLightpadDockItemClass;

struct _DockyLightpadDocklet {
	GObject parent_instance;
	DockyLightpadDockletPrivate * priv;
};

struct _DockyLightpadDockletClass {
	GObjectClass parent_class;
};

static gpointer docky_lightpad_docklet_parent_class = NULL;
static PlankDockletIface * docky_lightpad_docklet_plank_docklet_parent_iface = NULL;

void docklet_init (PlankDockletManager* manager);
GType docky_lightpad_docklet_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyLightpadDocklet, g_object_unref)
#define DOCKY_G_RESOURCE_PATH "/net/launchpad/plank/docklets/lightpad"
static const gchar* docky_lightpad_docklet_real_get_id (PlankDocklet* base);
static const gchar* docky_lightpad_docklet_real_get_name (PlankDocklet* base);
static const gchar* docky_lightpad_docklet_real_get_description (PlankDocklet* base);
static const gchar* docky_lightpad_docklet_real_get_icon (PlankDocklet* base);
static gboolean docky_lightpad_docklet_real_is_supported (PlankDocklet* base);
static PlankDockElement* docky_lightpad_docklet_real_make_element (PlankDocklet* base,
                                                            const gchar* launcher,
                                                            GFile* file);
DockyLightpadDockItem* docky_lightpad_dock_item_new_with_dockitem_file (GFile* file);
DockyLightpadDockItem* docky_lightpad_dock_item_construct_with_dockitem_file (GType object_type,
                                                                              GFile* file);
GType docky_lightpad_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyLightpadDockItem, g_object_unref)
DockyLightpadDocklet* docky_lightpad_docklet_new (void);
DockyLightpadDocklet* docky_lightpad_docklet_construct (GType object_type);
static GType docky_lightpad_docklet_get_type_once (void);

void
docklet_init (PlankDockletManager* manager)
{
#line 1 "../docklets/Lightpad/LightpadDocklet.vala"
	g_return_if_fail (manager != NULL);
#line 3 "../docklets/Lightpad/LightpadDocklet.vala"
	plank_docklet_manager_register_docklet (manager, DOCKY_TYPE_LIGHTPAD_DOCKLET);
#line 79 "LightpadDocklet.c"
}

static const gchar*
docky_lightpad_docklet_real_get_id (PlankDocklet* base)
{
	DockyLightpadDocklet * self;
	const gchar* result = NULL;
#line 12 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 14 "../docklets/Lightpad/LightpadDocklet.vala"
	result = "lightpad";
#line 14 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 93 "LightpadDocklet.c"
}

static const gchar*
docky_lightpad_docklet_real_get_name (PlankDocklet* base)
{
	DockyLightpadDocklet * self;
	const gchar* result = NULL;
#line 17 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 19 "../docklets/Lightpad/LightpadDocklet.vala"
	result = _ ("Lightpad");
#line 19 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 107 "LightpadDocklet.c"
}

static const gchar*
docky_lightpad_docklet_real_get_description (PlankDocklet* base)
{
	DockyLightpadDocklet * self;
	const gchar* result = NULL;
#line 22 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 24 "../docklets/Lightpad/LightpadDocklet.vala"
	result = _ ("Applications Launcher.");
#line 24 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 121 "LightpadDocklet.c"
}

static const gchar*
docky_lightpad_docklet_real_get_icon (PlankDocklet* base)
{
	DockyLightpadDocklet * self;
	const gchar* result = NULL;
#line 27 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 29 "../docklets/Lightpad/LightpadDocklet.vala"
	result = "lightpad;;resource://" DOCKY_G_RESOURCE_PATH "/data/icons/24/lightpad.svg";
#line 29 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 135 "LightpadDocklet.c"
}

static gboolean
docky_lightpad_docklet_real_is_supported (PlankDocklet* base)
{
	DockyLightpadDocklet * self;
	gboolean result = FALSE;
#line 33 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 35 "../docklets/Lightpad/LightpadDocklet.vala"
	result = TRUE;
#line 35 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 149 "LightpadDocklet.c"
}

static PlankDockElement*
docky_lightpad_docklet_real_make_element (PlankDocklet* base,
                                          const gchar* launcher,
                                          GFile* file)
{
	DockyLightpadDocklet * self;
	DockyLightpadDockItem* _tmp0_;
	PlankDockElement* result = NULL;
#line 38 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) base;
#line 38 "../docklets/Lightpad/LightpadDocklet.vala"
	g_return_val_if_fail (launcher != NULL, NULL);
#line 38 "../docklets/Lightpad/LightpadDocklet.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 40 "../docklets/Lightpad/LightpadDocklet.vala"
	_tmp0_ = docky_lightpad_dock_item_new_with_dockitem_file (file);
#line 40 "../docklets/Lightpad/LightpadDocklet.vala"
	result = (PlankDockElement*) _tmp0_;
#line 40 "../docklets/Lightpad/LightpadDocklet.vala"
	return result;
#line 172 "LightpadDocklet.c"
}

DockyLightpadDocklet*
docky_lightpad_docklet_construct (GType object_type)
{
	DockyLightpadDocklet * self = NULL;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	self = (DockyLightpadDocklet*) g_object_new (object_type, NULL);
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	return self;
#line 183 "LightpadDocklet.c"
}

DockyLightpadDocklet*
docky_lightpad_docklet_new (void)
{
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	return docky_lightpad_docklet_construct (DOCKY_TYPE_LIGHTPAD_DOCKLET);
#line 191 "LightpadDocklet.c"
}

static void
docky_lightpad_docklet_class_init (DockyLightpadDockletClass * klass,
                                   gpointer klass_data)
{
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	docky_lightpad_docklet_parent_class = g_type_class_peek_parent (klass);
#line 200 "LightpadDocklet.c"
}

static void
docky_lightpad_docklet_plank_docklet_interface_init (PlankDockletIface * iface,
                                                     gpointer iface_data)
{
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	docky_lightpad_docklet_plank_docklet_parent_iface = g_type_interface_peek_parent (iface);
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->get_id = (const gchar* (*) (PlankDocklet*)) docky_lightpad_docklet_real_get_id;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->get_name = (const gchar* (*) (PlankDocklet*)) docky_lightpad_docklet_real_get_name;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->get_description = (const gchar* (*) (PlankDocklet*)) docky_lightpad_docklet_real_get_description;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->get_icon = (const gchar* (*) (PlankDocklet*)) docky_lightpad_docklet_real_get_icon;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->is_supported = (gboolean (*) (PlankDocklet*)) docky_lightpad_docklet_real_is_supported;
#line 10 "../docklets/Lightpad/LightpadDocklet.vala"
	iface->make_element = (PlankDockElement* (*) (PlankDocklet*, const gchar*, GFile*)) docky_lightpad_docklet_real_make_element;
#line 221 "LightpadDocklet.c"
}

static void
docky_lightpad_docklet_instance_init (DockyLightpadDocklet * self,
                                      gpointer klass)
{
}

static GType
docky_lightpad_docklet_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DockyLightpadDockletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) docky_lightpad_docklet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DockyLightpadDocklet), 0, (GInstanceInitFunc) docky_lightpad_docklet_instance_init, NULL };
	static const GInterfaceInfo plank_docklet_info = { (GInterfaceInitFunc) docky_lightpad_docklet_plank_docklet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType docky_lightpad_docklet_type_id;
	docky_lightpad_docklet_type_id = g_type_register_static (G_TYPE_OBJECT, "DockyLightpadDocklet", &g_define_type_info, 0);
	g_type_add_interface_static (docky_lightpad_docklet_type_id, PLANK_TYPE_DOCKLET, &plank_docklet_info);
	return docky_lightpad_docklet_type_id;
}

GType
docky_lightpad_docklet_get_type (void)
{
	static volatile gsize docky_lightpad_docklet_type_id__volatile = 0;
	if (g_once_init_enter (&docky_lightpad_docklet_type_id__volatile)) {
		GType docky_lightpad_docklet_type_id;
		docky_lightpad_docklet_type_id = docky_lightpad_docklet_get_type_once ();
		g_once_init_leave (&docky_lightpad_docklet_type_id__volatile, docky_lightpad_docklet_type_id);
	}
	return docky_lightpad_docklet_type_id__volatile;
}

