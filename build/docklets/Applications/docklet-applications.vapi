/* docklet-applications.vapi generated by valac 0.48.17, do not modify. */

namespace Docky {
	[CCode (cheader_filename = "docklet-applications.h")]
	public class ApplicationsDockItem : Plank.DockletItem {
		public ApplicationsDockItem ();
		public override Gee.ArrayList<Gtk.MenuItem> get_menu_items ();
		protected override Plank.AnimationType on_clicked (Plank.PopupButton button, Gdk.ModifierType mod, uint32 event_time);
		protected override Plank.AnimationType on_scrolled (Gdk.ScrollDirection direction, Gdk.ModifierType mod, uint32 event_time);
		public ApplicationsDockItem.with_dockitem_file (GLib.File file);
	}
	[CCode (cheader_filename = "docklet-applications.h")]
	public class ApplicationsDocklet : GLib.Object, Plank.Docklet {
		public ApplicationsDocklet ();
	}
}
[CCode (cheader_filename = "docklet-applications.h")]
public static void docklet_init (Plank.DockletManager manager);
