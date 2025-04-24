set(STATIC_TARGET_NAME __staticlib)
set(INCLUDE_DIRECTORIES include)
set(SOURCE_DIR src/b.cpp)


add_library(${STATIC_TARGET_NAME} STATIC ${SOURCE_DIR})
target_include_directories(${STATIC_TARGET_NAME} PRIVATE ${INCLUDE_DIRECTORIES})