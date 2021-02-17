cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 14)

get_filename_component(PROJECT ${CMAKE_SOURCE_DIR} NAME)
project(${PROJECT})

file(GLOB C_SOURCES *.c)
file(GLOB CPP_SOURCES *.cpp)
set(SOURCES ${C_SOURCES} ${CPP_SOURCES})

add_executable(${PROJECT} ${SOURCES})
