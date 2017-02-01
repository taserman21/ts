// MOVEMENT_HPP \\

#ifndef MOVEMENT_HPP
#define MOVEMENT_HPP

#include "graphics.hpp"

int jump()
{
    int jMin = sheepR.y;
    
    int jMax = sheepR.y - 200;
    
    while(1)
    {
        while(sheepR.y != jMax)
        {
            sheepR.y = sheepR.y - 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        while(sheepR.y != jMin)
        {
            sheepR.y = sheepR.y + 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        break;
    }
}

int moveLeft()
{
    sheepR.x = sheepR.x - 20;
}

int moveRight()
{
    sheepR.x = sheepR.x + 20;
}

int jumpLeft()
{
    int jLMin = sheepR.y;
    
    int jLMax = sheepR.y - 200;
    
    while(1)
    {
        while(sheepR.y != jLMax)
        {
            sheepR.y = sheepR.y - 20;
            
            sheepR.x = sheepR.x - 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        while(sheepR.y != jLMin)
        {
            sheepR.y = sheepR.y + 20;
            
            sheepR.x = sheepR.x - 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        break;
    }
}

int jumpRight()
{
    int jRMin = sheepR.y;
    
    int jRMax = sheepR.y - 200;
    
    while(1)
    {
        while(sheepR.y != jRMax)
        {
            sheepR.y = sheepR.y - 20;
            
            sheepR.x = sheepR.x + 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        while(sheepR.y != jRMin)
        {
            sheepR.y = sheepR.y + 20;
            
            sheepR.x = sheepR.x + 20;
            
            renderPlayer();
            
            SDL_Delay(20);
        }
        
        SDL_Delay(200);
        
        break;
    }
}

int bulletTX;

int bulletTY;

int moveBullet()
{
    if(bulletExists == true)
    {
        if(bulletR.x != bulletTX)
        {
            bulletR.x = bulletR.x + 20;
        }
        
        if(bulletR.y != bulletTY)
        {
            bulletR.y = bulletR.y + 20;
        }
        
        if(bulletR.x == bulletTX && bulletR.y == bulletTY)
        {
            bulletExists == false;
        }
    }
}

int shoot()
{
    createBullet();
    
    moveBullet();
}

#endif