// EVENTS_HPP \\

#ifndef EVENTS_HPP
#define EVENTS_HPP

#include "movement.hpp"

#include "graphics.hpp"

SDL_Event event;

bool bulletCreated();

int quit()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}

int loopsDone(0);

int mouseX;

int mouseY;

int getGameInput()
{
    int leftPressed(0);
    
    int rightPressed(0);
    
    while(1)
    {   
        if(SDL_PollEvent(&event) == 0)
        {
            std::cout << "SDL_PollEvent(&event) == 0" << std::endl;
        }
        
        if(leftPressed != 0)
        {
            leftPressed--;
        }
        
        if(rightPressed != 0)
        {
            rightPressed--;
        }
        
        if(event.type == SDL_QUIT)
        {
            break;
        }
        
        if(event.type == SDL_KEYDOWN)
        {   
            std::cout << "SDL_KEYDOWN" << std::endl;
            
            if(event.key.keysym.sym == SDLK_F4)
            {
                SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN);
            }
            
            if(event.key.keysym.sym == SDLK_F5)
            {
                SDL_SetWindowFullscreen(window, 0);
            }
            
            if(event.key.keysym.sym == SDLK_F6)
            {
                quit();
            }
            
            if(event.key.keysym.sym == SDLK_SPACE || event.key.keysym.sym == SDLK_w)
            {
                if(leftPressed != 0)
                {
                    jumpLeft();
                }
                
                if(rightPressed != 0)
                {
                    jumpRight();
                }
                
                else
                {
                    jump();
                }
            }
            
            if(event.key.keysym.sym == SDLK_a)
            {
                moveLeft();
                
                leftPressed = 4;
            }
            
            if(event.key.keysym.sym == SDLK_d)
            {
                moveRight();
                
                rightPressed = 4;
            }
        }
        
        if(event.type == SDL_MOUSEBUTTONDOWN)
        {
            bulletR.x = sheepR.x + 200;
            
            bulletR.y = sheepR.y;
            
            SDL_GetMouseState(&mouseX, &mouseY);
            
            std::cout << 
            
            moveBullet();
        }
        
        SDL_RenderClear(renderer);
        
        renderBackground();
        
        renderPlayer();
        
        SDL_RenderPresent(renderer);
        
        loopsDone++;
        
        std::cout << "Loops Done: " << loopsDone << std::endl;
        
        std::cout << "SDL_PollEvent(&event) = " << SDL_PollEvent(&event) << std::endl;
    }
}

#endif