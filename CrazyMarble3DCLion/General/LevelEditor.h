//
// Created by mathieu on 03/05/16.
//

#ifndef CRAZYMARBLE3DCLION_LEVELEDITOR_H
#define CRAZYMARBLE3DCLION_LEVELEDITOR_H

#include <irrlicht.h>

using namespace irr;
using namespace irr::scene;
using namespace irr::core;
using namespace irr::video;

class LevelEditor {
private:
    Board* board;
    IrrlichtDevice* device;
    IVideoDriver* driver;
    ISceneManager *sceneManager;

    KeyboardEvent *keyevent;

public:


};


#endif //CRAZYMARBLE3DCLION_LEVELEDITOR_H
