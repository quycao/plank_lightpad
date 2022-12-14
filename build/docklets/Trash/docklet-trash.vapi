/* docklet-trash.vapi generated by valac 0.48.17, do not modify. */

namespace Docky {
	[CCode (cheader_filename = "docklet-trash.h")]
	public class TrashDockItem : Plank.DockletItem {
		public TrashDockItem ();
		protected override bool accept_drop (Gee.ArrayList<string> uris);
		protected override bool can_accept_drop (Gee.ArrayList<string> uris);
		public override string get_drop_text ();
		public override Gee.ArrayList<Gtk.MenuItem> get_menu_items ();
		protected override Plank.AnimationType on_clicked (Plank.PopupButton button, Gdk.ModifierType mod, uint32 event_time);
		public TrashDockItem.with_dockitem_file (GLib.File file);
	}
	[CCode (cheader_filename = "docklet-trash.h")]
	public class TrashDocklet : GLib.Object, Plank.Docklet {
		public TrashDocklet ();
	}
}
[CCode (cheader_filename = "docklet-trash.h")]
public static void docklet_init (Plank.DockletManager manager);
