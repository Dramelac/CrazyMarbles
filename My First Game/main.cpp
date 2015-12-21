#include <SDL.h>
#include <SDL_image.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include "obj.h"
#include "get_pixel.h"
#include "collision.h"
#include "geometry.h"
#include "randspawn.h"
#include "sound.h"

#define LARGEUR_ECRAN 1920
#define HAUTEUR_ECRAN 1080

#define LIMITE .3 // limite de hauteur franchissable sans saut

#define COEF_VITESSE 9

#define HAUTEUR_VUE 1.75 //hauteur des yeux au dessus du sol

#define ESPACEMENT_PT .05

Point defaut= {-1,0,0};

using namespace std;

enum Act_Terrain
{
    CHARGER, RESTITUER, DECHARGER
};
typedef enum Act_Terrain Act_Terrain;


void init_ogl();
void dessiner(SDL_Event event);
double get_height(double x, double y, bool interpolated=true);//fonction qui determine la hauteur depuis la heightmap
double hauteur_saut(double tpsms);//Fonction qui donne la hauteur d'un saut en fonction du temps depuis la debut du saut (en ms)
double hauteur_chute_libre(double tpsms);//fonction qui donne la hauteur d'une chute libre en fonction du tps ecoule depuis le debut en ms
int get_elapsed_time();//retourne le tps ecoule depuis le dernier appel de la fct. En ms
Vector place_cam(); // place la camera en fct des touches et retourne le vecteur associe a la camera
objet gest_terrain(Act_Terrain action, char filename[]="");
void disp_fling(objet fling, Vector camera);
robot *gest_robot(int r, Point posPlayer=defaut); // fonction chargee de la gestion des robots

void tirer(Vector camera);//effectue un tir selon l'angle de la camera

void patienter(objet fling);



int main ( int argc, char** argv )
{
    SDL_Event events;
    bool continuer=true;

    SDL_Init(SDL_INIT_VIDEO);
    atexit(SDL_Quit);

    SDL_SetVideoMode(LARGEUR_ECRAN, HAUTEUR_ECRAN, 32, SDL_OPENGL | SDL_FULLSCREEN);
    init_ogl();





    while(continuer)
    {
        SDL_PollEvent(&events);
        switch(events.type)
        {
        case SDL_QUIT:
            continuer=false;
            break;

        case SDL_KEYDOWN:
            switch(events.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer=false;
                break;

            default:
                break;
            }
            break;
        }
        dessiner(events);
        SDL_Delay(20);
    }

    quit_audio();
    return 0;
}

void init_ogl()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80, (double)LARGEUR_ECRAN/HAUTEUR_ECRAN, .1, 1000);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_NORMALIZE);
    glClearColor(0, 0, 0, 0);

    /* Eclairage : une lampe d'ambience, et une lampe directionelle*/
    glEnable(GL_LIGHT0);
    GLfloat ambient[]= {5,5,5,1};
    GLfloat diffuse[]= {1,3,3,5};
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, ambient);

    int MatSpec [4] = {1,1,1,1};
    glMaterialiv(GL_FRONT_AND_BACK,GL_SPECULAR,MatSpec);
    glMateriali(GL_FRONT_AND_BACK,GL_SHININESS,100);
    double hauteur_saut(int tpsms);//Fonction qui donne la hauteur d'un saut en fonction du temps depuis la debut du saut (en ms)
    //on place la souris au milieu de l'ecran
    SDL_WarpMouse(LARGEUR_ECRAN/2, HAUTEUR_ECRAN/2);
    SDL_WM_GrabInput(SDL_GRAB_ON);
    SDL_ShowCursor(SDL_DISABLE);
}

void dessiner(SDL_Event event)
{
    static objet terrain;
    static objet fling;
    static objet skybox;
    static bool loaded=false;//si le chargement a ete fait

    Vector camera;//vecteur associé a la camera


    //reglages de la scene
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//vidage des memoires temporaires
    glMatrixMode(GL_MODELVIEW);//pr dessiner
    glLoadIdentity();//matrice par defaut



    if(!loaded)
    {
        fling.load("fling.obj");
        // en attente du chargement, on va afficher le fling
        patienter(fling);
        son_feu();//charger le fichier son

        gest_terrain(CHARGER, (char *)"terrain.obj");

        skybox.load("skybox.obj");
        loaded=true;
        get_elapsed_time();
    }



    camera = place_cam();

    //glLightfv(GL_LIGHT0,GL_POSITION,LightPos);//lumiere


    gest_terrain(RESTITUER).disp();

    glPushMatrix();
    disp_fling(fling, camera);
    glPopMatrix();


    gest_robot(0, camera.origine);

    glPushMatrix();
    glScaled(200,200,200);
    skybox.disp();
    glPopMatrix();

    glFlush();
    SDL_GL_SwapBuffers();
}

double get_height(double x, double y, bool interpolated)
{
    static SDL_Surface *heightmap=NULL;
    static bool loaded=false;
    static double tailleZ, tailleX, tailleY;
    double hauteur=0;
    double minimum=0;

    int ix=0, iy=0;
    double dx=0, dy=0;

    Uint32 pxColor1=0, pxColor2=0, pxColor3=0, pxColor4;

    if(!loaded)
    {
        heightmap=IMG_Load("heightmap.png");
        tailleZ=gest_terrain(RESTITUER).relBoundingBox.coordMax.z-gest_terrain(RESTITUER).relBoundingBox.coordMin.z;
        /* On part du principe que le terrain commence a 0;0 , donc que la taille X et Y sont max X et max Y*/
        tailleX=gest_terrain(RESTITUER).relBoundingBox.coordMax.x;
        tailleY=gest_terrain(RESTITUER).relBoundingBox.coordMax.y;


        loaded=true;
    }

    else//chargement deja fait
    {

        if(x >=0 && x<=tailleX && y>=0 && y<=tailleY)//position camera dans le terrain
        {
            x = (x / tailleX) * heightmap->w;           // on cherche la position relative par rapport au terrain, que l'on multiplie par la taille de
            y = (1 - (y / tailleY)) * heightmap->h;     // la heightmap ensuite
            // (1 - .. ) permet de faire une inversion verticale de la heightmap car blender l'inverse

            if(interpolated)//s'il faut interpoler la hauteur en fct des autres sommets, ce qui n'est pas toujours le cas
            {
                /* Pour l'interpolation bilineaire qui permet de connaitre la hauteur sans avoir de pas dus a la heightmap, on procede comme suit :
                            -on recupere les quatres pixels qui encadrent la position, et leur valeur en hauteur
                            -on recupere les coordonnees entieres de la position, et leurs restes decimaux
                            -on applique la formule d'interpolation bilineaire :
                            hauteur = ((1-dx) * pxColor1 + dx * pxColor2) * (1-dy) + ((1-dx) * pxColor3 + dx * pxColor4) * dy*/

                ix=(int)x;//position entiere
                iy=(int)y;
                dx=x-ix;//position decimale relative
                dy=y-iy;


                SDL_LockSurface(heightmap);

                /* Pour l'interpolation lineaire de la position, on recupere la position des quatres pixels autours de notre position
                on travaille ac un img en nb, donc les 4 couleurs ont la meme valeur, donc on ne prend qu'une d'entres elles, soit le 1er octet*/
                pxColor1=getpixel(heightmap, ix, iy);//recup des couleurs
                pxColor2=getpixel(heightmap, ix+1, iy);
                pxColor3=getpixel(heightmap, ix, iy+1);
                pxColor4=getpixel(heightmap, ix+1, iy+1);
                //recup du 1er octet
                pxColor1=(*(unsigned char *)(&pxColor1));
                pxColor2=(*(unsigned char *)(&pxColor2));
                pxColor3=(*(unsigned char *)(&pxColor3));
                pxColor4=(*(unsigned char *)(&pxColor4));

                /* On empeche l'interpolation lineaire de nous faire des siennes, c'est a dire de faire monter en trop haut. Pour cela, on definit
                une limite de hauteur, et si elle est depassee par la hauteur d'un des 4 pts, on retourne la valeur minimale des autres.
                Cela pourra eventuellement amener a certains bugs graphiques, a regler plus tard si besoin. */
                //on recupere le minimum
                minimum=pxColor1*tailleZ/255;
                if(pxColor2*tailleZ/255 < minimum)//peu etre un peu basic comme methode, mais simple et fonctionnelle
                    minimum=pxColor2*tailleZ/255;
                if(pxColor3*tailleZ/255 < minimum)
                    minimum=pxColor3*tailleZ/255;
                if(pxColor4*tailleZ/255 < minimum)
                    minimum=pxColor4*tailleZ/255;
                //maintenant, on verifie que la hauteur max depasse pas la limite
                if(pxColor1*tailleZ/255 > minimum+.5 ||
                        pxColor2*tailleZ/255 > minimum+.5 ||
                        pxColor3*tailleZ/255 > minimum+.5 ||
                        pxColor4*tailleZ/255 > minimum+.5 )
                {
                    hauteur=minimum*tailleZ/255;
                }
                else//ok pr l'interpolation lineaire, les pts ne sont pas trop ecartes en hauteur
                {
                    hauteur=((1-dx) * pxColor1 + dx * pxColor2) * (1-dy) + ((1-dx) * pxColor3 + dx * pxColor4) * dy;//calcul de la hauteur interpolee
                }
            }
            else
            {
                /* Il est possible qu'il ne faille pas interpoler, par exemple pour tester la hauteur pour voir si un mvt est possible ou pas. */
                pxColor1=getpixel(heightmap, (int)x, (int)y);
                pxColor1=(*(unsigned char *)(&pxColor1));//recup du 1er octet
                hauteur=(double)pxColor1;
            }

            hauteur*=tailleZ/255;//on adapte la hauteur retournee a la hauteur de la map

            return hauteur+gest_terrain(RESTITUER).relBoundingBox.coordMin.z;
        }

    }
    return 0;
}

Vector place_cam()
{
    static Point position= {0,0,0};
    Point positionVoulue= {60,62,0};
    static Point oldPosition= {60,62,0}; //sauvgarde temporaire de l'ancienne position au cas d'un mvt refuse(hauteur trop haute)
    static Point aimAt= {0,0,0};
    static int mouseX=0, mouseY=0;
    static int oldMouseX=0, oldMouseY=0, newMouseX=0, newMouseY=0;
    static double angleY=0, angleZ=15;//on ne n'oriente la camera que sur l'axe X et Y (par rapport a la cam.) sinon, cela inclinerait l'img
    Uint8 *keystates=NULL;

    int tpsEcoule=0;//temps ecoule depuis le dernier appel de la fonction

    SDL_GetMouseState(&newMouseX, &newMouseY);
    keystates=SDL_GetKeyState(NULL);

    mouseX=newMouseX-oldMouseX;//recup du deplacement
    mouseY=newMouseY-oldMouseY;

    positionVoulue=oldPosition;
    tpsEcoule=get_elapsed_time();

    /* Gestion pour que la souris ne sorte pas */
    if(newMouseX < 5 || newMouseX > LARGEUR_ECRAN-5)//bientot sortie
    {
        SDL_WarpMouse(LARGEUR_ECRAN/2, newMouseY);
        newMouseX=LARGEUR_ECRAN/2;
        oldMouseX=LARGEUR_ECRAN/2;
    }
    if(newMouseY < 5 || newMouseY> HAUTEUR_ECRAN-5)//bientot sortie
    {
        SDL_WarpMouse(newMouseX, HAUTEUR_ECRAN/2);
        newMouseY=HAUTEUR_ECRAN/2;
        oldMouseY=HAUTEUR_ECRAN/2;
    }

    angleY+=-mouseY/5;
    angleZ+=-mouseX/5;

    //verification qu'il n'y a pas de depassement de limites
    if(angleY>=80)
        angleY=80;
    if(angleY<=-80)
        angleY=-80;

    if(keystates[SDLK_w])
    {
        positionVoulue.x += cos(angleZ*M_PI/180)/COEF_VITESSE;// /10 pr reduire la vitesse
        positionVoulue.y += sin(angleZ*M_PI/180)/COEF_VITESSE;
    }
    if(keystates[SDLK_s])
    {
        positionVoulue.x -= cos(angleZ*M_PI/180)/COEF_VITESSE;// /10 pr reduire la vitesse
        positionVoulue.y -= sin(angleZ*M_PI/180)/COEF_VITESSE;
    }
    if(keystates[SDLK_a])
    {
        positionVoulue.x += cos((angleZ+90)*M_PI/180)/COEF_VITESSE;// /10 pr reduire la vitesse
        positionVoulue.y += sin((angleZ+90)*M_PI/180)/COEF_VITESSE;
    }
    if(keystates[SDLK_d])
    {
        positionVoulue.x += cos((angleZ-90)*M_PI/180)/COEF_VITESSE;// /10 pr reduire la vitesse
        positionVoulue.y += sin((angleZ-90)*M_PI/180)/COEF_VITESSE;
    }

    Point min, max;// pour eviter de sortir du terrain
    min = gest_terrain(RESTITUER).relBoundingBox.coordMin;
    max = gest_terrain(RESTITUER).relBoundingBox.coordMax;

    if(positionVoulue.x>min.x +.5&& positionVoulue.y>min.y +.5&& positionVoulue.y<max.y-.5 && positionVoulue.x<max.x-.5)//dans le terrain
        position=positionVoulue;


    position.z = get_height(position.x, position.y, true);      // hauteur correspondante

    aimAt.x=position.x + cos(angleZ*M_PI/180)*cos(angleY*M_PI/180);
    aimAt.y=position.y + sin(angleZ*M_PI/180)*cos(angleY*M_PI/180);
    aimAt.z=position.z + sin(angleY*M_PI/180);



    // on ajoute la hauteur par rapport au sol
    position.z += HAUTEUR_VUE;
    aimAt.z += HAUTEUR_VUE;


    gluLookAt(position.x, position.y, position.z , aimAt.x,aimAt.y,aimAt.z , 0, 0, 1);

    oldMouseX=newMouseX;
    oldMouseY=newMouseY;
    oldPosition=position;

    Vector camera; //vecteur associe a la camera
    camera.origine = position;
    camera.angleY = angleY;
    camera.angleZ = angleZ;
    return camera;
}

objet gest_terrain(Act_Terrain action, char filename[])
{
    static objet objdefaut;
    if(action==CHARGER)
        objdefaut.load(filename);

    return objdefaut;
}

double hauteur_saut(double tpsms)
{
    double hauteur=0;//hauteur finale retournee
    /* Calcul de la hauteur du saut : on veut un saut rapide au debut, lent au milieu, et a nouveau rapde vers la fin, av. de retomber au sol
    Cela correspond la la formule f(x)=-3.95(x-.45)²+.8  Df=[0;.9] ac x en secondes et f(x) en metres (saut de 80 cm)*/
    if(tpsms >= 0 && tpsms <= 900)//Df Ok
    {
        tpsms/=1000;//on commence par convertir en secondes
        cout << "tpsms=" << tpsms << endl;
        hauteur=-3.95*(tpsms-.45)*(tpsms-.45) + .8;//puis on calcule
    }
    return hauteur;
}

double hauteur_chute_libre(double tpsms)
{
    cout << "temps sans acces au sol=" << tpsms<<endl;
    double hauteur=0;
    /* On va partir du principe que la chute accelere progessivement, donc h=-x² */
    if(tpsms>=0)//pas de tps negatif
    {
        tpsms/=1000;//en secondes
        hauteur=-4*tpsms*tpsms;
    }

    cout <<"hauteur_chute_libre:hauteur="<<hauteur<<endl;
    return hauteur;
}

int get_elapsed_time()
{
    static int ancienTps=0;
    int nouveauTps=0;
    int tpsEcoule=0;
    nouveauTps=SDL_GetTicks();
    tpsEcoule=nouveauTps-ancienTps;
    ancienTps=nouveauTps;
    return tpsEcoule;
}

void disp_fling(objet fling, Vector camera)
{
    Uint8 *keystates = SDL_GetKeyState(NULL);

    /* Petite animation du fling : mvt de droite a gauche */
    int prec, suiv;//tps ecoule
    static double decalageY;    //decalage du fling par rapport a la camera
    static double recul=0;
    static bool croissant=true;      // si le decalage augmente ou diminue

    if(keystates[SDLK_w] ||
            keystates[SDLK_s] ||
            keystates[SDLK_a] ||
            keystates[SDLK_d])// mouvement du joueur
    {
        if(croissant)
        {
            decalageY += .002;
            if(decalageY>=.07)
                croissant=false;
        }
        else
        {
            decalageY -= .002;
            if(decalageY<=0)
                croissant=true;
        }
    }
    else
    {
        if(decalageY>=0)
            decalageY-=.002;
    }

    if(SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(1) && recul<=0)// click gauche de souris
    {
        recul = .08;
        tirer(camera);
    }
    else
    {
        if(recul>=0)
            recul-=.004;
    }

    glPushMatrix();
    glTranslated(camera.origine.x, camera.origine.y, camera.origine.z);
    glRotated(camera.angleZ, 0, 0, 1);
    glRotated(-camera.angleY, 0, 1, 0);
    glTranslated(.4-recul, -.16+decalageY, -.25 + (-16*decalageY*decalageY) + .6*decalageY);
    glScaled(.1,.1,.1);
    fling.disp();
    glPopMatrix();
}

robot *gest_robot(int r, Point posPlayer)
{
    static robot robots[5];
    static bool loaded = false;
    if(!loaded)
    {
        loaded=true;
        robots[0].shape.load("robot.obj");
        for(int i=0; i<5; i++)
        {
            robots[i].shape = robots[0].shape;
            robots[i].position = randSpawn();
        }
    }

    Point pos;
    bool collision;
    double dist;
    if(posPlayer.x != -1)//si la position du joueur a été donnée en arguments, x != -1
    {
        for(int i=0; i<5; i++)
        {
            collision=false;
            pos=robots[i].position;
            pos.x += -((pos.x - posPlayer.x)/(fabs(pos.x-posPlayer.x)+1))/30;
            pos.y += -((pos.y - posPlayer.y)/(fabs(pos.y-posPlayer.y)+1))/30;

            for(int a=0; a<i; a++)//detection de collision entre robots
            {

                dist = sqrt((robots[a].position.x-robots[i].position.x)*
                            (robots[a].position.x-robots[i].position.x)+
                            (robots[a].position.y-robots[i].position.y)*
                            (robots[a].position.y-robots[i].position.y));
                if(dist<3)
                    collision=true;

            }
            if(collision!=true)
                robots[i].position = pos;
        }

        for(int i=0; i<5; i++)
        {
            robots[i].position.z = get_height(robots[i].position.x, robots[i].position.y, true);
            glPushMatrix();
            glTranslated(robots[i].position.x, robots[i].position.y, robots[i].position.z);
            glRotated(robots[i].z, 0, 0, 1);
            robots[i].z++;
            robots[i].shape.disp();
            glPopMatrix();
        }
    }





    return &(robots[r]);
}



void tirer(Vector camera)
{
    /* Pour savoir si la balle a touché un des robots, on effectue un test point par point. Il serait
    possible de le faire en direct, en calculant la trajectoire de la balle, mais dans ce cas, on ne pourrait
    pas savoir si la balle traverse le sol préalablement. Pour eviter de calculer deux points qui pourraient etre de part et d'autre
    d'un robot, on prend des petits intervales. */

    Point test; // point en cours de test
    test=camera.origine;
    robot *bot;
    double dist;
    double x,y,z;


    for(int i=0; i<500; i++)    //500 points
    {
        test.x += cos(camera.angleZ * (M_PI/180)) * cos(camera.angleY * (M_PI/180)) * ESPACEMENT_PT;
        test.y += sin(camera.angleZ * (M_PI/180)) * cos(camera.angleY * (M_PI/180)) * ESPACEMENT_PT;
        test.z += sin(camera.angleY * (M_PI/180)) * ESPACEMENT_PT;


        if(test.z<get_height(test.x, test.y, true))//balle dans le sol
            i=500;//on arrete la boucle, si la balle passe dans le sol, elle s'arrete, donc la boucle aussi

        /* Maintenant, la boucle qui permet de tester si le point est dans un robot */
        for(int j=0; j<5; j++)
        {
            bot = gest_robot(j);
            dist = sqrt((bot->position.x - test.x)*(bot->position.x - test.x)+
                        (bot->position.y - test.y)*(bot->position.y - test.y));

            if(dist<1 && test.z>(bot->shape.relBoundingBox.coordMin.z+bot->position.z) && test.z<(bot->shape.relBoundingBox.coordMax.z+bot->position.z))//le point est dans le robot
            {
                gest_robot(j)->kill();
                j=5;//on arrete les boucles
                i=500;
            }
        }
    }
    son_feu();
}

void patienter(objet fling)
{
    gluLookAt(0,0,0,1,0,0,0,0,1);
    glPushMatrix();
    glTranslated(1,0,0);
    glScaled(.15,.15,.15);
    glRotated(120, 0,0,1);
    glRotated(20,-1,1,0);
    fling.disp();
    glPopMatrix();
    glFlush();
    SDL_GL_SwapBuffers();
}
