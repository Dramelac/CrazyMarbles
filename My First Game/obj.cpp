#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "obj.h"
#include "defines.h"
#include "sdlglutils.h"
#include "geometry.h"
#include "randspawn.h"

using namespace std;

objet::objet()
{
    position.x=0;
    position.y=0;
    position.z=0;

    relBoundingBox.coordMax.x=0;
    relBoundingBox.coordMax.y=0;
    relBoundingBox.coordMax.z=0;
    relBoundingBox.coordMin.x=0;
    relBoundingBox.coordMin.y=0;
    relBoundingBox.coordMin.z=0;
}

objet::~objet()
{
    ///glDeleteTextures(1, &texture);
    ///glDeleteLists(glListId, 1);
}

int objet::load(const char *filename)
{
    glListId=glGenLists(1);

    glEnable(GL_TEXTURE_2D);
    Point *pts=NULL;
    TexCoor *texcoords=NULL;
    Face *faces=NULL;
    VertexNormal *vnormals;
    char mtlPngFile[300]= {0};

    /**
    *La lecture d'un fichier .obj doit se faire en 3 tps:
        -première lecture pour connaitre le nombre de points, faces...
        -récupération des données
        -création de la list OpenGL a partir des données réorganisées
    */

    /*---Partie 1 : première lecture---*/
    //variables :
    FILE *objfile   = NULL;
    char ligne[300] = {0};
    int nbPts=0;          //-->nb de pts recensés
    int nbTexCoors  = 0;     //--> "  " Coors de textures recensées
    int nbFaces     = 0;        //--> "  " Faces          "      "
    int nbVNormals  = 0;     //--> "  " normales de vertex "      "

    //lecture
    objfile = fopen(filename, "r");//ouverture du fichier
    if (objfile!=NULL)//-->ouverture OK
    {
        while(fgets(ligne, 300, objfile)!=NULL)//tant qu'il y a qqch à lire
        {
            switch(ligne[0])//-->premier caractere de la ligne
            {
            case 'v'://-->3 choix possibles
                if(ligne[1]=='t')//début de ligne ='vt'
                {
                    nbTexCoors++;//une coordonnée de texture de lue en +
                }
                else if(ligne[1]=='n')//normale de vertex
                {
                    nbVNormals++;
                }
                else//-->début de ligne='v '
                {
                    nbPts++;//un pt de +
                }
                break;

            case 'f'://def. d'une face
                nbFaces++;
                break;

            case 'm'://on peut aussi récupérer le fichier de matériel
                //intéret-->image de texture

                break;

            default:
                break;

            }
        }


        /**-----création des espaces nécéssaires-----*/
        pts = new Point[nbPts];
        texcoords = new TexCoor[nbTexCoors];
        faces = new Face[nbFaces];
        vnormals = new VertexNormal[nbVNormals];


        rewind(objfile);//retour au début du fichier
        int ptsCharges      = 0;
        int texCoorChargees = 0;
        int facesChargees   = 0;
        int vNormChargees   = 0;

        while(fgets(ligne, 299, objfile)!=NULL)
        {


            switch(ligne[0])
            {
            case 'v':
                if(ligne[1]=='t')
                {
                    sscanf(ligne, "vt %lf %lf", &texcoords[texCoorChargees].x,
                           &texcoords[texCoorChargees].y);
                    texCoorChargees++;
                }
                else if(ligne[1]=='n')//normales
                {
                    sscanf(ligne, "vn %lf %lf %lf", &vnormals[vNormChargees].x, &vnormals[vNormChargees].y, &vnormals[vNormChargees].z);
                    vNormChargees++;
                }
                else
                {
                    sscanf(ligne, "v %lf %lf %lf", &pts[ptsCharges].x, &pts[ptsCharges].z,
                           &pts[ptsCharges].y);
                    pts[ptsCharges].y *= -1;

                    /* Recuperation des donnees minimales et maximale pour bounding box. */
                    if(pts[ptsCharges].x>relBoundingBox.coordMax.x)//hauteur max
                        relBoundingBox.coordMax.x=pts[ptsCharges].x;

                    if(pts[ptsCharges].y>relBoundingBox.coordMax.y)
                        relBoundingBox.coordMax.y=pts[ptsCharges].y;

                    if(pts[ptsCharges].z>relBoundingBox.coordMax.z)
                        relBoundingBox.coordMax.z=pts[ptsCharges].z;

                    if(pts[ptsCharges].x<relBoundingBox.coordMin.x)
                        relBoundingBox.coordMin.x=pts[ptsCharges].x;

                    if(pts[ptsCharges].y<relBoundingBox.coordMin.y)
                        relBoundingBox.coordMin.y=pts[ptsCharges].y;

                    if(pts[ptsCharges].z<relBoundingBox.coordMin.z)
                        relBoundingBox.coordMin.z=pts[ptsCharges].z;


                    ptsCharges++;
                }
                break;
            case 'f':
                if(get_nb_spaces(ligne)==4)
                {
                    sscanf(ligne, "f %d/%d/%d %d/%d/%d %d/%d/%d %d/%d/%d",
                           &faces[facesChargees].idPt1, &faces[facesChargees].idTexCoor1, &faces[facesChargees].idVNormal1,
                           &faces[facesChargees].idPt2, &faces[facesChargees].idTexCoor2, &faces[facesChargees].idVNormal2,
                           &faces[facesChargees].idPt3, &faces[facesChargees].idTexCoor3, &faces[facesChargees].idVNormal3,
                           &faces[facesChargees].idPt4, &faces[facesChargees].idTexCoor4, &faces[facesChargees].idVNormal4);
                    faces[facesChargees].nbPts = 4;
                    //printf("+ 1 face scannee\n");
                }
                else if(get_nb_spaces(ligne)==3)
                {
                    sscanf(ligne, "f %d/%d/%d %d/%d/%d %d/%d/%d",
                           &faces[facesChargees].idPt1, &faces[facesChargees].idTexCoor1, &faces[facesChargees].idVNormal1,
                           &faces[facesChargees].idPt2, &faces[facesChargees].idTexCoor2, &faces[facesChargees].idVNormal2,
                           &faces[facesChargees].idPt3, &faces[facesChargees].idTexCoor3, &faces[facesChargees].idVNormal3);
                    faces[facesChargees].nbPts = 3;
                    //printf("+ 1 face scannee\n");

                }
                else //erreur dans le fichier
                {
                    return -1;
                }
                facesChargees++;
                break;

            case 'm'://récupération du fichier .mtl

                sscanf(ligne, "mtllib %s", &mtlPngFile);
                /*if(name_type(mtlPngFile)==COMPLET)
                {
                    get_name(mtlPngFile, tmp);
                }
                else
                {
                    strcpy(tmp, mtlPngFile);
                }
                get_path(filename, mtlPngFile);
                strcat(mtlPngFile, tmp);*/
                break;
            }
        }
        fclose(objfile);//plus besoin du fichier, on a lu tt ce dont on avait besoin
    }
    else
    {
        cout << "Impossible d'ouvrir le fichier .obj" << endl;
        return -1;
    }


    /* Lecture du fichier de materiaux. */

    objfile = fopen(mtlPngFile, "r");//ouverture du .mtl pour récupérer le chemin de la texture
    if(objfile!=NULL)//si 'louverture a fonctionnée
    {
        while(fgets(ligne, 300, objfile)!=NULL)//tant qu'il ya qqch à lire
        {
            if(ligne[0]=='m')//m pour map_Kd, la texture
            {
                sscanf(ligne, "map_Kd %s", &mtlPngFile);//-->chemin de l'img(complet)
            }
        }
        fclose(objfile);//plus besoin
    }
    else
    {
        cout << "impossible d'ouvrir le fichier .mtl" << endl;
        return -1;
    }
    /*--A ce stade, on a :
        -tout les pts chargés dans un tableau
        -toutes les coordonnées de texture aussi dans un tableau
        -les faces chargées dans un tableau
        -le chemin complet vers l'image de texture
     --Il faut maintenant transformer toutes ces données en liste OpenGL*/

    texture = loadTexture(mtlPngFile);
    cout << "info : fichier texture : " << mtlPngFile << endl << "texture Nb : " << texture;

    int i;
    glNewList(glListId, GL_COMPILE);
    glBindTexture(GL_TEXTURE_2D, texture);
    glColor3ub(255, 255, 255);//retour au blanc pour eviter de colorer par dessus une texture
    for(i=0; i<nbFaces; i++)
    {
        if(faces[i].nbPts==4)
        {
            glBegin(GL_QUADS);

            //point 1
            glNormal3d(vnormals[faces[i].idVNormal1-1].x,
                       vnormals[faces[i].idVNormal1-1].y,
                       vnormals[faces[i].idVNormal1-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor1-1].x,
                         texcoords[faces[i].idTexCoor1-1].y);

            glVertex3d(pts[faces[i].idPt1-1].x, pts[faces[i].idPt1-1].y,
                       pts[faces[i].idPt1-1].z);
            //point 2
            glNormal3d(vnormals[faces[i].idVNormal2-1].x,
                       vnormals[faces[i].idVNormal2-1].y,
                       vnormals[faces[i].idVNormal2-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor2-1].x,
                         texcoords[faces[i].idTexCoor2-1].y);

            glVertex3d(pts[faces[i].idPt2-1].x, pts[faces[i].idPt2-1].y,
                       pts[faces[i].idPt2-1].z);
            //point 3
            glNormal3d(vnormals[faces[i].idVNormal3-1].x,
                       vnormals[faces[i].idVNormal3-1].y,
                       vnormals[faces[i].idVNormal3-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor3-1].x,
                         texcoords[faces[i].idTexCoor3-1].y);

            glVertex3d(pts[faces[i].idPt3-1].x, pts[faces[i].idPt3-1].y,
                       pts[faces[i].idPt3-1].z);
            //point 4
            glNormal3d(vnormals[faces[i].idVNormal4-1].x,
                       vnormals[faces[i].idVNormal4-1].y,
                       vnormals[faces[i].idVNormal4-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor4-1].x,
                         texcoords[faces[i].idTexCoor4-1].y);

            glVertex3d(pts[faces[i].idPt4-1].x, pts[faces[i].idPt4-1].y,
                       pts[faces[i].idPt4-1].z);

            glEnd();
        }
        else//face triangulaire
        {
            glBegin(GL_TRIANGLES);
            //point 1
            glNormal3d(vnormals[faces[i].idVNormal1-1].x,
                       vnormals[faces[i].idVNormal1-1].y,
                       vnormals[faces[i].idVNormal1-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor1-1].x,
                         texcoords[faces[i].idTexCoor1-1].y);

            glVertex3d(pts[faces[i].idPt1-1].x, pts[faces[i].idPt1-1].y,
                       pts[faces[i].idPt1-1].z);
            //point 2
            glNormal3d(vnormals[faces[i].idVNormal2-1].x,
                       vnormals[faces[i].idVNormal2-1].y,
                       vnormals[faces[i].idVNormal2-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor2-1].x,
                         texcoords[faces[i].idTexCoor2-1].y);

            glVertex3d(pts[faces[i].idPt2-1].x, pts[faces[i].idPt2-1].y,
                       pts[faces[i].idPt2-1].z);
            //point 3
            glNormal3d(vnormals[faces[i].idVNormal3-1].x,
                       vnormals[faces[i].idVNormal3-1].y,
                       vnormals[faces[i].idVNormal3-1].z);

            glTexCoord2d(texcoords[faces[i].idTexCoor3-1].x,
                         texcoords[faces[i].idTexCoor3-1].y);

            glVertex3d(pts[faces[i].idPt3-1].x, pts[faces[i].idPt3-1].y,
                       pts[faces[i].idPt3-1].z);
            glEnd();
        }

    }
    glEndList();

    delete pts;
    delete texcoords;
    delete faces;

    return 0;
}

void objet::disp()
{
    glPushMatrix();//on ne modifie pas la matrice
    glTranslated(position.x, position.y, position.z);//on bouge
    glCallList(glListId);//on dessine
    glPopMatrix();//on rapelle l'ancienne matrice
}

int get_nb_spaces(char *chaine)
{
    int nbSpaces=0;
    int i;
    int longueurChaine = strlen(chaine);
    for(i=0; i<longueurChaine; i++)
    {
        if(chaine[i]==' ')
            nbSpaces++;
    }
    return nbSpaces;
}

int get_path(const char *filename, char *path)
{
    int i;
    int arret=0;
    int continuer=1;

    i=strlen(filename);
    /*on cherche le premier '/' ou '\' en partant de la fin
    donc on continue tant que ça n'est pas arrivé, en décrémentant
    et quand ça arrive, on arrete*/
    while(continuer)
    {
        if(filename[i]=='/' || filename[i]=='\\')
        {
            continuer=0;
        }
        else
        {
            i--;
        }
    }
    arret = i;

    for (i=0; i<=arret; i++)
    {
        path[i]=filename[i];
    }
    return 0;

}

int get_name(const char *filename, char *name)
{
    int i=0, arret=0, continuer=1;
    i=strlen(filename);
    while(continuer)
    {
        if(filename[i]=='/'||filename[i]=='\\')
        {
            continuer=0;
            arret=i;
        }
        i--;
    }
    int offset = arret+1;
    arret = strlen(filename)-arret;
    for(i=0; i<arret; i++)
    {
        name[i]=filename[i+offset];
    }
    return 0;
}

int name_type(const char *filename)
{
    int i;
    for(i=0; i<strlen(filename); i++)
    {
        if(filename[i]=='/' || filename[i]=='\\')
            return COMPLET;//chemin complet
    }
    return RELATIF;//chemin relatif
}

void robot::kill()
{
    position=randSpawn();
}

