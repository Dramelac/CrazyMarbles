//
// Created by mathieu on 26/04/16.
//

#include "Menu.h"

Menu::Menu(IrrlichtDevice* inDevice) {
    device = inDevice;
    gui = device->getGUIEnvironment();
    driver = device->getVideoDriver();

    this->device->setWindowCaption(L"Crazy Marble  -  [MENU]");
    device->getCursorControl()->setVisible(true);


    gui->addImage(driver->getTexture("data/GUI/BGCM.png"), position2d<int>(0, 0));

    gui->addButton(rect<s32>(10,240,110,240 + 32), 0, 101, L"Quit", L"Exits Program");
    gui->addButton(rect<s32>(800,400,850,500), 0, 100, L"YOLO");

}


void Menu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();
        }
    }
}
