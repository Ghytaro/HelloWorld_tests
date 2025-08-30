set(HEADERS
	version.h 
	hello.h
)

set(SOURCES
	hello.cpp
	main.cpp
	version.cpp
)

add_library(hello_lib
	${HEADERS}
	${SOURCES}
)

add_executable(HelloWorld_tests ${HEADERS} ${SOURCES})
