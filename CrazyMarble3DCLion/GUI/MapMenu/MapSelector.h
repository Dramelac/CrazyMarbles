//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MAPSELECTOR_H
#define CRAZYMARBLE3DCLION_MAPSELECTOR_H


#include "../GUIBase.h"

using namespace core;
using namespace io;

class MapSelector : public GUIBase {
private:

    IGUIImage* title;

    IGUIImage* background;
public:
    MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~MapSelector();

    path mapSelector();
};


#endif //CRAZYMARBLE3DCLION_MAPSELECTOR_H
