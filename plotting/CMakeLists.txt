find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)

set(SOURCES
    plotting_data.h
    )
set(HEADERS
    plotting_data.h
    )

add_library(plotting_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )
