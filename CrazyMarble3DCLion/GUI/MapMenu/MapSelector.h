//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MAPSELECTOR_H
#define CRAZYMARBLE3DCLION_MAPSELECTOR_H


#include "../GUIBase.h"
#include "MapButton.h"

using namespace core;
using namespace io;

class MapSelector : public GUIBase {
private:

    IGUIImage* title;

    IGUIImage* background;

    array<MapButton> myMapList;

public:
    MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~MapSelector();

    path mapSelector();
};


#endif //CRAZYMARBLE3DCLION_MAPSELECTOR_H
