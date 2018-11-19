#include <iostream>
#include "constants.h"
#include <SDL.h> 

int main(int argc, char* argv[])
{
    // Initialize SDL2 library
    if (0 != SDL_Init(SDL_INIT_EVERYTHING))
    { 
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }   

    // Create a window and default renderer
    int iflags = SDL_WINDOW_SHOWN;
    SDL_Window* pWindow = nullptr; 
    SDL_Renderer* pRenderer = nullptr;
    SDL_CreateWindowAndRenderer(constants::DISPLAY_WIDTH, constants::DISPLAY_HEIGHT, 
        iflags, &pWindow, &pRenderer);

    // Set window title
    if (nullptr != pWindow)
    {
        SDL_SetWindowTitle(pWindow, constants::TITLE);
    }  

    // Delay 5 seconds to show window
    SDL_Delay(5000);  

    // Destory renderer
    if (nullptr != pRenderer)
    {
        SDL_DestroyRenderer(pRenderer);
        pRenderer = nullptr;
    }

    // Destory window
    if (nullptr != pWindow)
    {
        SDL_DestroyWindow(pWindow);
        pWindow = nullptr;
    }    

    // Quit SDL2
    SDL_Quit();

    return 0;
}