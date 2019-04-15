cmake_minimum_required (VERSION 3.1)

#	Get all test cases files
file(GLOB TEST_CASES *.txt)

#	copy test files to build dir
file(COPY ${TEST_CASES} DESTINATION  ${CMAKE_BINARY_DIR}/bin)