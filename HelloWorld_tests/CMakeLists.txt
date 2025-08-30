cmake_minimum_required(VERSION 3.16)
project(HelloWorld_tests)

set_target_properties(HelloWorld_tests PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON)

add_subdirectory(HelloWorld_tests)