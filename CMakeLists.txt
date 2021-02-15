cmake_minimum_required( VERSION 3.0)

project(ConDict)

set(SOURCES src/main.cpp)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY 
	${CMAKE_BINARY_DIR}/bin/${CMAKE_ACTIVE_CONFIGURATION})

if(WIN32)
	set(SOURCES ${SOURCES} 
			src/Console/Windows/Helper.h
			src/Console/Windows/Helper.cpp
			src/Dictionary/Dictionary.cpp
			src/Dictionary/Dictionary.h
			src/Console/Console_interface.h
			src/Console/Console_interface.cpp)
else()
	message("Currently only support Windows")
endif()

add_executable(ConDict ${SOURCES})
target_include_directories(ConDict PUBLIC ${CMAKE_SOURCE_DIR}/src)
