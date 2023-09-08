find_package(Qt6 COMPONENTS Core REQUIRED)
find_package(Qt6 COMPONENTS Widgets REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
#  painting_ground.cpp
  shape.cpp
  ground.cpp
  factoryshape.cpp
# ruler.cpp
    )
set(HEADERS
#    painting_ground.h
    shape.h
    ground.h
    factoryshape.h
#   ruler.h
    )
add_library(painting_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(painting_Library   PRIVATE Qt6::Core
   PUBLIC HEADERS )

target_link_libraries(painting_Library PRIVATE Qt6::Core
    PRIVATE Qt6::Widgets
    spdlog::spdlog_header_only)


