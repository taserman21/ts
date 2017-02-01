// MAIN_CPP \\

#include <iostream>

#include <string>

#include "graphics.hpp"

#include "movement.hpp"

#include "events.hpp"

const int width  = 1366;  
const int height = 768;

int score;

std::string  scoreStr;

int coutError();

int main(int argc, char *argv[])
{
    if(SDL_Init(SDL_INIT_VIDEO < 0))
    {
        return 0;
        
        std::cout << "ERROR: SDL_Init Failed!!" << std::endl;
    }
    
    IMG_Init(IMG_INIT_PNG);
    
    window        = SDL_CreateWindow("Time Sheep", 0, 0, 1366, 768, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
    
    renderer      = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    
    coutError();
    
    getGameInput();
    
    SDL_Quit();
    
    return 1;
}