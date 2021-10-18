#ifndef OBJECTINFO_H
#define OBJECTINFO_H

enum ObjectType
{
    EMPTY,
    WALL,
    PLAYER,
    ENEMY

};

struct ObjectData
{
  ObjectType type;
  unsigned int xCoordinate;
  unsigned int yCoordinate;
  char elementSymbol;

};
#endif // OBJECTINFO_H
