cmake_minimum_required(VERSION 3.31.3)
project(test_project)


if(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
    message("OS    : ${CMAKE_SYSTEM_NAME}")
    set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")
    message("Arch  : ${CMAKE_OSX_ARCHITECTURES}")
endif()


set(CMAKE_CXX_FLAGS_DEBUG           "-std=c++20 -O0 -g -Wall -fcolor-diagnostics -fansi-escape-codes -DDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO  "-std=c++20 -O2 -g -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE         "-std=c++20 -O3 -DNDEBUG")
set(CMAKE_CXX_FLAGS_MINSIZEREL      "-std=c++20 -Os -DNDEBUG")


option(ENABLE_TESTS "Enable tests" OFF)
if (${ENABLE_TESTS})
    enable_testing()
    add_subdirectory(tests)
endif()


add_subdirectory(dynamiclib)
add_subdirectory(staticlib)
add_subdirectory(framework)
add_subdirectory(executable)
# add_subdirectory(graphic_exe)




