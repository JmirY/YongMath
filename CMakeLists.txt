cmake_minimum_required(VERSION 3.10)

project(YongMath)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Make list of source files
file(GLOB SOURCE_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)

# If you want to build YongMath as dynamic library,
# change "STATIC" to "SHARED"
add_library(YongMath STATIC ${SOURCE_FILES})

target_include_directories(YongMath PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
