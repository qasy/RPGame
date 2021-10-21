#include "level.hpp"
#include "params.hpp"
#include "player.hpp"
#include <iostream>

// The function create one level, which is consist from a map and an npc
void createLevel();

// The function create map from area, adding obstacles and wall
void createMap(short *ptrArea, const short &h, const short &w)
{
    createWall(ptrArea, h, w);
    createObstacles(ptrArea, h, w);
}

// The function add obstacles on the area
void createObstacles(short *ptrArea, const short &h, const short &w)
{
    short hCenter = static_cast<short>(h / 2);
    short wCenter = static_cast<short>(w / 2);

    for (int row = hCenter - 1; row < hCenter + 1; ++row)
    {
        for (int col = wCenter - 1; col < wCenter + 1; ++col)
        {
            *(ptrArea + col + row * w) = CellType::WALL;
        }
    }
}

// The function add wall on the area
void createWall(short *ptrArea, const short &h, const short &w)
{
    for (int row = 0; row < h; ++row)
    {
        for (int col = 0; col < w; ++col)
        {
            if ((col == 0) || (row == 0) || (col == w - 1) || (row == h - 1))
                *(ptrArea + col + row * w) = CellType::WALL;
        }
    }
}

// The function update all symbols on map and display the result
void renderWorld(short *ptrOrigWorld, const short &h, const short &w, const Player *player)
{
    short dispWorld[h][w]{0};
    std::copy(ptrOrigWorld, ptrOrigWorld + h * w, &dispWorld[0][0]);

    dispWorld[player->yCoordinate][player->xCoordinate] = CellType::PLAYER;

    for (int row = 0; row < h; ++row)
    {
        for (int col = 0; col < w; ++col)
        {
            std::cout << *(&dispWorld[0][0] + col + row * w) << " ";
        }
        std::cout << '\n';
    }
}
