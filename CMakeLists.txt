cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(libraries)
include_directories(src)

set(MAIN_SOURCES
    src/main.cpp
    src/main2.cpp
    src/random.cpp
)


add_executable(hello_world ${MAIN_SOURCES})