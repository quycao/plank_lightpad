/* docklet-battery.h generated by valac 0.48.17, the Vala compiler, do not modify */

#ifndef __DOCKLETS_BATTERY_DOCKLET_BATTERY_H__
#define __DOCKLETS_BATTERY_DOCKLET_BATTERY_H__

#include "plank.h"
#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>

G_BEGIN_DECLS

#define DOCKY_TYPE_BATTERY_DOCK_ITEM (docky_battery_dock_item_get_type ())
#define DOCKY_BATTERY_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_BATTERY_DOCK_ITEM, DockyBatteryDockItem))
#define DOCKY_BATTERY_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_BATTERY_DOCK_ITEM, DockyBatteryDockItemClass))
#define DOCKY_IS_BATTERY_DOCK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_BATTERY_DOCK_ITEM))
#define DOCKY_IS_BATTERY_DOCK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_BATTERY_DOCK_ITEM))
#define DOCKY_BATTERY_DOCK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_BATTERY_DOCK_ITEM, DockyBatteryDockItemClass))

typedef struct _DockyBatteryDockItem DockyBatteryDockItem;
typedef struct _DockyBatteryDockItemClass DockyBatteryDockItemClass;
typedef struct _DockyBatteryDockItemPrivate DockyBatteryDockItemPrivate;

#define DOCKY_TYPE_BATTERY_DOCKLET (docky_battery_docklet_get_type ())
#define DOCKY_BATTERY_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOCKY_TYPE_BATTERY_DOCKLET, DockyBatteryDocklet))
#define DOCKY_BATTERY_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOCKY_TYPE_BATTERY_DOCKLET, DockyBatteryDockletClass))
#define DOCKY_IS_BATTERY_DOCKLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOCKY_TYPE_BATTERY_DOCKLET))
#define DOCKY_IS_BATTERY_DOCKLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOCKY_TYPE_BATTERY_DOCKLET))
#define DOCKY_BATTERY_DOCKLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOCKY_TYPE_BATTERY_DOCKLET, DockyBatteryDockletClass))

typedef struct _DockyBatteryDocklet DockyBatteryDocklet;
typedef struct _DockyBatteryDockletClass DockyBatteryDockletClass;
typedef struct _DockyBatteryDockletPrivate DockyBatteryDockletPrivate;

struct _DockyBatteryDockItem {
	PlankDockletItem parent_instance;
	DockyBatteryDockItemPrivate * priv;
};

struct _DockyBatteryDockItemClass {
	PlankDockletItemClass parent_class;
};

struct _DockyBatteryDocklet {
	GObject parent_instance;
	DockyBatteryDockletPrivate * priv;
};

struct _DockyBatteryDockletClass {
	GObjectClass parent_class;
};

GType docky_battery_dock_item_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyBatteryDockItem, g_object_unref)
DockyBatteryDockItem* docky_battery_dock_item_new_with_dockitem_file (GFile* file);
DockyBatteryDockItem* docky_battery_dock_item_construct_with_dockitem_file (GType object_type,
                                                                            GFile* file);
DockyBatteryDockItem* docky_battery_dock_item_new (void);
DockyBatteryDockItem* docky_battery_dock_item_construct (GType object_type);
void docklet_init (PlankDockletManager* manager);
GType docky_battery_docklet_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DockyBatteryDocklet, g_object_unref)
DockyBatteryDocklet* docky_battery_docklet_new (void);
DockyBatteryDocklet* docky_battery_docklet_construct (GType object_type);

G_END_DECLS

#endif
