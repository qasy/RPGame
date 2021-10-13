#include <iostream>

namespace CellType
{
    enum CellType
    {
        WALL,
        OPEN,
    };
}

void displayWorld(short localWorld[10][10])
{
    std::cout << sizeof(localWorld) << '\n';
}

int main()
{
    short levelMask[10][10] = {0};

    std::cout << levelMask << '\n';
    displayWorld(levelMask);
    // std::cout < < < < '\n';
    return 0;
}