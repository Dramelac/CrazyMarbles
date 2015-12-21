#ifndef OBJ_H_INCLUDED
#define OBJ_H_INCLUDED

#include <GL/gl.h>
#include <GL/glu.h>
#include "defines.h"
#include "collision.h"//doit etre inclut apres les declaration de structure, pour qu'elles soient connues a ce moment
#include "geometry.h"
#include "randspawn.h"

/*---structures---*/

struct TexCoor{
    double x;
    double y;
};//-->Coordonnée de texture
typedef struct TexCoor TexCoor;

struct VertexNormal{
    double x;
    double y;
    double z;
};
typedef struct VertexNormal VertexNormal;

struct Face{
    int idPt1;//-->Id du point 1 de la face.
    int idPt2;//etc..
    int idPt3;
    int idPt4;

    int idTexCoor1;//-->Id de la coor. de texture n°1
    int idTexCoor2;//etc..
    int idTexCoor3;
    int idTexCoor4;

    int idVNormal1;
    int idVNormal2;
    int idVNormal3;
    int idVNormal4;

    int nbPts;//nombre de pts sur la face
};//-->stocke la definition d'une face
typedef struct Face Face;



class objet
{
    protected:
        GLuint glListId;
        GLuint texture;//texture de l'objet. N'est ici que pr pouvoir etre detruite a la fin
    public:
        objet();
        ~objet();
        int load(const char *filename);
        void disp();
        AABB3D relBoundingBox;//AABB de l'objet. Calculee au chargement. sans compter le deplacement
        AABB3D finBoundingBox;//AABB finale de l'objet, apres positionnement
        Point position;//position que l'objet occupera dans la scene. Les coordonnes seront calculees a partir de la position actuelle de la matrice
};
typedef class objet objet;

class robot
{
    public:
        Point position;
        objet shape;
        void kill();
        int z;//rotation autour de z pour rendre plus vivant

};
typedef class robot robot;

/* Petites fonctions utiles pour la lecture du .obj*/
int get_nb_spaces(char *chaine);//retourne le nombre d'espaces dans une ligne
int get_path(const char *filename, char *path);//donne le dossier d'un fichier
int get_name(const char *filename, char *name);//donne le nom relatif "   "
int name_type(const char *filename);//si le nom d'un fichier est complet (ac chemin )
//ou relatif(sans chemin)

#endif // OBJ_H_INCLUDED
