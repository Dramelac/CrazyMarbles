//
// Created by mathieu on 27/04/16.
//

#include "IrrlichtMain.h"
#include "Menu.h"

IrrlichtMain::IrrlichtMain() : width(1920), height(1080), keyEvent(KeyboardEvent()) {

    this->device = createDevice(										// creation device
            video::EDT_OPENGL,											    // l'API est OpenGL
            core::dimension2d<u32>(width, height),							// taille de la fenetre 800x600
            16, false, false, false, &keyEvent);
    keyEvent.setDevice(device);
}


void IrrlichtMain::main() {
    while (device->run()){
        /*
        Game game(device, &keyEvent, 50, 50);
        game.gameLoop();
        */
        Menu menu(device, &keyEvent);
        menu.loop();

        // to close device
        device->closeDevice();
    }

    // drop every loading image / node / model / all
    device->drop();
}
