/** Par Anton Claes (a.claes96@gmail.com)
  * contient des structures de geometrie 3D
  **/
#ifndef GEOMETRY_H_INCLUDED
#define GEOMETRY_H_INCLUDED

struct Point{
    double x;
    double y;
    double z;
};//-->point
typedef struct Point Point;

// definit une orientation dans l'espace
struct Orientation{
    double x;
    double y;
    double z;
};
typedef struct Orientation Orientation;

struct Vector{
    Point origine;
    double angleY, angleZ;
    double longueur;
};
typedef struct Vector Vector;


#endif // GEOMETRY_H_INCLUDED
