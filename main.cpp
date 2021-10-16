#include "level.hpp"
#include <iostream>

int main()
{
    short height{10};
    short width{10};
    // Create base of the map for all levels
    short field[height][width]{};

    createMap(&field[0][0], height, width);

    renderWorld(&field[0][0], height, width);

    // std::system("reset");

    return 0;
}