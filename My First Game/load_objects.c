#include "load_objects.h"
#include "defines.h"

int gen_gl_list_from(const char *file, int listId)
{
    printf("\nfonction gen_list_from : début\n");

    glEnable(GL_TEXTURE_2D);
    Point *pts=NULL;
    TexCoor *texcoords=NULL;
    Face *faces=NULL;
    char mtlPngFile[300]= {0};
    char tmp[300]= {0};

    /**
    *La lecture d'un fichier .obj doit se faire en 3 tps:
        -première lecture pour connaitre le nombre de points, faces...
        -récupération des données
        -création de la list OpenGL a partir des données réorganisées
    */


    /*---Partie 1 : première lecture---*/
    //variables :
    FILE *objfile=NULL;
    char ligne[300]= {0};
    int nbPts=0;          //-->nb de pts recensés
    int nbTexCoors=0;     //--> "  " Coors de textures recensées
    int nbFaces=0;        //--> "  " Faces                "

    //lecture
    objfile = fopen(file, "r");//ouverture du fichier
    if (file!=NULL)//-->ouverture OK
    {
        while(fgets(ligne, 300, objfile)!=NULL)//tant qu'il y a qqch à lire
        {
            switch(ligne[0])//-->premier caractere de la ligne
            {
            case 'v'://-->2 choix possibles
                if(ligne[1]=='t')//début de ligne ='vt'
                {
                    nbTexCoors++;//une coordonnée de texture de lue en +
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
        pts = malloc(sizeof(Point)*nbPts);
        texcoords = malloc(sizeof(TexCoor)*nbTexCoors);
        faces = malloc(sizeof(Face)*nbFaces);

        rewind(objfile);//retour au début du fichier
        int ptsCharges=0;
        int texCoorChargees=0;
        int facesChargees=0;


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
                    printf("+ 1 texcoor chargee\n");
                }
                else
                {
                    sscanf(ligne, "v %lf %lf %lf", &pts[ptsCharges].x, &pts[ptsCharges].z,
                           &pts[ptsCharges].y);
                    pts[ptsCharges].y *= -1;
                    ptsCharges++;
                    printf("+1 pt charge\n");
                }
                break;
            case 'f':
                if(get_nb_spaces(ligne)==4)
                {
                    sscanf(ligne, "f %d/%d %d/%d %d/%d %d/%d",
                           &faces[facesChargees].idPt1, &faces[facesChargees].idTexCoor1,
                           &faces[facesChargees].idPt2, &faces[facesChargees].idTexCoor2,
                           &faces[facesChargees].idPt3, &faces[facesChargees].idTexCoor3,
                           &faces[facesChargees].idPt4, &faces[facesChargees].idTexCoor4);
                    faces[facesChargees].nbPts = 4;
                    printf("+ 1 face scannee\n");
                }
                else if(get_nb_spaces(ligne)==3)
                {
                    sscanf(ligne, "f %d/%d %d/%d %d/%d",
                           &faces[facesChargees].idPt1, &faces[facesChargees].idTexCoor1,
                           &faces[facesChargees].idPt2, &faces[facesChargees].idTexCoor2,
                           &faces[facesChargees].idPt3, &faces[facesChargees].idTexCoor3);
                    faces[facesChargees].nbPts = 3;
                    printf("+ 1 face scannee\n");

                }
                else //erreur dans le fichier
                {
                    return -1;
                }
                facesChargees++;
                break;

            case 'm'://récupération du fichier .mtl

                sscanf(ligne, "mtllib %s", &mtlPngFile);
                if(name_type(mtlPngFile)==COMPLET)
                {
                    get_name(mtlPngFile, tmp);
                }
                else
                {
                    strcpy(tmp, mtlPngFile);
                }
                get_path(file, mtlPngFile);
                strcat(mtlPngFile, tmp);
                break;
            }
        }
        fclose(objfile);//plus besoin du fichier, on a lu tt ce dont on avait besoin
    }
    else//-->ouverture échouée
    {
        printf("ouverture du .obj echouee");
        return -1;

    }

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

        return -1;
        printf("ouverture du.mtl echouee");
    }
    /*--A ce stade, on a :
        -tout les pts chargés dans un tableau
        -toutes les coordonnées de texture aussi dans un tableau
        -les faces chargées dans un tableau
        -le chemin complet vers l'image de texture
     --Il faut maintenant transformer toutes ces données en liste OpenGL*/


    GLuint texture = loadTexture(mtlPngFile);
    printf(mtlPngFile);
    printf("%d", texture);

    int i;
    glNewList(listId, GL_COMPILE);
    glBindTexture(GL_TEXTURE_2D, texture);
    for(i=0; i<nbFaces; i++)
    {
        if(faces[i].nbPts==4)
        {
            glBegin(GL_QUADS);


            //point 1
            glTexCoord2d(texcoords[faces[i].idTexCoor1-1].x,
                         texcoords[faces[i].idTexCoor1-1].y);

            glVertex3d(pts[faces[i].idPt1-1].x, pts[faces[i].idPt1-1].y,
                       pts[faces[i].idPt1-1].z);
            //point 2
            glTexCoord2d(texcoords[faces[i].idTexCoor2-1].x,
                         texcoords[faces[i].idTexCoor2-1].y);

            glVertex3d(pts[faces[i].idPt2-1].x, pts[faces[i].idPt2-1].y,
                       pts[faces[i].idPt2-1].z);
            //point 3
            glTexCoord2d(texcoords[faces[i].idTexCoor3-1].x,
                         texcoords[faces[i].idTexCoor3-1].y);

            glVertex3d(pts[faces[i].idPt3-1].x, pts[faces[i].idPt3-1].y,
                       pts[faces[i].idPt3-1].z);
            //point 4
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
            glTexCoord2d(texcoords[faces[i].idTexCoor1-1].x,
                         texcoords[faces[i].idTexCoor1-1].y);

            glVertex3d(pts[faces[i].idPt1-1].x, pts[faces[i].idPt1-1].y,
                       pts[faces[i].idPt1-1].z);
            //point 2
            glTexCoord2d(texcoords[faces[i].idTexCoor2-1].x,
                         texcoords[faces[i].idTexCoor2-1].y);

            glVertex3d(pts[faces[i].idPt2-1].x, pts[faces[i].idPt2-1].y,
                       pts[faces[i].idPt2-1].z);
            //point 3
            glTexCoord2d(texcoords[faces[i].idTexCoor3-1].x,
                         texcoords[faces[i].idTexCoor3-1].y);

            glVertex3d(pts[faces[i].idPt3-1].x, pts[faces[i].idPt3-1].y,
                       pts[faces[i].idPt3-1].z);
            glEnd();
        }

    }
    glEndList();
    //on libere la memoire
    free(pts);
    free(texcoords);
    free(faces);
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



