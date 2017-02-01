// SPRITES_HPP \\

#include "graphics.hpp"

#include <string>

enum spriteTypeEnum
{
    SPRITE_PLAYER,
    SPRITE_OBJECT
};
    

class Sprite
{
    private:
    
    SDL_Event *spriteEvent;
    
    public:
    
    Sprite(SDL_Renderer, int);
    
    int spriteInfo[4];
    
    int spriteType;
    
    SDL_Surface  *spriteSurface;
    
    SDL_Texture  *spriteTexture;
    
    SDL_Rect spriteRect;
    
    int getInput();
    
    int setPos(int, int, int, int);
    
    int setImage(const char imgChar);
    
    int render();
}