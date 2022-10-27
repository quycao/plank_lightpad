/* ClockDocklet.c generated by valac 0.48.17, the Vala compiler
 * generated from ClockDocklet.vala, do not modify */

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
#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>

#define DOCKY_TYPE_CLOCK_DOCKLET (docky_clock_docklet_get_type ())
#define DOCKY_CLOCK_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_CLOCK_DOCKLET, DockyClockDocklet))
#define DOCKY_CLOCK_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_CLOCK_DOCKLET, DockyClockDockletClass))
#define DOCKY_IS_CLOCK_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_CLOCK_DOCKLET))
#define DOCKY_IS_CLOCK_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_CLOCK_DOCKLET))
#define DOCKY_CLOCK_DOCKLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_CLOCK_DOCKLET, DockyClockDockletClass))

typedef struct _DockyClockDocklet DockyClockDocklet;
typedef struct _DockyClockDockletClass DockyClockDockletClass;
typedef struct _DockyClockDockletPrivate DockyClockDockletPrivate;
enum  {
	DOCKY_CLOCK_DOCKLET_0_PROPERTY,
	DOCKY_CLOCK_DOCKLET_NUM_PROPERTIES
};
static GParamSpec* docky_clock_docklet_properties[DOCKY_CLOCK_DOCKLET_NUM_PROPERTIES];

#define DOCKY_TYPE_CLOCK_DOCK_ITEM (docky_clock_dock_item_get_type ())
#define DOCKY_CLOCK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_CLOCK_DOCK_ITEM, DockyClockDockItem))
#define DOCKY_CLOCK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_CLOCK_DOCK_ITEM, DockyClockDockItemClass))
#define DOCKY_IS_CLOCK_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_CLOCK_DOCK_ITEM))
#define DOCKY_IS_CLOCK_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_CLOCK_DOCK_ITEM))
#define DOCKY_CLOCK_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_CLOCK_DOCK_ITEM, DockyClockDockItemClass))

typedef struct _DockyClockDockItem DockyClockDockItem;
typedef struct _DockyClockDockItemClass DockyClockDockItemClass;

struct _DockyClockDocklet {
	GObject parent_instance;
	DockyClockDockletPrivate * priv;
};

struct _DockyClockDockletClass {
	GObjectClass parent_class;
};

static gpointer docky_clock_docklet_parent_class = NULL;
static PlankDockletIface * docky_clock_docklet_plank_docklet_parent_iface = NULL;

void docklet_init (PlankDockletManager* manager);
GType docky_clock_docklet_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyClockDocklet, g_object_unref)
#define DOCKY_G_RESOURCE_PATH "/net/launchpad/plank/docklets/clock"
static const gchar* docky_clock_docklet_real_get_id (PlankDocklet* base);
static const gchar* docky_clock_docklet_real_get_name (PlankDocklet* base);
static const gchar* docky_clock_docklet_real_get_description (PlankDocklet* base);
static const gchar* docky_clock_docklet_real_get_icon (PlankDocklet* base);
static gboolean docky_clock_docklet_real_is_supported (PlankDocklet* base);
static PlankDockElement* docky_clock_docklet_real_make_element (PlankDocklet* base,
                                                         const gchar* launcher,
                                                         GFile* file);
DockyClockDockItem* docky_clock_dock_item_new_with_dockitem_file (GFile* file);
DockyClockDockItem* docky_clock_dock_item_construct_with_dockitem_file (GType object_type,
                                                                        GFile* file);
GType docky_clock_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyClockDockItem, g_object_unref)
DockyClockDocklet* docky_clock_docklet_new (void);
DockyClockDocklet* docky_clock_docklet_construct (GType object_type);
static GType docky_clock_docklet_get_type_once (void);

void
docklet_init (PlankDockletManager* manager)
{
#line 20 "../docklets/Clock/ClockDocklet.vala"
	g_return_if_fail (manager != NULL);
#line 22 "../docklets/Clock/ClockDocklet.vala"
	plank_docklet_manager_register_docklet (manager, DOCKY_TYPE_CLOCK_DOCKLET);
#line 98 "ClockDocklet.c"
}

static const gchar*
docky_clock_docklet_real_get_id (PlankDocklet* base)
{
	DockyClockDocklet * self;
	const gchar* result = NULL;
#line 31 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 33 "../docklets/Clock/ClockDocklet.vala"
	result = "clock";
#line 33 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 112 "ClockDocklet.c"
}

static const gchar*
docky_clock_docklet_real_get_name (PlankDocklet* base)
{
	DockyClockDocklet * self;
	const gchar* result = NULL;
#line 36 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 38 "../docklets/Clock/ClockDocklet.vala"
	result = _ ("Clock");
#line 38 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 126 "ClockDocklet.c"
}

static const gchar*
docky_clock_docklet_real_get_description (PlankDocklet* base)
{
	DockyClockDocklet * self;
	const gchar* result = NULL;
#line 41 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 43 "../docklets/Clock/ClockDocklet.vala"
	result = _ ("What time is it?");
#line 43 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 140 "ClockDocklet.c"
}

static const gchar*
docky_clock_docklet_real_get_icon (PlankDocklet* base)
{
	DockyClockDocklet * self;
	const gchar* result = NULL;
#line 46 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 48 "../docklets/Clock/ClockDocklet.vala"
	result = "application-x-addon";
#line 48 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 154 "ClockDocklet.c"
}

static gboolean
docky_clock_docklet_real_is_supported (PlankDocklet* base)
{
	DockyClockDocklet * self;
	gboolean result = FALSE;
#line 51 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 53 "../docklets/Clock/ClockDocklet.vala"
	result = TRUE;
#line 53 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 168 "ClockDocklet.c"
}

static PlankDockElement*
docky_clock_docklet_real_make_element (PlankDocklet* base,
                                       const gchar* launcher,
                                       GFile* file)
{
	DockyClockDocklet * self;
	DockyClockDockItem* _tmp0_;
	PlankDockElement* result = NULL;
#line 56 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) base;
#line 56 "../docklets/Clock/ClockDocklet.vala"
	g_return_val_if_fail (launcher != NULL, NULL);
#line 56 "../docklets/Clock/ClockDocklet.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 58 "../docklets/Clock/ClockDocklet.vala"
	_tmp0_ = docky_clock_dock_item_new_with_dockitem_file (file);
#line 58 "../docklets/Clock/ClockDocklet.vala"
	result = (PlankDockElement*) _tmp0_;
#line 58 "../docklets/Clock/ClockDocklet.vala"
	return result;
#line 191 "ClockDocklet.c"
}

DockyClockDocklet*
docky_clock_docklet_construct (GType object_type)
{
	DockyClockDocklet * self = NULL;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	self = (DockyClockDocklet*) g_object_new (object_type, NULL);
#line 29 "../docklets/Clock/ClockDocklet.vala"
	return self;
#line 202 "ClockDocklet.c"
}

DockyClockDocklet*
docky_clock_docklet_new (void)
{
#line 29 "../docklets/Clock/ClockDocklet.vala"
	return docky_clock_docklet_construct (DOCKY_TYPE_CLOCK_DOCKLET);
#line 210 "ClockDocklet.c"
}

static void
docky_clock_docklet_class_init (DockyClockDockletClass * klass,
                                gpointer klass_data)
{
#line 29 "../docklets/Clock/ClockDocklet.vala"
	docky_clock_docklet_parent_class = g_type_class_peek_parent (klass);
#line 219 "ClockDocklet.c"
}

static void
docky_clock_docklet_plank_docklet_interface_init (PlankDockletIface * iface,
                                                  gpointer iface_data)
{
#line 29 "../docklets/Clock/ClockDocklet.vala"
	docky_clock_docklet_plank_docklet_parent_iface = g_type_interface_peek_parent (iface);
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->get_id = (const gchar* (*) (PlankDocklet*)) docky_clock_docklet_real_get_id;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->get_name = (const gchar* (*) (PlankDocklet*)) docky_clock_docklet_real_get_name;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->get_description = (const gchar* (*) (PlankDocklet*)) docky_clock_docklet_real_get_description;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->get_icon = (const gchar* (*) (PlankDocklet*)) docky_clock_docklet_real_get_icon;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->is_supported = (gboolean (*) (PlankDocklet*)) docky_clock_docklet_real_is_supported;
#line 29 "../docklets/Clock/ClockDocklet.vala"
	iface->make_element = (PlankDockElement* (*) (PlankDocklet*, const gchar*, GFile*)) docky_clock_docklet_real_make_element;
#line 240 "ClockDocklet.c"
}

static void
docky_clock_docklet_instance_init (DockyClockDocklet * self,
                                   gpointer klass)
{
}

static GType
docky_clock_docklet_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DockyClockDockletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) docky_clock_docklet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DockyClockDocklet), 0, (GInstanceInitFunc) docky_clock_docklet_instance_init, NULL };
	static const GInterfaceInfo plank_docklet_info = { (GInterfaceInitFunc) docky_clock_docklet_plank_docklet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType docky_clock_docklet_type_id;
	docky_clock_docklet_type_id = g_type_register_static (G_TYPE_OBJECT, "DockyClockDocklet", &g_define_type_info, 0);
	g_type_add_interface_static (docky_clock_docklet_type_id, PLANK_TYPE_DOCKLET, &plank_docklet_info);
	return docky_clock_docklet_type_id;
}

GType
docky_clock_docklet_get_type (void)
{
	static volatile gsize docky_clock_docklet_type_id__volatile = 0;
	if (g_once_init_enter (&docky_clock_docklet_type_id__volatile)) {
		GType docky_clock_docklet_type_id;
		docky_clock_docklet_type_id = docky_clock_docklet_get_type_once ();
		g_once_init_leave (&docky_clock_docklet_type_id__volatile, docky_clock_docklet_type_id);
	}
	return docky_clock_docklet_type_id__volatile;
}

