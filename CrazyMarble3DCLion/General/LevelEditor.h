//
// Created by mathieu on 03/05/16.
//

#ifndef CRAZYMARBLE3DCLION_LEVELEDITOR_H
#define CRAZYMARBLE3DCLION_LEVELEDITOR_H

#include <irrlicht.h>
#include <string>
#include "../Utils/KeyboardEvent.h"
#include "../Plateau/Board.h"
#include "../Play/Player.h"

using namespace irr;
using namespace scene;
using namespace core;
using namespace video;
using namespace io;

class LevelEditor {
private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    ISceneManager *sceneManager;

    Board* board;
    Player* player;
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
    IGUIButton* cellEmpty;

    IGUIButton* validate;

    KeyboardEvent *keyevent;

    bool play;
    s32 size;

    vector3di cursor;
    s16 currentType;
    vector3di currentRotation;

public:

    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent, u16 size=50, bool day = true);

    void gameLoop();
    void keyboardChecker();

    void move(vector3di change);
    void updateCamera();
    void applySetup();

    void save(path name="map.irr");

    ~LevelEditor();
};


#endif //CRAZYMARBLE3DCLION_LEVELEDITOR_H
