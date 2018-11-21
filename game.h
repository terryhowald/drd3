#ifndef GAME_H
#define GAME_H

#include <SDL.h> 
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

class Game 
{
public:
    Game();
    ~Game();
    void New();

private:

    SDL_Window* m_pWindow; 
    SDL_Renderer* m_pRenderer;

};


#endif // GAME_H