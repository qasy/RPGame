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

    player->type        = CellType::PLAYER;
    player->xCoordinate = mersenne();
    player->yCoordinate = mersenne();
}
