//
// Created by antoine on 08/06/16.
//

#include "Credit.h"

Credit::Credit(IrrlichtDevice *device, KeyboardEvent *keyEvent)
        : GUIBase(device, keyEvent) {
    credit = gui->addStaticText(L"Calemard du Gardin Mathieu \nGarcia Romain \nSimonin Antoine \nSomas Alexandre ",rect<s32>(750,465,1170,615));
    credit->setOverrideColor(SColor(255,0,0,0));
    credit->setDrawBackground(true);
    back = gui->addButton(rect<s32>(1750,950,1900,1000), 0, 101, L"");
    back->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_back.png"));
    back->setDrawBorder(false);
    back->setUseAlphaChannel(true);
    back->setScaleImage(true);
}

void Credit::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (back->isPressed()){
                return;
            }
        }
    }

}

Credit::~Credit() {
    back->remove();
    credit->remove();

}