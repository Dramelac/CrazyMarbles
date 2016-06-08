//
// Created by mathieu on 15/05/16.
//

#ifndef CRAZYMARBLE3D_LVLEDITORMAPBUTTON_H
#define CRAZYMARBLE3D_LVLEDITORMAPBUTTON_H

#include "../MapMenu/MapButton.h"

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
    void setMapName(path map);
};


#endif //CRAZYMARBLE3D_LVLEDITORMAPBUTTON_H
