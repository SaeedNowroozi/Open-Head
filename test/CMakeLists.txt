if(ENABLE_TESTING)
    set(TEST_MAIN
        "unit_tets")
    set(TEST_SOURCES
        "main.cpp")
    add_executable(${TEST_MAIN} ${TEST_SOURCES})
    include(FetchContent)

     FetchContent_Declare(
        Catch2
        GIT_REPOSITORY  https://github.com/catchorg/Catch2
        GIT_TAG  v3.2.1
        )
    FetchContent_MakeAvailable(Catch2)
    target_link_libraries(${TEST_MAIN} PRIVATE Catch2::Catch2WithMain )

endif()
