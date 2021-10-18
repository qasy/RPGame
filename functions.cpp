
#include <iostream>
#include <array>
#include <iostream>
#include <vector>
#include <typeinfo>

#include "sceneObjects.h"
#include "npsObjects.h"

using std::vector;

//keep data scene elements without objects (walls, trees, etc)
vector<vector<char>> sceneData()
{

}

// keep data all objects elements on scene
vector<vector<ObjectData>> sceneBuffer(vector<vector<ObjectData>> sceneObject,
                                       unsigned int sceneLenth, unsigned int sceneWidth)
{
     using namespace std;

    vector<vector<ObjectData>> Buffer(sceneWidth,vector<ObjectData>(sceneLenth));
    unsigned int objectVectorLenth = sceneObject.size();
    unsigned int objectVectorWidth = sceneObject[0].size();

    for (unsigned int  i = 0; i < objectVectorWidth; ++i)
    {
        for (unsigned int  j = 0; j < objectVectorLenth; ++j)
        {
            unsigned int xCoordinate = sceneObject[i][j].xCoordinate;
            unsigned int yCoordinate = sceneObject[i][j].yCoordinate;
            Buffer[yCoordinate][xCoordinate] = sceneObject[i][j];


        }

    }

    return Buffer;
}
void toScreen(vector<vector<ObjectData>> Buffer)
{
     using namespace std;

    unsigned int BufferLenth = Buffer.size();
    unsigned int BufferWidth = Buffer[0].size();

    for (unsigned int  i = 0; i < BufferWidth; ++i)
    {
        for (unsigned int  j = 0; j < BufferLenth; ++j)
        {


            cout <<  Buffer[i][j].elementSymbol;
        }
        cout << '\n';
    }
}












