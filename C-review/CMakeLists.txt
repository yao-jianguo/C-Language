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
        1_basic_concept/ex4-外部变量的引用.c 1_basic_concept/ex4-外部变量的引用main.c)
add_executable(ex5
        1_basic_concept/ex5-常量.c)
add_executable(ex6
        1_basic_concept/ex6-从函数返回数组.c)
add_executable(ex7
        1_basic_concept/ex7-指针数组.c)
add_executable(ex8
        1_basic_concept/ex8-指向指针的指针.c)
add_executable(ex9
        1_basic_concept/ex9-回调函数.c)