#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <typeinfo>

#include "sceneObjects.h"
#include "npsObjects.h"

void DisplayTest();
vector<vector<ObjectData>> sceneBuffer(vector<vector<ObjectData>> sceneObject,
                                       unsigned int sceneLenth, unsigned int sceneWidth);
void toScreen(vector<vector<ObjectData>> Buffer);
#endif // FUNCTIONS_H
