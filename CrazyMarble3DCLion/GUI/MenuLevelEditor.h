//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MENULEVELEDITOR_H
#define CRAZYMARBLE3DCLION_MENULEVELEDITOR_H

#include "../General/LevelEditor.h"

class MenuLevelEditor {
private:
    IrrlichtDevice* device;
    IVideoDriver* driver;
    IGUIEnvironment* gui;

    KeyboardEvent *keyEvent;

    IGUIImage* background;
    IGUIButton* newMap;
    IGUIButton* loadMap;
    IGUIButton* exit;

    void visibilityButtons(bool status);

public:
    MenuLevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, IGUIImage* background);
    virtual ~MenuLevelEditor();

    void loop();
};


#endif //CRAZYMARBLE3DCLION_MENULEVELEDITOR_H
