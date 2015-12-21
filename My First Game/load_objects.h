#include <gl/gl.h>//-->OGL
#include <gl/glu.h>
#include "defines.h"//defines...
#include <stdio.h>//-->lecture des fichiers
#include <stdlib.h>
#include <string.h>

/*---Fonctions---*/
int gen_gl_list_from(const char *file, int listId);//fonction principale
int get_nb_spaces(char *chaine);//retourne le nombre d'espaces dans une ligne
int get_path(const char *filename, char *path);//donne le dossier d'un fichier
int get_name(const char *filename, char *name);//donne le nom relatif "   "
int name_type(const char *filename);//si le nom d'un fichier est complet (ac chemin )
//ou relatif(sans chemin)


/*---structures---*/
typedef struct{
    double x;
    double y;
    double z;
}Point;//-->point

typedef struct{
    double x;
    double y;
}TexCoor;//-->Coordonnée de texture

typedef struct{
    int idPt1;//-->Id du point 1 de la face.
    int idPt2;//etc..
    int idPt3;
    int idPt4;

    int idTexCoor1;//-->Id de la coor. de texture n°1
    int idTexCoor2;//etc..
    int idTexCoor3;
    int idTexCoor4;

    int nbPts;//nombre de pts sur la face
}Face;//-->stocke la definition d'une face

