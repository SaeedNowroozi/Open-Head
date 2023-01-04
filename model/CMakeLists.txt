find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
    model_data.cpp
      )
set(HEADERS
 model_data.h
    )

add_library(model_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(model_Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )


#find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(model_Library PRIVATE Qt6::Core)
