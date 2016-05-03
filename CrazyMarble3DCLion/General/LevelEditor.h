//
// Created by mathieu on 03/05/16.
//

#ifndef CRAZYMARBLE3DCLION_LEVELEDITOR_H
#define CRAZYMARBLE3DCLION_LEVELEDITOR_H

#include <irrlicht.h>
#include "../Utils/KeyboardEvent.h"
#include "../Plateau/Board.h"

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

    bool play;

public:

    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent, bool day = true);

    void gameLoop();
    void keyboardChecker();
};


#endif //CRAZYMARBLE3DCLION_LEVELEDITOR_H
