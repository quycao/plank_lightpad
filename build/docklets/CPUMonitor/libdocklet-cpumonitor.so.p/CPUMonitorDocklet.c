/* CPUMonitorDocklet.c generated by valac 0.48.17, the Vala compiler
 * generated from CPUMonitorDocklet.vala, do not modify */

/**/
/*  Copyright (C) 2016 Rico Tzschichholz*/
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

#define DOCKY_TYPE_CPU_MONITOR_DOCKLET (docky_cpu_monitor_docklet_get_type ())
#define DOCKY_CPU_MONITOR_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_CPU_MONITOR_DOCKLET, DockyCPUMonitorDocklet))
#define DOCKY_CPU_MONITOR_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_CPU_MONITOR_DOCKLET, DockyCPUMonitorDockletClass))
#define DOCKY_IS_CPU_MONITOR_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_CPU_MONITOR_DOCKLET))
#define DOCKY_IS_CPU_MONITOR_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_CPU_MONITOR_DOCKLET))
#define DOCKY_CPU_MONITOR_DOCKLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_CPU_MONITOR_DOCKLET, DockyCPUMonitorDockletClass))

typedef struct _DockyCPUMonitorDocklet DockyCPUMonitorDocklet;
typedef struct _DockyCPUMonitorDockletClass DockyCPUMonitorDockletClass;
typedef struct _DockyCPUMonitorDockletPrivate DockyCPUMonitorDockletPrivate;
enum  {
	DOCKY_CPU_MONITOR_DOCKLET_0_PROPERTY,
	DOCKY_CPU_MONITOR_DOCKLET_NUM_PROPERTIES
};
static GParamSpec* docky_cpu_monitor_docklet_properties[DOCKY_CPU_MONITOR_DOCKLET_NUM_PROPERTIES];

#define DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM (docky_cpu_monitor_dock_item_get_type ())
#define DOCKY_CPU_MONITOR_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM, DockyCPUMonitorDockItem))
#define DOCKY_CPU_MONITOR_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM, DockyCPUMonitorDockItemClass))
#define DOCKY_IS_CPU_MONITOR_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM))
#define DOCKY_IS_CPU_MONITOR_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM))
#define DOCKY_CPU_MONITOR_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_CPU_MONITOR_DOCK_ITEM, DockyCPUMonitorDockItemClass))

typedef struct _DockyCPUMonitorDockItem DockyCPUMonitorDockItem;
typedef struct _DockyCPUMonitorDockItemClass DockyCPUMonitorDockItemClass;

struct _DockyCPUMonitorDocklet {
	GObject parent_instance;
	DockyCPUMonitorDockletPrivate * priv;
};

struct _DockyCPUMonitorDockletClass {
	GObjectClass parent_class;
};

static gpointer docky_cpu_monitor_docklet_parent_class = NULL;
static PlankDockletIface * docky_cpu_monitor_docklet_plank_docklet_parent_iface = NULL;

void docklet_init (PlankDockletManager* manager);
GType docky_cpu_monitor_docklet_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyCPUMonitorDocklet, g_object_unref)
static const gchar* docky_cpu_monitor_docklet_real_get_id (PlankDocklet* base);
static const gchar* docky_cpu_monitor_docklet_real_get_name (PlankDocklet* base);
static const gchar* docky_cpu_monitor_docklet_real_get_description (PlankDocklet* base);
static const gchar* docky_cpu_monitor_docklet_real_get_icon (PlankDocklet* base);
static gboolean docky_cpu_monitor_docklet_real_is_supported (PlankDocklet* base);
static PlankDockElement* docky_cpu_monitor_docklet_real_make_element (PlankDocklet* base,
                                                               const gchar* launcher,
                                                               GFile* file);
DockyCPUMonitorDockItem* docky_cpu_monitor_dock_item_new_with_dockitem_file (GFile* file);
DockyCPUMonitorDockItem* docky_cpu_monitor_dock_item_construct_with_dockitem_file (GType object_type,
                                                                                   GFile* file);
GType docky_cpu_monitor_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyCPUMonitorDockItem, g_object_unref)
DockyCPUMonitorDocklet* docky_cpu_monitor_docklet_new (void);
DockyCPUMonitorDocklet* docky_cpu_monitor_docklet_construct (GType object_type);
static GType docky_cpu_monitor_docklet_get_type_once (void);

void
docklet_init (PlankDockletManager* manager)
{
#line 20 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	g_return_if_fail (manager != NULL);
#line 22 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	plank_docklet_manager_register_docklet (manager, DOCKY_TYPE_CPU_MONITOR_DOCKLET);
#line 97 "CPUMonitorDocklet.c"
}

static const gchar*
docky_cpu_monitor_docklet_real_get_id (PlankDocklet* base)
{
	DockyCPUMonitorDocklet * self;
	const gchar* result = NULL;
#line 29 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 31 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = "cpumonitor";
#line 31 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 111 "CPUMonitorDocklet.c"
}

static const gchar*
docky_cpu_monitor_docklet_real_get_name (PlankDocklet* base)
{
	DockyCPUMonitorDocklet * self;
	const gchar* result = NULL;
#line 34 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 36 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = _ ("CPU Monitor");
#line 36 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 125 "CPUMonitorDocklet.c"
}

static const gchar*
docky_cpu_monitor_docklet_real_get_description (PlankDocklet* base)
{
	DockyCPUMonitorDocklet * self;
	const gchar* result = NULL;
#line 39 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 41 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = _ ("Keep an eye on that CPU. And when it gets out of line...");
#line 41 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 139 "CPUMonitorDocklet.c"
}

static const gchar*
docky_cpu_monitor_docklet_real_get_icon (PlankDocklet* base)
{
	DockyCPUMonitorDocklet * self;
	const gchar* result = NULL;
#line 44 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 46 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = "application-x-addon";
#line 46 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 153 "CPUMonitorDocklet.c"
}

static gboolean
docky_cpu_monitor_docklet_real_is_supported (PlankDocklet* base)
{
	DockyCPUMonitorDocklet * self;
	gboolean result = FALSE;
#line 49 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 51 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = TRUE;
#line 51 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 167 "CPUMonitorDocklet.c"
}

static PlankDockElement*
docky_cpu_monitor_docklet_real_make_element (PlankDocklet* base,
                                             const gchar* launcher,
                                             GFile* file)
{
	DockyCPUMonitorDocklet * self;
	DockyCPUMonitorDockItem* _tmp0_;
	PlankDockElement* result = NULL;
#line 54 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) base;
#line 54 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	g_return_val_if_fail (launcher != NULL, NULL);
#line 54 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	g_return_val_if_fail (file != NULL, NULL);
#line 56 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	_tmp0_ = docky_cpu_monitor_dock_item_new_with_dockitem_file (file);
#line 56 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	result = (PlankDockElement*) _tmp0_;
#line 56 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return result;
#line 190 "CPUMonitorDocklet.c"
}

DockyCPUMonitorDocklet*
docky_cpu_monitor_docklet_construct (GType object_type)
{
	DockyCPUMonitorDocklet * self = NULL;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	self = (DockyCPUMonitorDocklet*) g_object_new (object_type, NULL);
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return self;
#line 201 "CPUMonitorDocklet.c"
}

DockyCPUMonitorDocklet*
docky_cpu_monitor_docklet_new (void)
{
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	return docky_cpu_monitor_docklet_construct (DOCKY_TYPE_CPU_MONITOR_DOCKLET);
#line 209 "CPUMonitorDocklet.c"
}

static void
docky_cpu_monitor_docklet_class_init (DockyCPUMonitorDockletClass * klass,
                                      gpointer klass_data)
{
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	docky_cpu_monitor_docklet_parent_class = g_type_class_peek_parent (klass);
#line 218 "CPUMonitorDocklet.c"
}

static void
docky_cpu_monitor_docklet_plank_docklet_interface_init (PlankDockletIface * iface,
                                                        gpointer iface_data)
{
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	docky_cpu_monitor_docklet_plank_docklet_parent_iface = g_type_interface_peek_parent (iface);
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->get_id = (const gchar* (*) (PlankDocklet*)) docky_cpu_monitor_docklet_real_get_id;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->get_name = (const gchar* (*) (PlankDocklet*)) docky_cpu_monitor_docklet_real_get_name;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->get_description = (const gchar* (*) (PlankDocklet*)) docky_cpu_monitor_docklet_real_get_description;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->get_icon = (const gchar* (*) (PlankDocklet*)) docky_cpu_monitor_docklet_real_get_icon;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->is_supported = (gboolean (*) (PlankDocklet*)) docky_cpu_monitor_docklet_real_is_supported;
#line 27 "../docklets/CPUMonitor/CPUMonitorDocklet.vala"
	iface->make_element = (PlankDockElement* (*) (PlankDocklet*, const gchar*, GFile*)) docky_cpu_monitor_docklet_real_make_element;
#line 239 "CPUMonitorDocklet.c"
}

static void
docky_cpu_monitor_docklet_instance_init (DockyCPUMonitorDocklet * self,
                                         gpointer klass)
{
}

static GType
docky_cpu_monitor_docklet_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (DockyCPUMonitorDockletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) docky_cpu_monitor_docklet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DockyCPUMonitorDocklet), 0, (GInstanceInitFunc) docky_cpu_monitor_docklet_instance_init, NULL };
	static const GInterfaceInfo plank_docklet_info = { (GInterfaceInitFunc) docky_cpu_monitor_docklet_plank_docklet_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType docky_cpu_monitor_docklet_type_id;
	docky_cpu_monitor_docklet_type_id = g_type_register_static (G_TYPE_OBJECT, "DockyCPUMonitorDocklet", &g_define_type_info, 0);
	g_type_add_interface_static (docky_cpu_monitor_docklet_type_id, PLANK_TYPE_DOCKLET, &plank_docklet_info);
	return docky_cpu_monitor_docklet_type_id;
}

GType
docky_cpu_monitor_docklet_get_type (void)
{
	static volatile gsize docky_cpu_monitor_docklet_type_id__volatile = 0;
	if (g_once_init_enter (&docky_cpu_monitor_docklet_type_id__volatile)) {
		GType docky_cpu_monitor_docklet_type_id;
		docky_cpu_monitor_docklet_type_id = docky_cpu_monitor_docklet_get_type_once ();
		g_once_init_leave (&docky_cpu_monitor_docklet_type_id__volatile, docky_cpu_monitor_docklet_type_id);
	}
	return docky_cpu_monitor_docklet_type_id__volatile;
}

