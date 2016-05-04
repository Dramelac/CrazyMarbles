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
    Board board;
    IrrlichtDevice* device;
    IVideoDriver* driver;
    ISceneManager *sceneManager;

    ICameraSceneNode* fixeCamera;

    IGUIEnvironment* gui;

    IGUIButton* goToRight;
    IGUIButton* goToLeft;
    IGUIButton* goToTop;
    IGUIButton* goToDown;

    IGUIButton* rightRotation;
    IGUIButton* leftRotation;
    IGUIButton* lvlUp;
    IGUIButton* lvlDown;

    IGUIButton* cellAngle;
    IGUIButton* cellAngleInt;
    IGUIButton* cellFlat;
    IGUIButton* cellPente;

    IGUIButton* validate;

    KeyboardEvent *keyevent;

    bool play;
    s32 size;

    vector3di cursor;
    s16 currentType;
    vector3df currentRotation;

public:

    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent, s32 size=50, bool day = true);

    void gameLoop();
    void keyboardChecker();

    void move(vector3di change);
    void updateCamera();
    void applySetup();

    ~LevelEditor();
};


#endif //CRAZYMARBLE3DCLION_LEVELEDITOR_H
