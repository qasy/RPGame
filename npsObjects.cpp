#include <vector>
#include "objectInfo.h"

using std::vector;
///////////////////////////// MOVE OBJECTS /////////////////////////////

vector<vector<ObjectData>> npsObject()
{
    int lenth = 2;
    int width = 2;
    vector<vector<ObjectData>> nps(width, vector<ObjectData>(lenth));
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < lenth; j++)
        {
            nps[i][j].type = ObjectType::ENEMY;
            nps[i][j].elementSymbol = '@';
        }
    }
//    nps[0].type = ObjectType::ENEMY;
//    nps[0].elementSymbol = '@';
//    nps[0].xCoordinate = xCoordinate;
//    nps[0].yCoordinate = yCoordinate;

    return nps;
}



