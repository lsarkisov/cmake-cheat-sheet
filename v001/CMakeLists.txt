cmake_minimum_required(VERSION 3.13.4)

project(app)

add_subdirectory(hello)

include_directories(hello)

add_executable(MyApp main.cpp)

target_link_libraries(MyApp Hello)