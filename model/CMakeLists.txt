find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)

set(SOURCES
    model_data.cpp
      )
set(HEADERS
 model_data.h
    )

add_library(model_Library STATIC ${SOURCES} ${HEADERS})
target_include_directories(Library  PRIVATE Qt6::Core
   PUBLIC HEADERS )
