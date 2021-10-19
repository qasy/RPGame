#include "level.hpp"
#include "player.hpp"
#include <iostream>

int main()
{
    Player player;

    // Set up size of map
    short height{10};
    short width{10};

    // Create base of the map for all levels
    short area[height][width]{0};

    createMap(&area[0][0], height, width);
    createPlayer(&area[0][0], height, width, &player);

    // add npc
    // add player
    // loop
    //----

    renderWorld(&area[0][0], height, width, &player);
    //----

    // std::system("reset");

    return 0;
}