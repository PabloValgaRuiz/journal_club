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

FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt
  GIT_TAG        12.2.1) # Pinning an exact tag guarantees reproducibility
FetchContent_MakeAvailable(fmt) # downloads the fmt library on build/ and does the equivalent of add_subdirectory()

target_link_libraries(hello_world PRIVATE fmt::fmt)
