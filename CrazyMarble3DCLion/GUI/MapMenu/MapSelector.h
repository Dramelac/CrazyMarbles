//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3D_MAPSELECTOR_H
#define CRAZYMARBLE3D_MAPSELECTOR_H


#include "../GUIBase.h"
#include "MapButton.h"
#include "../../Utils/FileSystemUtils.h"

using namespace core;
using namespace io;

class MapSelector : public GUIBase {
private:

    IGUIImage* title;
    IGUIImage* background;
    IGUIButton* exit;

    array<MapButton*> myMapList;

public:
    MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent);
    virtual ~MapSelector();

    path mapSelector();
};


#endif //CRAZYMARBLE3D_MAPSELECTOR_H
