cmake_minimum_required(VERSION 3.5)

project(untitled48 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(untitled48
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET untitled48 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(untitled48 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(untitled48
            ${PROJECT_SOURCES}
        )
    endif()
endif()

include(FetchContent)

 FetchContent_Declare(
    spdlog
    GIT_REPOSITORY  https://github.com/gabime/spdlog
    GIT_TAG  v1.11.0
    )
FetchContent_MakeAvailable(spdlog)

include(FetchContent)

 FetchContent_Declare(
    fmt
    GIT_REPOSITORY  https://github.com/fmtlib/fmt
    GIT_TAG  9.1.0
    )
FetchContent_MakeAvailable(fmt)

#target_link_libraries(
#   name_library )

target_link_libraries(untitled48 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
   device_Library
   widget_Library
   spdlog::spdlog_header_only
   fmt::fmt)

set_target_properties(untitled48 PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(untitled48)
endif()
add_subdirectory(dpi)
add_subdirectory(logger)
add_subdirectory(widget)
add_subdirectory(device)
add_subdirectory(docking)
add_subdirectory(model)
add_subdirectory(painting)
add_subdirectory(plotting)
add_subdirectory(png)
add_subdirectory(turn-on-of)
