//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3DCLION_LVLEDITORMAPBUTTON_H
#define CRAZYMARBLE3DCLION_LVLEDITORMAPBUTTON_H

#include <irrlicht.h>
#include "../MapMenu/MapButton.h"

using namespace irr;
using namespace gui;
using namespace io;
using namespace video;

class LvlEditorMapButton {
private:
    IGUIButton* removeButton;
    MapButton* mapButton;
public:
    LvlEditorMapButton(IGUIEnvironment* gui, IVideoDriver* driver, const path &map, u16 nPos);
    virtual ~LvlEditorMapButton();

    bool checkRemove();
    bool checkChange();

    void setupPos(u16 nPos);
};


#endif //CRAZYMARBLE3DCLION_LVLEDITORMAPBUTTON_H
