cmake_minimum_required(VERSION 3.5)

project(MyQt6App VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
)

set(HEADERS
    inc/mainwindow.h
)

set(UI_FILES
    ui/mainwindow.ui
)

set(MOC_HEADERS
    inc/mainwindow.h
)

# 生成 UI 和 MOC 文件
qt6_wrap_ui(UI_HEADERS ${UI_FILES})
qt6_wrap_cpp(MOC_SOURCES ${MOC_HEADERS})

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UI_HEADERS} ${MOC_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE inc ${CMAKE_BINARY_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
