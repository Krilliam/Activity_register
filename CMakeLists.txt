cmake_minimum_required(VERSION 3.17)
project(Activity_register)
set(CMAKE_CXX_STANDARD 14)
link_directories(C:/msys64/mingw64/lib)
set(SOURCE_FILES
        Date.h
        Date.cpp
        Activity.h
        Activity.cpp
        DateActivityPair.h
        DateActivityPair.cpp
        Register.h
        Register.cpp
        Main.cpp
        Main.h
        )

add_executable(Activity_register ${SOURCE_FILES})

target_link_libraries(Activity_register pdcurses) # Collega la libreria ncurses
