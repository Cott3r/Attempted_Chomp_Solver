# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


# adding the Google_Tests_run target
# (Add all the .cpp test files in the testing folder)
FILE(GLOB SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_executable(Google_tests ${SOURCE_FILES})


# linking Google_Tests_run with the libraries which will be tested
target_link_libraries(Google_tests Chomp_Solver_libc )
target_link_libraries(Google_tests gtest gmock gtest_main)
