//
// Created by mathieu on 03/05/16.
//

#ifndef CRAZYMARBLE3D_LEVELEDITOR_H
#define CRAZYMARBLE3D_LEVELEDITOR_H

#include <stdio.h>

#include "../Utils/KeyboardEvent.h"
#include "../Plateau/Board.h"
#include "../Play/Player.h"
#include "Campaign.h"
#include "../GUI/LevelEditorMenu/SideMapList.h"

using namespace scene;
using namespace core;
using namespace io;

class LevelEditor : public GUIBase{
private:
    ISceneManager *sceneManager;

    Board* board;
    Player* player;

    SideMapList* campaignMapList;

    ISceneNode* skyBox;
    s32 skyId;

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
    IGUIButton* cancel;
    IGUIEditBox* mapName;
    path name;

    bool play;

    vector3di cursor;
    s16 currentType;
    vector3di currentRotation;

    void setupGUI();

public:

    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    LevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, path pathMap);

    void gameLoop();
    void keyboardChecker();

    void move(vector3di change);
    void updateCamera();
    void applySetup();
    void setupSkyBox(s32 templateId);

    bool save();

    ~LevelEditor();

    static const u16 size;
};


#endif //CRAZYMARBLE3D_LEVELEDITOR_H
