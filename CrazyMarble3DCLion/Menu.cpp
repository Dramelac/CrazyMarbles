//
// Created by mathieu on 26/04/16.
//

#include "Menu.h"

Menu::Menu(IrrlichtDevice* inDevice) {
    device = inDevice;
    gui = device->getGUIEnvironment();
}


void Menu::loop() {
    while (device->run()){
        
    }
}
