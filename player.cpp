#include "params.hpp"
#include "player.hpp"
#include <iostream>
#include <random>

// The function return player variable with random start coordinate in range size of map
void createPlayer(short *ptrArea, const short &h, const short &w, Player *player)
{
    // Initialize the Mersenne algotihm to generate random start coordinate
    std::random_device rd;
    std::mt19937 mersenne(rd());

    short x{0};
    short y{0};
    short rndNum{0};
    bool isPositionRight = false;

    do
    {
        // Set the upper threshold by dividing with a remainder
        // and multiply by ourselves for a positive value
        rndNum = mersenne();
        x      = (rndNum * rndNum) % w;
        rndNum = mersenne();
        y      = (rndNum * rndNum) % h;

        isPositionRight = (*(ptrArea + x + y * w) != CellType::WALL);

    } while (!isPositionRight);

    player->type        = CellType::PLAYER;
    player->xCoordinate = x;
    player->yCoordinate = y;
}
