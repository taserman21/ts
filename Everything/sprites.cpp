// SPRITES_CPP \\

Sprite::Sprite(SDL_Renderer *spriteRenderer, int type)
{
    spriteType = type;
}

sprite::setPos(int w, int h, int x, int y)
{
    spriteRect.w = w;
    spriteRect.h = h;
    spriteRect.x = x;
    spriteRect.y = y;
}

sprite::getInput()
{
    if(spriteType == SPRITE_PLAYER)
    {
        while(1)
        {
            if(event.type == SDL_KEYDOWN)

sprite::setImage(const char imgChar)
{
    spriteSurface = IMG_Load(imgChar);
    
    spriteTexture = SDL_CreateTextureFromSurface(&spriteRenderer, spriteSurface);
}    

Sprite:render()
{
    SDL_RenderCopy(&spriteRenderer, spriteTexture, NULL, spriteRect);
}