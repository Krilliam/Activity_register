cmake_minimum_required(VERSION 3.0)
project(ActivityRegister)

set(PDCurses_DIR ${CMAKE_SOURCE_DIR}/PDCurses-master)

include_directories(${PDCurses_DIR})

find_library(PDCURSES_LIBRARY NAMES pdcurses PATHS ${PDCurses_DIR})

if (PDCURSES_LIBRARY)
    message(STATUS "Libreria PDCurses trovata: ${PDCURSES_LIBRARY}")
else ()
    message(FATAL_ERROR "Libreria PDCurses non trovata.")
endif ()

add_executable(ActivityRegister Main.cpp Register.cpp Date.cpp Activity.cpp)

target_link_libraries(ActivityRegister PRIVATE ${PDCURSES_LIBRARY})
