//
// Created by mathieu on 16/05/16.
//

#ifndef CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H
#define CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H


#include "../GUIBase.h"

using namespace core;
using namespace scene;

class WinLooseChoose : public GUIBase {
private:
    IGUIImage* background;
    ISceneManager *sceneManager;

    IGUIButton* restart;
    IGUIButton* quit;
    IGUIButton* next;

    bool win;

public:
    WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent, bool win=false, bool resume=false);
    virtual ~WinLooseChoose();

    s16 loop();
};


#endif //CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H
