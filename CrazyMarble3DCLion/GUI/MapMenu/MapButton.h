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
    MapButton(const path &map, IGUIEnvironment* gui, vector2d<s32> pos, dimension2d<s32> size);
    virtual ~MapButton();

    bool checkPressed();
    const path & getMap() const;
    void setPos(rect<s32> pos);
};


#endif //CRAZYMARBLE3DCLION_MAPBUTTON_H
