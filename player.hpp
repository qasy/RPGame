#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "params.hpp"

struct Player
{
    short xCoordinate{};
    short yCoordinate{};
    CellType::CellType type;
};

// The function return player variable with random start coordinate in range size of map
void createPlayer(short *ptrArea, const short &h, const short &w, Player *player);

#endif