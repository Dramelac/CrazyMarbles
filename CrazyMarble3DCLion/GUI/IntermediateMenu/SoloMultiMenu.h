//
// Created by mathieu on 16/05/16.
//

#ifndef CRAZYMARBLE3D_SOLOMULTIMENU_H
#define CRAZYMARBLE3D_SOLOMULTIMENU_H


#include "../GUIBase.h"

using namespace core;
using namespace io;

class SoloMultiMenu : public GUIBase {
private:
    IGUIImage* background;
    IGUIButton* solo;
    IGUIButton* multi;
    IGUIButton* exit;

    stringc pseudo;
    path map;

    void visibilityButtons(bool status);

public:
    SoloMultiMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent,
                  IGUIImage* background, stringc pseudo, path map);
    virtual ~SoloMultiMenu();

    void loop();

};


#endif //CRAZYMARBLE3D_SOLOMULTIMENU_H
