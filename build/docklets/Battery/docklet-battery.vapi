/* docklet-battery.vapi generated by valac 0.48.17, do not modify. */

namespace Docky {
	[CCode (cheader_filename = "docklet-battery.h")]
	public class BatteryDockItem : Plank.DockletItem {
		public BatteryDockItem ();
		public BatteryDockItem.with_dockitem_file (GLib.File file);
	}
	[CCode (cheader_filename = "docklet-battery.h")]
	public class BatteryDocklet : GLib.Object, Plank.Docklet {
		public BatteryDocklet ();
	}
}
[CCode (cheader_filename = "docklet-battery.h")]
public static void docklet_init (Plank.DockletManager manager);
