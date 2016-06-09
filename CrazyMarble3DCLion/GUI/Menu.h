//
// Created by mathieu on 26/04/16.
//

#ifndef CRAZYMARBLE3D_MENU_HPP
#define CRAZYMARBLE3D_MENU_HPP

#include "../Utils/KeyboardEvent.h"
#include "NickMenu.h"
#include "IntermediateMenu/MenuLevelEditor.h"
#include "IntermediateMenu/MenuPlayMode.h"

using namespace core;

class Menu : public GUIBase{
private:

    IGUIButton* exit;
    IGUIButton* play;
    IGUIButton* levelEditor;
    IGUIButton* credit;
    IGUIButton* mutedBackSound;
    IGUIButton* mutedNoise;

    IGUIButton* nickName;

    IGUIImage* background;

    void visibilityButons(bool status);
    void soundBack(bool);

public:

    Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent);
    void loop();
};


#endif //CRAZYMARBLE3D_MENU_HPP
