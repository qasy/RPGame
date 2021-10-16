#include "level.hpp"
#include <iostream>

// The function create one level, which is consist from a map and an npc
void createLevel();

// The function create map from field, adding obstacles and wall
void createMap(short *ptrField, const short &h, const short &w)
{
    createWall(ptrField, h, w);
    createObstacles(ptrField, h, w);
}

// The function add obstacles on the field
void createObstacles(short *ptrField, const short &h, const short &w)
{
    short hCenter = static_cast<short>(h / 2);
    short wCenter = static_cast<short>(w / 2);

    for (int row = hCenter - 1; row < hCenter + 1; ++row)
    {
        for (int col = wCenter - 1; col < wCenter + 1; ++col)
        {
            *(ptrField + col + row * w) = CellType::WALL;
        }
    }
}

// The function add wall on the field
void createWall(short *ptrField, const short &h, const short &w)
{
    for (int row = 0; row < h; ++row)
    {
        for (int col = 0; col < w; ++col)
        {
            if ((col == 0) || (row == 0) || (col == w - 1) || (row == h - 1))
                *(ptrField + col + row * w) = CellType::WALL;
        }
    }
}

// The function update all symbols on map and display the result
void renderWorld(short *ptrWorld, const short &h, const short &w)
{
    for (int row = 0; row < h; ++row)
    {
        for (int col = 0; col < w; ++col)
        {
            std::cout << *(ptrWorld + col + row * w) << " ";
        }
        std::cout << '\n';
    }
}
