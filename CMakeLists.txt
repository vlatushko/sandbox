cmake_minimum_required(VERSION 3.29)
project(sandbox)

set(CMAKE_CXX_STANDARD 26)

add_executable(sandbox src/main.cpp)
add_executable(AreaUnderGraph101 src/math_for_games/AreaUnderGraph101.cpp)
