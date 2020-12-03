#pragma once
#ifndef CH8EM_MACROS_H
#define CH8EM_MACROS_H

#include <stdint.h>
#include <SDL2/SDL.h>

#define WINDOW_WIDTH 64
#define WINDOW_HEIGHT 32
#define SCALING 10

#define BLACK_COLOR 0xFF000000
#define WHITE_COLOR 0xFFFFFFFF

#define MEMORY_SIZE 4096
#define FPS 60
#define MILLIS_PER_CYCLE 100 / FPS

#define VF 0xf

#define PROG_START 0x200
#define PROG_START_ETI660 0x600

#define MAX_ROM_SIZE 0xe00
#define DISPLAY_SIZE 2048


static const uint8_t chip8_font[80] = {
        0xF0, 0x90, 0x90, 0x90, 0xF0,  // 0
        0x20, 0x60, 0x20, 0x20, 0x70,  // 1
        0xF0, 0x10, 0xF0, 0x80, 0xF0,  // 2
        0xF0, 0x10, 0xF0, 0x10, 0xF0,  // 3
        0x90, 0x90, 0xF0, 0x10, 0x10,  // 4
        0xF0, 0x80, 0xF0, 0x10, 0xF0,  // 5
        0xF0, 0x80, 0xF0, 0x90, 0xF0,  // 6
        0xF0, 0x10, 0x20, 0x40, 0x40,  // 7
        0xF0, 0x90, 0xF0, 0x90, 0xF0,  // 8
        0xF0, 0x90, 0xF0, 0x10, 0xF0,  // 9
        0xF0, 0x90, 0xF0, 0x90, 0x90,  // A
        0xE0, 0x90, 0xE0, 0x90, 0xE0,  // B
        0xF0, 0x80, 0x80, 0x80, 0xF0,  // C
        0xE0, 0x90, 0x90, 0x90, 0xE0,  // D
        0xF0, 0x80, 0xF0, 0x80, 0xF0,  // E
        0xF0, 0x80, 0xF0, 0x80, 0x80   // F
};

static const SDL_Scancode keymap[16] = {
        SDL_SCANCODE_1,
        SDL_SCANCODE_2,
        SDL_SCANCODE_3,
        SDL_SCANCODE_4,
        SDL_SCANCODE_Q,
        SDL_SCANCODE_W,
        SDL_SCANCODE_E,
        SDL_SCANCODE_R,
        SDL_SCANCODE_A,
        SDL_SCANCODE_S,
        SDL_SCANCODE_D,
        SDL_SCANCODE_F,
        SDL_SCANCODE_Z,
        SDL_SCANCODE_X,
        SDL_SCANCODE_C,
        SDL_SCANCODE_V
};

#endif //CH8EM_MACROS_H