/* docklet-cpumonitor.vapi generated by valac 0.48.17, do not modify. */

namespace Docky {
	[CCode (cheader_filename = "docklet-cpumonitor.h")]
	public class CPUMonitorDockItem : Plank.DockletItem {
		public CPUMonitorDockItem ();
		protected override void draw_icon (Plank.Surface surface);
		protected override Plank.AnimationType on_clicked (Plank.PopupButton button, Gdk.ModifierType mod, uint32 event_time);
		public CPUMonitorDockItem.with_dockitem_file (GLib.File file);
	}
	[CCode (cheader_filename = "docklet-cpumonitor.h")]
	public class CPUMonitorDocklet : GLib.Object, Plank.Docklet {
		public CPUMonitorDocklet ();
	}
}
[CCode (cheader_filename = "docklet-cpumonitor.h")]
public static void docklet_init (Plank.DockletManager manager);
