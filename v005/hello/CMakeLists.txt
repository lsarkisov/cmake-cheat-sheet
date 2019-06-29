file(
    GLOB
    hello_files
    src/hello/*.h
    src/hello/*.cpp
)

set(hello_files ${hello_files} PARENT_SCOPE)

add_library(Hello ${hello_files})

target_include_directories(Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)