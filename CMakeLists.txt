# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)



project ("CmakeIntro")

add_subdirectory(libraries)

include_directories(libraries/files/include)
include_directories(libraries/sorting/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(main main.cpp)


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})



target_link_libraries(main PUBLIC sorting files)
