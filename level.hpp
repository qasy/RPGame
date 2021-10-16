// Enumeration of the elements that make up the map
namespace CellType
{
    enum CellType
    {
        OPEN,
        WALL,
        PLAYER,
        ENEMY,
    };
}

// The function create one level, which is consist from a map and an npc
void createLevel();

// The function create map from field, adding obstacles and wall
void createMap(short *ptrField, const short &h, const short &w);

// The function add obstacles on the field
void createObstacles(short *ptrField, const short &h, const short &w);

// The function add wall on the field
void createWall(short *ptrField, const short &h, const short &w);

// The function update all symbols on map and display the result
void renderWorld(short *ptrWorld, const short &h, const short &w);
