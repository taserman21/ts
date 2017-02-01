// SDL_HPP \\

#ifndef SDL_HPP
#define SDL_HPP

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

int coutError()
{
    std::cout << "ERROR: " << SDL_GetError() << std::endl;
}

int coutErrorFileLine(const char *file, const char *line)
{
    std::cout << "ERROR(" << file << ", " << line << "): " << SDL_GetError() << std::endl;
}

#endif