//
// Created by romain on 21/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MENUSERVER_H
#define CRAZYMARBLE3DCLION_MENUSERVER_H


#include "../GUIBase.h"
using namespace core;

class MenuServer : public GUIBase {
private:
    IGUIImage* background;
    stringc pseudo;
    IGUIButton* exit;
public:
    MenuServer(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, IGUIImage* background);
    ~MenuServer();
    void loop();
    void visibilityButtons(bool status);

};


#endif //CRAZYMARBLE3DCLION_MENUSERVER_H
