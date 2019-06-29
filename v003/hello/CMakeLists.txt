add_library(
    Hello
    src/hello/hello.h
    src/hello/hello.cpp
    )

target_include_directories(Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)