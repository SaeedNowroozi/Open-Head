find_package(Qt6 COMPONENTS Core REQUIRED)

set(SOURCES
    docking.cpp
    )
set(HEADERS
    docking.h
    )
add_library(Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )
