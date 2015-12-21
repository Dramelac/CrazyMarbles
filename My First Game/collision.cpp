#include <GL/GL.h>
#include <GL/glu.h>
#include <iostream>
#include "collision.h"

using namespace std;

bool point_ds_AABB3D(Point ptATester, AABB3D box)
{
    if( //au dela des coordonnees min
        ptATester.x >= box.coordMin.x &&
        ptATester.y >= box.coordMin.y &&
        ptATester.z >= box.coordMin.z &&
        //pas au dela des coordonnees max
        ptATester.x <= box.coordMax.x &&
        ptATester.y <= box.coordMax.y &&
        ptATester.z <= box.coordMax.z)

        return true;
    else
        return false;

}
