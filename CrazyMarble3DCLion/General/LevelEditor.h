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

    ISceneNode* skyBox;
    s32 skyId;

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
    IGUIButton* cellFinish;
    IGUIButton* cellEnemy;
    IGUIButton* cellStartBox;
    IGUIButton* skyBoxe;


    IGUIButton* validate;

    KeyboardEvent *keyEvent;

    bool play;

    vector3di cursor;
    s16 currentType;
    vector3di currentRotation;

    void setupGUI();

public:

    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyevent);
    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, path pathMap);

    void gameLoop();
    void keyboardChecker();

    void move(vector3di change);
    void updateCamera();
    void applySetup();
    void setupSkyBox(s32 templateId);

    void save(path name="map.irr");

    ~LevelEditor();

    static const u16 size;
};


#endif //CRAZYMARBLE3DCLION_LEVELEDITOR_H
