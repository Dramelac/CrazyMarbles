#include <iostream>
#include <irrlicht.h>
#include "driverChoice.h"

using namespace std;
using namespace irr;


int main(void) {

    // ask user for driver
    video::E_DRIVER_TYPE driverType=driverChoiceConsole();
    if (driverType==video::EDT_COUNT)
        return 1;

    // create device

    IrrlichtDevice *device =
            createDevice(driverType, core::dimension2d<u32>(640, 480), 16, false);

    irr::video::IVideoDriver* driver =
            device->getVideoDriver();                    // creation driver
    irr::scene::ISceneManager *sceneManager =
            device->getSceneManager ();                  // creation scene manager

    sceneManager->addCameraSceneNode (0,             // ajout camera fixe
                                      irr::core::vector3df (0,0,0),
                                      irr::core::vector3df (5,0,0));

    while (device->run()) {                          // la boucle de rendu
        driver->beginScene(                          // demarre le rendu
                true,                                    // clear back-buffer
                true,                                    // clear z-buffer
                irr::video::SColor(255,255,255,255));    // fond blanc
        sceneManager->drawAll ();                    // calcule le rendu
        driver->endScene ();                         // affiche le rendu
    }

    device->drop ();                                 // liberation de la memoire
    return 0;
}
