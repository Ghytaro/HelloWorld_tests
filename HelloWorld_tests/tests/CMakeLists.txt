set(SOURCES
    test_helloworld.cpp)

add_executable(test_helloworld
    ${SOURCES}
)

target_link_libraries(run_tests
    PRIVATE
        hello_lib
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_helloworld)