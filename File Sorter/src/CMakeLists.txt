# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

add_subdirectory(libs)

add_subdirectory(extern)

add_subdirectory(tests)

add_subdirectory(app)