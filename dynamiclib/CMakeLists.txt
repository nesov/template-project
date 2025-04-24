
set(DYNAMIC_TARGET_NAME __dynamiclib)
set(SOURCE_DIR src/a.cpp)
set(INCLUDE_DIRECTORIES include)

add_library(${DYNAMIC_TARGET_NAME} SHARED ${SOURCE_DIR})
target_include_directories(${DYNAMIC_TARGET_NAME} PRIVATE ${INCLUDE_DIRECTORIES})