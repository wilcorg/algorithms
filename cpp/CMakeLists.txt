cmake_minimum_required(VERSION 3.14)
project(algorithms)

set(CMAKE_CXX_STANDARD 23)
set(INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/include)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(tests)
