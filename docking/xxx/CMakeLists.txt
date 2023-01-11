find_package(Qt6 COMPONENTS Core REQUIRED)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    docking.cpp
    )
set(HEADERS
    docking.h
    )
add_library(Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )

target_link_libraries(Library PRIVATE Qt6::Core)
