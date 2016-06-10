//
// Created by antoine on 08/06/16.
//

#ifndef CRAZYMARBLE3DCLION_CREDIT_H
#define CRAZYMARBLE3DCLION_CREDIT_H

#include "GUIBase.h"

using namespace core;

class Credit : public GUIBase {
private:
    IGUIStaticText* credit;
    IGUIButton* back;
public:
    virtual ~Credit();

    Credit(IrrlichtDevice *device,KeyboardEvent *keyEvent);
    void loop();
};


#endif //CRAZYMARBLE3DCLION_CREDIT_H
