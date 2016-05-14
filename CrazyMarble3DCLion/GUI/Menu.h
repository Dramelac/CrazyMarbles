//
// Created by mathieu on 26/04/16.
//

#ifndef CRAZYMARBLE3DCLION_MENU_HPP
#define CRAZYMARBLE3DCLION_MENU_HPP

#include "../Utils/KeyboardEvent.h"
#include "../General/Game.h"
#include "../General/LevelEditor.h"
#include "NickMenu.h"
#include "GUIBase.h"

using namespace core;

class Menu : public GUIBase{
private:

    IGUIButton* exit;
    IGUIButton* play;
    IGUIButton* scoreBoard;
    IGUIButton* levelEditor;
    IGUIButton* credit;

    IGUIButton* nickName;

    IGUIImage* background;

    void visibilityButons(bool status);

public:

    Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent);
    void loop();
};


#endif //CRAZYMARBLE3DCLION_MENU_HPP
