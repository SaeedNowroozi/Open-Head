find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    plotting_data.h
    )
set(HEADERS
    plotting_data.h
    )

add_library(plotting_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(plotting_Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )

target_link_libraries(plotting_Library PRIVATE Qt6::Core)
