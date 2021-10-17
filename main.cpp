#include "level.hpp"
#include <iostream>

int main() {
  short height{10};
  short width{10};

  // Create base of the map for all levels
  short area[height][width]{};

  createMap(&area[0][0], height, width);
  // add npc
  // add player
  // loop
  //----

  renderWorld(&area[0][0], height, width);
  //----

  // std::system("reset");

  return 0;
}