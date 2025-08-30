cmake_minimum_required(VERSION 3.16)
project(HelloWorld_tests)

add_subdirectory(HelloWorld_tests)
add_subdirectory(tests)

set_target_properties(HelloWorld_tests PROPERTIES
	CXX_STANDARD 17
 	CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(HelloWorld_tests test_helloworld.cpp)
target_link_libraries(HelloWorld_tests PRIVATE hello_lib)

add_test(NAME HelloWorld_RunTests COMMAND HelloWorld_tests)
