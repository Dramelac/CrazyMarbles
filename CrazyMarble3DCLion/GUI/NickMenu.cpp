//
// Created by antoine on 04/05/16.
//

#include "NickMenu.h"
#include "iostream"



NickMenu::NickMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent) :
        device(device), keyEvent(keyEvent) {

    gui = device->getGUIEnvironment();
    driver = device->getVideoDriver();

    this->device->setWindowCaption(L"Crazy Marble  -  [MENU]");
    device->getCursorControl()->setVisible(true);


    gui->addImage(driver->getTexture("data/GUI/BGCM.png"), position2d<int>(0, 0));

    welcome = gui->addImage(driver->getTexture("/data/GUI/Menu/BGCM2.png"), position2d<int>(0, 0));
    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Quit", L"Exits Program");
    valide = gui->addButton(rect<s32>(600,550,1320,650), 0, 103, L"Valider");

    //gui->addStaticText(L"yolo",irr::core::rect<irr::s32>(100,20,400,60),true,true,0 , -1, true);


    IGUIEditBox *editBox = gui->addEditBox(L"", rect<irr::s32>(20,20,320,70));
    IGUIFont *font = gui->getFont("fontlucida.png");
    stringc nickname  = editBox->getText();
    std::cout << nickname.c_str  << std::endl ;
}
//play->setScaleImage(true);
//NickMenu nickMenu(device, keyEvent);
//string pseudo = nickMenu.loop();

void NickMenu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (exit->isPressed()){
                device->closeDevice();

            } else if (valide->isPressed()){

                return;
            }
        }
    }
}