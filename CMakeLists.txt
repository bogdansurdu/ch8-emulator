cmake_minimum_required(VERSION 3.14)
project(ch8em C)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(SDL2_INCLUDE_DIR C:/MinGW/include/include/SDL2)
set(SDL2_LIBRARY C:/MinGW/lib)

find_package(SDL2 REQUIRED sdl2)

add_executable(ch8em
        src/main.c
        src/chip8.c
        src/chip8.h src/macros.h src/output.c src/output.h
        src/chip8_instruction.h src/chip8_instruction.c src/opcode.h)

target_include_directories(ch8em SYSTEM PRIVATE ${SDL2_INCLUDE_DIR})

target_link_libraries(ch8em -lmingw32 -lsdl2main -lsdl2)
