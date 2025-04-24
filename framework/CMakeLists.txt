
set(TARGET_NAME __dynamicFramework)
set(INCLUDE_DIRECTORIES include)
set(SOURCE_DIR src/framework.cpp)


add_library(${TARGET_NAME} SHARED ${SOURCE_DIR})
target_include_directories(${TARGET_NAME} PRIVATE ${INCLUDE_DIRECTORIES})


set_target_properties(${TARGET_NAME} PROPERTIES
  FRAMEWORK TRUE
  FRAMEWORK_VERSION CXX
  MACOSX_FRAMEWORK_IDENTIFIER com.cmake.${TARGET_NAME}
  MACOSX_FRAMEWORK_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist
  # "current version" in semantic format in Mach-O binary file
  VERSION 16.4.0
  # "compatibility version" in semantic format in Mach-O binary file
  SOVERSION 1.0.0
  PUBLIC_HEADER framework.h
  XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "iPhone Developer"
)

