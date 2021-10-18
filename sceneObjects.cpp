#include <iostream>
#include <vector>
#include "objectInfo.h"

using std::vector;

///////////////////////////// STAY OBJECTS /////////////////////////////

vector<ObjectData> wall() // NOT DO YET
{
    vector<ObjectData> wall;

    wall[0].type = ObjectType::WALL;
    wall[0].elementSymbol = 'I';

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
            field[i][j].xCoordinate = j;
            field[i][j].yCoordinate = i;
        }


    }

    return field;
}

