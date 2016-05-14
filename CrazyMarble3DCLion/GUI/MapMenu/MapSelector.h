//
// Created by mathieu on 14/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MAPSELECTOR_H
#define CRAZYMARBLE3DCLION_MAPSELECTOR_H


#include "../GUIBase.h"

class MapSelector : public GUIBase {
private:
    IGUIStaticText* title;
public:
    MapSelector(IrrlichtDevice *device, KeyboardEvent *keyEvent);
};


#endif //CRAZYMARBLE3DCLION_MAPSELECTOR_H
