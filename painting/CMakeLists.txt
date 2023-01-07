find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
  painting_ground.cpp
  shape.cpp
    )
set(HEADERS
    painting_ground.h
    shape.h
    )
add_library(painting_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(painting_Library   PRIVATE Qt6::Core
   PUBLIC HEADERS )

target_link_libraries(painting_Library PRIVATE Qt6::Core)
