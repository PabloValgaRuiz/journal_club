cmake_minimum_required(VERSION 3.10)

# name the project
# this will be used as the target name for the executable
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# export compile commands for tools like clangd, optional
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# equivalent to -I, let's the compiler know where to look for headers
include_directories(libraries)
include_directories(src)

# this is just declaring a variable to substitute later
set(MAIN_SOURCES
    src/main.cpp
    src/random.cpp
)

# this is what we want to compile into an executable
add_executable(hello_world ${MAIN_SOURCES})