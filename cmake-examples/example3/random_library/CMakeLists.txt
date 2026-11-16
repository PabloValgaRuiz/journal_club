cmake_minimum_required(VERSION 3.10)

project(random_library_project)

add_library(random STATIC src/my_random_lib.cpp)
target_include_directories(random PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include) # make it public, so when the main project includes headers, it finds the ones from this library too. if not, the main project would have to manually add this include path.
