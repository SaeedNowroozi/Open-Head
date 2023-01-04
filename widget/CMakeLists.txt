
find_package(Qt6 COMPONENTS Core REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
find_package(Qt6 COMPONENTS Widgets REQUIRED)



set(SOURCES
    widget_chart.cpp
    )
set(HEADERS
    widget_chart.h
    )

add_library(widget_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(widget_Library  PRIVATE Qt6::Core
    PRIVATE Qt6::Widgets
    PUBLIC HEADERS )

target_link_libraries(widget_Library PRIVATE Qt6::Widgets)
