
#include <iostream>
#include <array>
#include <iostream>
#include <vector>
#include <typeinfo>

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





using std::vector;

void display()
{
    using namespace std;

    int i =0;

    char a = '@';

    while (i < 2592)
    {
        cout << a;
        i++;
    }
}
// vectorChar2d DataScene(vectorChar2d & screen)
// {
//     const int x = 96;
//     const int y = 27;

//     //    char screen[y][x];

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
void DisplayScene()
{
    using namespace std;

    const int x = 96;
    const int y = 27;
    char screen[y][x];

    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x ; ++j)
        {
            cout <<  screen[i][j];
        }
        cout << '\n';
    }
}

vector<vector<char>> playerObject()
{
    vector<vector<char>> player{
        {' ', '0', ' '},
        {'/', '@', '\\'},
        {'/', ' ', '\\'}
    };

    return player;
}

vector<vector<char>> someObject()
{
    vector<vector<char>> object{
        {'\\', '|', '/'},
        {'-', '0', '-'},
        {'/', '|', '\\'}
    };

    return object;
}

void displayVector(vector<vector<char>> vector)
{
    int lenth = 69;
    int width = 27;
    char a = vector[0][0];

//      for (int i = 0; i < width; i++  )
//      {
//          for (int j = 0; j < lenth; j++  )
//          {
//              auto b = vector[i][j];

//             if (typeid(a) == typeid(b))
//             {
//                 std::cout << vector[i][j];
//             }
//             else
//                 std::cout << " ";
//          }
//          std::cout << std::endl;
//      }
    int aaa = vector.size();
    int bbb = vector[0].size();
    std::cout << aaa << std::endl;   
    std::cout << bbb << std::endl;

    vector.resize(lenth);

    for (int i = 0 ; i< lenth; i++)
    {
        vector[i].resize(width);
    }

    for (int i = 0; i < lenth; i++  )
          {
              for (int j = 0; j < width; j++  )
              {
                     std::cout << vector[i][j];
              }
              std::cout << std::endl;
          }
}












