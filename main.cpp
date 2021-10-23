#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#include "sceneObjects.h"
#include "npsObjects.h"
#include "functions.h"

int main()
{
    using namespace std;

    unsigned int sceneLenth = 10;
    unsigned int sceneWidth = 10;

    unsigned int xObjectCoordinate = 5;
    unsigned int yObjectCoordinate = 5;


    vector <vector <ObjectData>> constScene = wall(sceneLenth, sceneWidth);
    vector <vector <ObjectData>> setScene = field(10,10);
    setScene = objectsToScene(constScene, setScene,npsObject(),xObjectCoordinate , yObjectCoordinate);
    toScreen(setScene);

    char wKey ;
    ;

    while( getchar() =='w')
    {
       system("clear");
       yObjectCoordinate--;
       setScene = objectsToScene(constScene, setScene,npsObject(),xObjectCoordinate , yObjectCoordinate);
       toScreen(setScene);
    }

    //To clear the screen in Visual C++, utilize the code: system("CLS");
    //The standard library header file <stdlib. h> is needed

    return 0;




}

