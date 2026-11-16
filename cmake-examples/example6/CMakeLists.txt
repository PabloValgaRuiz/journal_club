cmake_minimum_required(VERSION 3.14)

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
# this is what we want to compile into an executable. hello_world is now a "target" that we can refer to in other commands
add_executable(hello_world src/main.cpp)

# 1. Own library in folder
add_subdirectory(random_library) # the directory where the library (and its CMakeLists.txt) is located

# 2. External library with FetchContent
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt
  GIT_TAG        12.2.1) # Pinning an exact tag guarantees reproducibility
FetchContent_MakeAvailable(fmt) # downloads the fmt library on build/ and does the equivalent of add_subdirectory()

# 3. External library with find_package
find_package(GSL REQUIRED)

# Link all libraries to the executable
target_link_libraries(hello_world PRIVATE 
    random 
    fmt::fmt 
    GSL::gsl
    GSL::gslcblas
)