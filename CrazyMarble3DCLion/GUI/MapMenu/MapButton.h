//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_MAPBUTTON_H
#define CRAZYMARBLE3DCLION_MAPBUTTON_H

#include <irrlicht.h>

using namespace irr;
using namespace io;
using namespace gui;
using namespace core;

class MapButton {
private:
    path map;
    IGUIButton* myButton;
public:
    MapButton(const path &map, u16 nPos, IGUIEnvironment* gui);
    virtual ~MapButton();

    bool checkPressed();
    const path & getMap() const;
};


#endif //CRAZYMARBLE3DCLION_MAPBUTTON_H
