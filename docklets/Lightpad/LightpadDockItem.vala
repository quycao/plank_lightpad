using Plank;

namespace Docky
{
    public class LightpadDockItem : DockletItem
    {
        LightPadWindow lightpad_window;
        //  string ls_stdout;
        //  string ls_stderr;
        //  int ls_status;

        /**
		 * {@inheritDoc}
		 */
		public LightpadDockItem.with_dockitem_file (GLib.File file)
		{
			GLib.Object (Prefs: new DockItemPreferences.with_file (file));
		}

        construct
		{
			Icon = "lightpad;;resource://" + Docky.G_RESOURCE_PATH + "/data/icons/24/lightpad.svg";
            //  Icon = "start-here-symbolic";
			Text = _("Applications");

            //  Gtk.init (ref args);
            //  Gtk.Application app = new Gtk.Application ("org.libredeb.lightpad", GLib.ApplicationFlags.FLAGS_NONE);

            // CSS Style Provider
            // Path where takes the CSS file
            // string css_file = Build.PKGDATADIR + "/docklets/lightpad/application.css";
            var css_provider = new Gtk.CssProvider ();

            try {
                // css_provider.load_from_path (css_file);
                css_provider.load_from_resource (Docky.G_RESOURCE_PATH + "/data/application.css");
                Gtk.StyleContext.add_provider_for_screen (Gdk.Screen.get_default(), css_provider,
                                                                Gtk.STYLE_PROVIDER_PRIORITY_USER);
                //  info ("Loaded CSS file: %s",css_file);
            } catch (GLib.Error e) {
                // warning ("Could not load CSS file: %s",css_file);
                warning ("Could not load CSS from resource: %s", "application.css");
            }

            lightpad_window = new LightPadWindow ();
            //  lightpad_window.show_all ();
		}
		
		~LightpadDockItem ()
		{
            if (lightpad_window == null) {
                lightpad_window = new LightPadWindow();
                //  lightpad_window.show_all ();
            }
		}

        protected override AnimationType on_clicked (PopupButton button, Gdk.ModifierType mod, uint32 event_time)
		{
			if (button == PopupButton.LEFT) {
                if (lightpad_window.wasShowed == true) {
                    print ("Hide!\n");
                    lightpad_window.hide ();
                    lightpad_window.wasShowed = false;
                    lightpad_window.refresh_apps ();
                } else {
                    print ("Show!\n");
                    // lightpad_window.pages.set_active (0);
                    lightpad_window.searchbar.hint ();
                    lightpad_window.show_all ();
                    lightpad_window.wasShowed = true;
                    //  this.get_dock ().window.set_type_hint (Gdk.WindowTypeHint.DOCK);
                    this.get_dock ().window.set_transient_for (lightpad_window);
                }

                //  try {
                //      if (wasShowed == true) {
                //          print ("Hide!\n");
                //          lightpad.hide ();
                //          //Process.spawn_command_line_sync ("xdotool search --onlyvisible --name \"Lightpad\" windowminimize", out ls_stdout, out ls_stderr, out ls_status);
                //          wasShowed = false;
                //          //  System.get_default ().open_command ("gnome-system-monitor");
                //          // return AnimationType.BOUNCE;
                //      } else {
                //          print ("Show!\n");
                //          lightpad.show ();
                //          //Process.spawn_command_line_sync ("xdotool search --name \"Lightpad\" windowactive", out ls_stdout, out ls_stderr, out ls_status);
                //          wasShowed = true;
                //      }
                //  } catch (SpawnError e) {
                //      print ("Error: %s\n", e.message);
                //  }
			}
			
			return AnimationType.NONE;
		}
    }
}