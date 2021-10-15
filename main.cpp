#include "functions.h"


int main()
{


    const int x = 96;
    const int y = 27;

        char screen[y][x];

    for (int i = 0; i < y; ++i)
    {
        if ((i > 5)&(i < 22))
        {
            for (int j = 0; j < x ; ++j)
            {
                screen[i][j] = ' ';
            }
        }
        else
        {
            for (int j = 0; j < x ; ++j)
            {
                screen[i][j] = 'X';
            }
        }
    }

      DisplayScene( screen);



}
