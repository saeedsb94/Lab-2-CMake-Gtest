# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project(MainApp)

#	set the apps's headers
set(APP_INCLUDE_DIR 
	${CMAKE_SOURCE_DIR}/src/libs/filesLib/include
	${CMAKE_SOURCE_DIR}/src/libs/sortingLib/include
)

#	get all apps's sources
file(GLOB APP_SOURCES *.cpp)

#	export the binary results to bin folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#	create the executable binary MainApp.exe
add_executable(${PROJECT_NAME}  ${APP_SOURCES})

#	link all needed headers
target_include_directories (${PROJECT_NAME} PUBLIC ${APP_INCLUDE_DIR})

#	link all needed libraries
target_link_libraries(${PROJECT_NAME} PUBLIC sortingLib filesLib)


