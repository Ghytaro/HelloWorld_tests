cmake_minimum_required(VERSION 3.16)
project(HelloWorld_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(SOURCES
	hello.cpp 
	main.cpp 
	version.cpp
)

set(HEADERS 
	hello.h 
	version.h 
)

add_library(hello_lib
	${HEADERS}
	${SOURCES}
)

add_executable(HelloWorld ${HEADERS} ${SOURCES})

target_link_libraries(HelloWorld PRIVATE helli_lib)