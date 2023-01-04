find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    dpi_manager.cpp
    png_manager.cpp

    )
set(HEADERS
    dpi_manager.h
    png_manager.h
    )
add_library(dpi_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(dpi_Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )



#find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(dpi_Library PRIVATE Qt6::Core)
