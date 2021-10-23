#ifndef SCENEOBJECTS_H
#define SCENEOBJECTS_H

#include <vector>
#include "objectInfo.h"

using std::vector;

vector<vector<ObjectData>> wall(unsigned int sceneLenth, unsigned int sceneWidth);
vector<vector<ObjectData>> field(unsigned int lenth,unsigned int width);

#endif // SCENEOBJECTS_H

