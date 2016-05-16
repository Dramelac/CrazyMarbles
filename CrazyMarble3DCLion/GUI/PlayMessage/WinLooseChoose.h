//
// Created by mathieu on 16/05/16.
//

#ifndef CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H
#define CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H


#include "../GUIBase.h"

using namespace core;

class WinLooseChoose : public GUIBase {
private:
    IGUIImage* background;

public:
    WinLooseChoose(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~WinLooseChoose();

    s16 loop();
};


#endif //CRAZYMARBLE3DCLION_WINLOOSECHOOSE_H
