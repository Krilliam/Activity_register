cmake_minimum_required(VERSION 3.0)
project(ActivityRegister)

set(PDCurses_DIR "C:/Users/krill/CLionProjects/Activity_register")

link_directories(${PDCurses_DIR})

add_executable(ActivityRegister main.cpp)

target_link_libraries(ActivityRegister pdcurses)
