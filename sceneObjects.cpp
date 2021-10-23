#include <iostream>
#include <vector>
#include "objectInfo.h"

using std::vector;

///////////////////////////// STAY OBJECTS /////////////////////////////

vector<vector<ObjectData>> wall(unsigned int sceneLenth, unsigned int sceneWidth)
{
    vector<vector<ObjectData>> wall(sceneWidth,vector<ObjectData>(sceneLenth));

    for(unsigned int i = 0; i < sceneWidth; i++)
    {
        if(i == 0 || i == (sceneWidth - 1))
        {
            for( unsigned int j = 0; j < sceneLenth; j++)
            {
                wall[i][j].type = ObjectType::WALL;
                wall[i][j].elementSymbol = 'I';
            }
        }
        else
        {
            //            wall[i][0].type = ObjectType::WALL;
            //            wall[i][0].elementSymbol = 'I';

            //            wall[i][(sceneLenth - 1)].type = ObjectType::WALL;
            //            wall[i][(sceneLenth - 1)].elementSymbol = 'I';

            for( unsigned int j = 0; j < sceneLenth; j++)
            {
                if(j == 0|| j == sceneLenth -1)
                {
                    wall[i][j].type = ObjectType::WALL;
                    wall[i][j].elementSymbol = 'I';
                }
                else
                {
                    wall[i][j].type = ObjectType::EMPTY;
                    wall[i][j].elementSymbol = ' ';
                }
            }
        }
    }



    return wall;
}

// field for EMPTY(OPEN) iterraction (move)

vector<vector<ObjectData>> field(unsigned int lenth,unsigned int width)
{
    vector<vector<ObjectData>> field(width,vector<ObjectData>(lenth));

    for(unsigned int i = 0; i < width ; i++)
    {
        for(unsigned int j = 0; j < lenth ; j++)
        {
            field[i][j].type = ObjectType::EMPTY;
            field[i][j].elementSymbol = '0';
            //            field[i][j].xCoordinate = j;
            //            field[i][j].yCoordinate = i;
        }


    }

    return field;
}

