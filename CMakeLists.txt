cmake_minimum_required(VERSION 3.16)

project(RPGame)

add_library(level level.hpp level.cpp)
add_library(player player.hpp player.cpp)
add_library(npc npc.hpp npc.cpp)
add_executable(rpgame main.cpp)

#target_link_libraries(level PRIVATE player)

target_link_libraries(rpgame PRIVATE level 
                             PRIVATE player)
