
#include <iostream>
#include <vector>
#include "objectInfo.h"


using std::vector;
///////////////////////////// MOVE OBJECTS /////////////////////////////


vector<ObjectData> npsObject(unsigned int xCoordinate, unsigned int yCoordinate)
{
    vector<ObjectData> nps;
    nps[0].type = ObjectType::ENEMY;
    nps[0].elementSymbol = '@';
    nps[0].xCoordinate = xCoordinate;
    nps[0].yCoordinate = yCoordinate;

    return nps;
}



