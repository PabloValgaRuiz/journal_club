cmake_minimum_required(VERSION 3.10)

# name the project
# this will be used as the target name for the executable
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# export compile commands for tools like clangd, optional
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# --- Download external dependencies automatically ---
include(FetchContent)

# --- Executables ---
add_executable(hello_world src/main.cpp)

find_package(GSL REQUIRED)

target_link_libraries(hello_world PRIVATE GSL::gsl)