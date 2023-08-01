find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    subsystemairpressure.cpp
    subsystemmotors.cpp
    devices_manager.cpp
    subsystemhead.cpp
    control_motor.cpp
    usbmanager.cpp
    )
set(HEADERS
    devices_manager.h
    subsystemhead.h
    subsystemairpressure.h
    subsystemmotors.h
    control_motor.h
    usbmanager.h
    )
add_library(device_Library STATIC ${SOURCES} ${HEADERS})
find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(device_Library PRIVATE Qt6::Core)
#include_directories(${Qt5Widgets_INCLUDE_DIRS})
#target_link_libraries(device_Library PRIVATE Qt6::Core)
