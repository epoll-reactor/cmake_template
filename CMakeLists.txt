cmake_minimum_required(VERSION 3.20)

project(cmake_template DESCRIPTION "Template CMake app" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(modules)
add_subdirectory(template_lib)
add_subdirectory(tests)
