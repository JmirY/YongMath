# Make list of source files
file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# If you want to build YongMath as dynamic library,
# change "STATIC" to "SHARED"
add_library(YongMath STATIC ${SOURCE_FILES})

target_include_directories(YongMath PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
