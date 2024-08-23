project('qt6-test', 'cpp',
  version: '0.1',
  default_options: ['cpp_std=c++17'])

qt6_dep = dependency('Qt6Core')
qt6_widgets_dep = dependency('Qt6Widgets')

qt6 = import('qt6')
qt_modules = qt6.preprocess(
  moc_headers: ['inc/mainwindow.h'],
  ui_files: ['ui/mainwindow.ui']
)

inc_dir = include_directories('inc')

executable('qt6-test',
  sources: ['src/main.cpp', 'src/mainwindow.cpp'] + qt_modules,
  dependencies: [qt6_dep, qt6_widgets_dep],
  include_directories: inc_dir,
  install: true)
