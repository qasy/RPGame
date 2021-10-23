#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>

#include "sceneObjects.h"
#include "npsObjects.h"

void DisplayTest();
vector<vector<ObjectData>> sceneBuffer(vector<vector<ObjectData>> sceneObject,
                                       unsigned int sceneLenth, unsigned int sceneWidth);

void toScreen( vector<vector<ObjectData>> Buffer);

vector<vector<ObjectData>> objectsToScene(vector<vector<ObjectData>> constScene,
                                          vector<vector<ObjectData>> scene,
                                          vector<vector<ObjectData>> sceneObject,
                                          unsigned int sceneCoordinateX,
                                          unsigned int sceneCoordinateY);

#endif // FUNCTIONS_H
