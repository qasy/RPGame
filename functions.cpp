
#include <iostream>
#include <array>

// char  DataScene()
// {
//     const int x = 96;
//     const int y = 27;

//         char screen[y][x];

//     for (int i = 0; i < y; ++i)
//     {
//         if ((i > 5)&(i < 22))
//         {
//             for (int j = 0; j < x ; ++j)
//             {
//                 screen[i][j] = ' ';
//             }
//         }
//         else
//         {
//             for (int j = 0; j < x ; ++j)
//             {
//                 screen[i][j] = 'X';
//             }
//         }

//     }
//     return screen;


// }

void DisplayScene(char screen[27][96])
{


    //const int x = 96;
    //const int y = 27;

       for (int i = 0; i < 27; ++i)
    {
        for (int j = 0; j < 96 ; ++j)
        {
            std::cout <<  screen[i][j];
        }

        std::cout << '\n';
    }
}

int *retenArray(int arr[])
{
    return arr;
}

//array<int, 5> &retArray(array<int, 5> &arr)
//{
//    return arr;
//}


