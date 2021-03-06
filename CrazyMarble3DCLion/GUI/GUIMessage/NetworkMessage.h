//
// Created by mathieu on 25/05/16.
//

#ifndef CRAZYMARBLE3D_NETWORKMESSAGE_H
#define CRAZYMARBLE3D_NETWORKMESSAGE_H


#include "../GUIBase.h"

using namespace core;

class NetworkMessage : public GUIBase {
private:
    IGUIImage* background;
    IGUIStaticText* text;
    IGUIButton* exit;
public:
    NetworkMessage(IrrlichtDevice *device, KeyboardEvent *keyEvent
            , stringw message, stringw button="");
    virtual ~NetworkMessage();

    void setMessage(stringw message);
    void setButtonMessage(stringw message="");

    bool checkStatus();
};


#endif //CRAZYMARBLE3D_NETWORKMESSAGE_H
