#include "game_logic.hpp"
#include "level.hpp"
#include "player.hpp"
#include <iostream>
#include <thread>

// If the game is running
bool isPlaying = false;

short logicFramePerSecond   = 10;
short logicFrameDuration_ms = 1000 / logicFramePerSecond; // 1'000ms in 1s
short renderFramePerSecond  = 25;

int main()
{

    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    Player player;

    // Set up size of map
    short height{10};
    short width{10};

    // Create base of the map for all levels
    short area[height][width]{0};

    createMap(&area[0][0], height, width);
    // initPlayer(&area[0][0], height, width, &player);
    // add npc

    isPlaying      = true;
    int frameCount = 0;
    while (isPlaying && frameCount < 1000)
    {
        // Logic
        //----
        getUserInput();

        playerAction();
        playerInit(&area[0][0], height, width, &player);

        // Render
        std::system("clear");
        renderWorld(&area[0][0], height, width, &player);
        //----

        ++frameCount;
        // Slow down the logic to the specified number of frames
        sleep_for(logicFrameDuration_ms * 1ms);
    }

    return 0;
}