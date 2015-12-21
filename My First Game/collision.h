/** Par Anton Claes (a.claes96@gmail.com)
  * contient des fonctions basiques de gestion des collisions, par AABB notament
  **/

#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

#include <GL/GL.h>
#include <GL/glu.h>
#include "geometry.h"

//boite de collision tridimentionnelle
struct AABB3D{
    //il suffit de 2 pts pour definir une AABB en 3d
    Point coordMin;
    Point coordMax;
};
typedef struct AABB3D AABB3D;

//fonction qui determine si un point est dans une AABB
bool point_ds_AABB3D(Point ptATester, AABB3D box);

#endif // COLLISION_H_INCLUDED
