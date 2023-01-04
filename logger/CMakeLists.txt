find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})



set(SOURCES
    logger.cpp
    )
set(HEADERS
    call_once.h
    logger.h
    singleton.h
    )
add_library(logger_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(logger_Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )


target_link_libraries(logger_Library PRIVATE Qt6::Core)
