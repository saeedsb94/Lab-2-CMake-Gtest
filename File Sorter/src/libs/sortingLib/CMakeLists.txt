# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project(sortingLib)

#	set the library's headers
set(LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

#	get all library's sources
file(GLOB LIB_SOURCES src/*.cpp)

#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#	create the shared Library's binary sortingLib.dll
add_library(${PROJECT_NAME} SHARED ${LIB_SOURCES})

#	link all needed headers
target_include_directories (${PROJECT_NAME} PUBLIC ${LIB_INCLUDE_DIR})