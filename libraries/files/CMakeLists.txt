# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

include_directories(include)

file(GLOB LIB_SOURCE src/*.cpp)

add_library(files STATIC ${LIB_SOURCE})
