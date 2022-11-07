VAPI_DIR = join_paths(meson.source_root(), 'vapi')

config_h = configure_file(
	output: 'config.h',
	configuration: conf
)

config_dep = declare_dependency(
	dependencies: vala.find_library('config', dirs: VAPI_DIR),
	sources: config_h
)

docklet_lightpad_sources = [
    'LightpadDockItem.vala',
    'LightpadDocklet.vala',
	'Application.vala',
    'Color.vala',
    'Config.vala',
    'DesktopEntries.vala',
    'Resources.vala',
    'Utilities.vala',
    'Blur.vala',
    'Widgets/AppItem.vala',
    'Widgets/CompositedWindow.vala',
    'Widgets/Indicators.vala',
    'Widgets/Searchbar.vala'
]

docklet_lightpad_resources = gnome.compile_resources(
	'lightpad-resources',
	'lightpad.gresource.xml',
	c_name: 'lightpad',
)

docklet_lightpad = shared_module(
	'docklet-lightpad',
	docklet_lightpad_sources,
    docklet_lightpad_resources,
	dependencies: [
        plank_dep,
        plank_base_dep,
        dependency('gio-unix-2.0', version: '>=2.56.0'),
        dependency('glib-2.0', version: '>=2.56.0'),
        dependency('gtk+-3.0', version: '>=3.22'),
        dependency('gdk-3.0', version: '>=3.22.0'),
        dependency('cairo', version: '>=1.15.0'),
        dependency('pango', version: '>=1.40.0'),
        dependency('gee-0.8', version: '>=0.20.0'),
        dependency('libgnome-menu-3.0', version: '>=3.13.0'),
        # Similar to add options "-X -lm" in cmake to use Math.pow()
        meson.get_compiler('c').find_library('m', required: false)
    ],
	install: true,
	install_dir: docklets_dir,
    vala_args: [
		'--pkg', 'config',
        '--vapidir=' + VAPI_DIR,
        '--target-glib=2.38',
	],
)

# Install CSS file
install_data(
    join_paths('data', 'application.css'),
    # install_dir: join_paths(datadir, PROJECT_NAME)
    install_dir: join_paths(pkgdata_dir, 'docklets', 'lightpad')
)
