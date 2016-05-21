//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MENUPLAYMODE_H
#define CRAZYMARBLE3DCLION_MENUPLAYMODE_H


#include "../GUIBase.h"
#include "../MapMenu/MapSelector.h"

#include "../../General/Campaign.h"
#include "SoloMultiMenu.h"
#include "MenuServer.h"

using namespace core;

class MenuPlayMode : public GUIBase {
private:
    IGUIImage* background;
    IGUIButton* campaignButton;
    IGUIButton* freeModeButton;
    IGUIButton* joinServerButton;
    IGUIButton* exit;
    stringc pseudo;

public:
    MenuPlayMode(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background);
    virtual ~MenuPlayMode();

    void loop();
    void visibilityButtons(bool status);

};


#endif //CRAZYMARBLE3DCLION_MENUPLAYMODE_H
