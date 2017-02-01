// BUTTONS_HPP \\

#include "graphics.hpp"

class Button
{
    private:
    
    SDL_Renderer *buttRenderer;
    
    SDL_Rect     buttRect;
    
    public:
    
    Button(SDL_Window*, int, int, int, int);
    
    int buttRender()
    {
        SDL_FillRect(buttSurface, &buttRect, SDL_MapRGB(buttSurface->format, 86, 0, 146));
    }
};
    
    