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
			//  Icon = "show-desktop;;resource://" + Docky.G_RESOURCE_PATH + "/icons/show-desktop.svg";
            Icon = "start-here-symbolic";
			Text = _("Applications");

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
                    lightpad_window.show_all ();
                    lightpad_window.wasShowed = true;
                    // dock.set_type_hint (Gdk.WindowTypeHint.UTILITY);
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