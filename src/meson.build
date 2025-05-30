qt6_dep = dependency('Qt6Core')
qt6_widgets_dep = dependency('Qt6Widgets')

qt6 = import('qt6')
qt_modules = qt6.preprocess(
  moc_headers: ['mainwindow.h'],
  ui_files: ['mainwindow.ui'],
)

executable(
  'qt6-test',
  sources: ['main.cpp', 'mainwindow.cpp'] + qt_modules,
  dependencies: [qt6_dep, qt6_widgets_dep],
  install: true,
  cpp_args: ['-fPIC'],
)
