cmake_minimum_required(VERSION 3.10)
project(project_euler C)

set(CMAKE_C_STANDARD 99)
include_directories("${PROJECT_SOURCE_DIR}")
add_executable(project_euler main.c problems.c problems.h problem_11.c problem_4.c problem_5.c problem_6.c)