find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    turn_on.cpp
    )
set(HEADERS
    turn_on.h
    )

add_library(turn_on_Library STATIC ${SOURCES} ${HEADERS} )
find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(turn_on_Library PRIVATE Qt6::Core)
