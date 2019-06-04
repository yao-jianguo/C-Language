cmake_minimum_required(VERSION 3.13)
project(C_review C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(1_basic_concept)

add_executable(ex1
        1_basic_concept/ex1-简介.c)
add_executable(ex2
        1_basic_concept/ex2-获取int类型大小.c)
add_executable(ex3
        1_basic_concept/ex3-变量定义.c)
add_executable(ex4
        1_basic_concept/ex4-外部变量的引用.c 1_basic_concept/ex4-外部变量的引用main.c 1_basic_concept/ex5-常量.c)
add_executable(ex5
        1_basic_concept/ex5-常量.c)