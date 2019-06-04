cmake_minimum_required(VERSION 3.13)
project(LeetCode C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Escape_from_the_maze)

add_executable(LeetCode
        MedianOfTwoSortedArrays.c)

add_executable(ex1
        Escape_from_the_maze/EscapeFromMaze.c)
