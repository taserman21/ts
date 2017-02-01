// BUTTONS_CPP \\

#include "buttons.hpp"

Button::Button(SDL_Window *buttWindow, int buttW, int buttH, int buttX, int buttY)
{
    buttRenderer = SDL_CreateRenderer(buttWindow, -1, SDL_RENDERER_PRESENTVSYNC);
    
    buttSurface  = SDL_CreateRGBSurface(0, 20, 20, 20, 0, 0, 0, 0);
    
    buttRect.w = buttW;
    buttRect.h = buttH;
    buttRect.x = buttX;
    buttRect.y = buttY;
}
    