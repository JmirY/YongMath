# Make list of source files
file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(YongMath ${SOURCE_FILES})

target_include_directories(YongMath PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
