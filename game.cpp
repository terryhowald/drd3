#include "game.h"
#include <iostream>
#include "constants.h"

Game::Game() : m_pWindow(nullptr), m_pRenderer(nullptr)
{
    // Initialize SDL2 library
    if (0 != SDL_Init(SDL_INIT_EVERYTHING))
    { 
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return;
    }   

    // Create a window and default renderer
    int iflags = SDL_WINDOW_SHOWN;
    SDL_CreateWindowAndRenderer(constants::DISPLAY_WIDTH, constants::DISPLAY_HEIGHT, 
        iflags, &m_pWindow, &m_pRenderer);

    // Set window title
    if (nullptr != m_pWindow)
    {
        SDL_SetWindowTitle(m_pWindow, constants::TITLE);
    }  

    // Initialize SDL2 Image library
    IMG_Init(IMG_INIT_PNG);
}

Game::~Game()
{
    // Destory renderer
    if (nullptr != m_pRenderer)
    {
        SDL_DestroyRenderer(m_pRenderer);
        m_pRenderer = nullptr;
    }

    // Destory window
    if (nullptr != m_pWindow)
    {
        SDL_DestroyWindow(m_pWindow);
        m_pWindow = nullptr;
    }    

    // Shutdown SDL2 Image
    IMG_Quit();

    // Quit SDL2
    SDL_Quit();
}

void Game::New()
{
    // Delay 5 seconds
    SDL_Delay(5000);
}