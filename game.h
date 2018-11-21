#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

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