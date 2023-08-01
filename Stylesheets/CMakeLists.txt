find_package(Qt6 COMPONENTS Core REQUIRED)
#target_link_libraries(Library PRIVATE Qt6::Core)
include_directories(${Qt5Widgets_INCLUDE_DIRS})
set(SOURCES
   
   

    )
set(HEADERS
  
  
    )
add_library(Stylesheets STATIC ${SOURCES} ${HEADERS})
target_include_directories(Stylesheets  PRIVATE Qt6::Core
   PUBLIC HEADERS )



#find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(Stylesheets PRIVATE Qt6::Core)
