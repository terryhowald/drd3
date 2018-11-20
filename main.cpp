#include "game.h"

int main(int argc, char* argv[])
{
    // Initialize game
    Game *pGame = new Game();

    // Start new game
    pGame->New();

    // Free game point from heap
    delete pGame;

    return 0;
}