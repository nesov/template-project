
project(tests VERSION 1.0 LANGUAGES CXX)

set(TEST_TARGET __tests)
set(TEST_SOURCES    src/main.cpp
                    src/tests.cpp
                    src/tests_new.cpp
)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/main.zip
    # URL ${CMAKE_CURRENT_SOURCE_DIR}/3rd_party/archive/main.zip
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

add_executable(${TEST_TARGET} ${TEST_SOURCES})
target_include_directories(${TEST_TARGET} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${TEST_TARGET} PUBLIC GTest::gtest_main GTest::gtest)

gtest_discover_tests(${TEST_TARGET} WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/tests)
execute_process(COMMAND ctest WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

