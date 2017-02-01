// GRAPHICS_HPP \\

#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include "sdl.hpp"

SDL_Window   *window;

SDL_Renderer *renderer;

SDL_Surface  *surface;

SDL_Texture  *backgroundT;

SDL_Texture  *sheepT;

SDL_Texture  *bulletT;

SDL_Rect     backgroundR;

SDL_Rect     sheepR;

SDL_Rect     bulletR;

SDL_Colour   Purple = {86, 0, 146}; 

bool backgroundCreated(false);

int renderBackground()
{
    if(backgroundCreated == false)
    {
        surface           = IMG_Load("images/background.png");
        
        backgroundT       = SDL_CreateTextureFromSurface(renderer, surface);
        
        backgroundCreated = true;
    }
    
    backgroundR.w = 1366;
    backgroundR.h = 768;
    backgroundR.x = 0;
    backgroundR.y = 0;
    
    SDL_RenderCopy(renderer, backgroundT, NULL, &backgroundR);
}

bool playerCreated(false);

int renderPlayer()
{   
    if(playerCreated == false)
    {
        surface       = IMG_Load("images/sheep.png");
        
        sheepT        = SDL_CreateTextureFromSurface(renderer, surface);
        
        playerCreated = true;
        
        sheepR.w       = 200;
        sheepR.h       = 200;
        sheepR.x       = 0;
        sheepR.y       = 568;
    }
    
    SDL_RenderCopy(renderer, sheepT, NULL, &sheepR);
}

bool bulletExists(false);

int createBullet()
{
    surface = IMG_Load("images/bullet.png");
    
    bulletT = SDL_CreateTextureFromSurface(renderer, surface);
    
    SDL_RenderCopy(renderer, bulletT, NULL, &bulletR);
}

int renderBullet()
{
    SDL_RenderCopy(renderer, bulletT, NULL, &bulletR);
}

#endif