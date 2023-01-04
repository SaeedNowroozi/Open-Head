find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)

set(SOURCES
    widget_chart.cpp
    )
set(HEADERS
 widget_chart.h
    )

add_library(widget_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(widget_Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )
