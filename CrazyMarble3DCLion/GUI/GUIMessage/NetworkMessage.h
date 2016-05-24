//
// Created by mathieu on 25/05/16.
//

#ifndef CRAZYMARBLE3DCLION_NETWORKMESSAGE_H
#define CRAZYMARBLE3DCLION_NETWORKMESSAGE_H


#include "../GUIBase.h"

using namespace core;

class NetworkMessage : public GUIBase {
private:
    IGUIStaticText* text;
    IGUIButton* exit;
public:
    NetworkMessage(IrrlichtDevice *device, KeyboardEvent *keyEvent
            , stringw message, stringw button="");
    virtual ~NetworkMessage();

    bool checkStatus();
};


#endif //CRAZYMARBLE3DCLION_NETWORKMESSAGE_H
