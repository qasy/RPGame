#include <array>
#include <iostream>
#include <vector>

#include "sceneObjects.h"
#include "npsObjects.h"

using std::vector;

//keep data scene elements without objects (walls, trees, etc)


vector<vector<ObjectData>> sceneBuffer( vector<vector<ObjectData>> sceneObject,
                                        unsigned int &sceneLenth, unsigned int &sceneWidth)
{
    using namespace std;

    vector<vector<ObjectData>> buffer(sceneWidth,vector<ObjectData>(sceneLenth));

    unsigned int objectVectorLenth = sceneObject.size();
    unsigned int objectVectorWidth = sceneObject[0].size();

    for (unsigned int  i = 0; i < objectVectorWidth; ++i)
    {
        for (unsigned int  j = 0; j < objectVectorLenth; ++j)
        {
            unsigned int xCoordinate = sceneObject[i][j].xCoordinate;
            unsigned int yCoordinate = sceneObject[i][j].yCoordinate;
            buffer[yCoordinate][xCoordinate] = sceneObject[i][j];
        }
    }

    return buffer;
}

void toScreen( vector<vector<ObjectData>> Buffer)
{
    using namespace std;
    unsigned int objectVectorLenth = Buffer.size();
    unsigned int objectVectorWidth = Buffer[0].size();

    for (unsigned int  i = 0; i < objectVectorWidth; i++)
    {
        for (unsigned int  j = 0; j < objectVectorLenth ; j++)
        {
            cout <<  Buffer[i][j].elementSymbol << flush;
        }
        cout << '\n';
    }
}

vector<vector<ObjectData>> objectsToScene(vector<vector<ObjectData>> constScene,
                                          vector<vector<ObjectData>> scene,
                                          vector<vector<ObjectData>> sceneObject,
                                          unsigned int sceneCoordinateX,
                                          unsigned int sceneCoordinateY)
{
    scene = constScene;
    unsigned int objectVectorLenth = sceneObject.size();
    unsigned int objectVectorWidth = sceneObject[0].size();

    for (unsigned int i = 0 ; i < objectVectorWidth; ++i)
    {
        for (unsigned int j = 0; j < objectVectorLenth; ++j)
        {
            scene[sceneCoordinateY + i][sceneCoordinateX + j] = sceneObject[i][j];
        }
    }
    return scene;
}












