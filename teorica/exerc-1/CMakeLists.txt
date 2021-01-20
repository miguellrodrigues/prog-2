cmake_minimum_required(VERSION 3.16)
project(tad C)

set(CMAKE_C_STANDARD 11)

add_executable(tad main.c Account.c Account.h)
