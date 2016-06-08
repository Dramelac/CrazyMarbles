//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3D_MAPBUTTON_H
#define CRAZYMARBLE3D_MAPBUTTON_H

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
    void setMapName(path map);
};


#endif //CRAZYMARBLE3D_MAPBUTTON_H
