//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MENULEVELEDITOR_H
#define CRAZYMARBLE3DCLION_MENULEVELEDITOR_H

#include "../../General/LevelEditor.h"
#include "../GUIBase.h"

class MenuLevelEditor : public GUIBase{
private:
    IGUIImage* background;
    IGUIButton* newMap;
    IGUIButton* loadMap;
    IGUIButton* exit;
    IGUIFont* font;

    void visibilityButtons(bool status);

public:
    MenuLevelEditor(IrrlichtDevice *device, KeyboardEvent *keyEvent, IGUIImage* background);
    virtual ~MenuLevelEditor();

    void loop();
};


#endif //CRAZYMARBLE3DCLION_MENULEVELEDITOR_H
