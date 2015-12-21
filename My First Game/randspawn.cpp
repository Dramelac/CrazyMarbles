#include "randspawn.h"

Point randSpawn()
{
    bool loaded=false;
    Point Pos;
    static int x=0;
    srand(time(NULL)+x);//init random
    x+=10;

    Pos.x = (rand() % 100);//entre -50 et 50
    Pos.y = (rand() % 100);//...
    return Pos;
}
