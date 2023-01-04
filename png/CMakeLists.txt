find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)


set(SOURCES
    png_controller.cpp
    )
set(HEADERS
    png_controller.h
    )

add_library(png_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )
