#include "level.hpp"
#include "player.hpp"
#include <iostream>

int main()
{
    // Initialize the Mersenne algorithm to generate a random 32 bits number

    // Set up size of map
    short height{30};
    short width{30};

    // Create base of the map for all levels
    short area[height][width]{};

    createMap(&area[0][0], height, width);
    Player player;
    createPlayer(&area[0][0], height, width, &player);

    // add npc
    // add player
    // loop
    //----

    // renderWorld(&area[0][0], height, width);
    //----

    // std::system("reset");

    return 0;
}