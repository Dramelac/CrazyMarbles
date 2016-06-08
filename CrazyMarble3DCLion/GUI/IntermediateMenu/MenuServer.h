//
// Created by romain on 21/05/16.
//

#ifndef CRAZYMARBLE3D_MENUSERVER_H
#define CRAZYMARBLE3D_MENUSERVER_H


#include "../GUIBase.h"
#include "../../General/Network/NetworkMain.h"

using namespace core;

class MenuServer : public GUIBase {
private:
    IGUIImage* background;
    stringc pseudo;
    IGUIButton* exit;
    IGUIButton* valide;
    IGUIEditBox* editBox;
    IGUIStaticText* ipText;


public:
    MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background);
    ~MenuServer();
    void loop();
    void visibilityButtons(bool status);

};


#endif //CRAZYMARBLE3D_MENUSERVER_H
