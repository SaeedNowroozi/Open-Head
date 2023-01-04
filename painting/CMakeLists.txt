find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)

set(SOURCES
    dpi_manager.cpp
    png_manager.cpp
    )
set(HEADERS
   dpi_manager.h
    png_manager.h
    )
add_library(painting_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(painting_Library   PRIVATE Qt6::Core
   PUBLIC HEADERS )

