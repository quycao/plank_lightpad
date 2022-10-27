public static void docklet_init (Plank.DockletManager manager)
{
	manager.register_docklet (typeof (Docky.LightpadDocklet));
}

namespace Docky
{
	//  public const string G_RESOURCE_PATH = "/net/launchpad/plank/docklets/desktop";
	
	public class LightpadDocklet : Object, Plank.Docklet
	{
		public unowned string get_id ()
		{
			return "lightpad";
		}
		
		public unowned string get_name ()
		{
			return _("Lightpad");
		}
		
		public unowned string get_description ()
		{
			return _("Applications Launcher.");
		}
		
		public unowned string get_icon ()
		{
			//  return "show-desktop;;resource://" + Docky.G_RESOURCE_PATH + "/icons/show-desktop.svg";
            return "start-here-symbolic";
		}
		
		public bool is_supported ()
		{
			return true;
		}
		
		public Plank.DockElement make_element (string launcher, GLib.File file)
		{
			return new LightpadDockItem.with_dockitem_file (file);
		}
	}
}
