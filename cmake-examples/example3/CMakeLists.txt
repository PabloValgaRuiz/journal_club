cmake_minimum_required(VERSION 3.10)

# name the project
# this will be used as the target name for the executable
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# export compile commands for tools like clangd, optional
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# this is what we want to compile into an executable. hellow_world is now a "target" that we can refer to in other commands
add_executable(hello_world src/main.cpp)

add_subdirectory(random_library) # the directory where the library (and it's CMakeLists.txt) is located
target_link_libraries(hello_world PRIVATE random) # just link against it.