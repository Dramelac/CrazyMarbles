//
// Created by mathieu on 27/04/16.
//

#include "IrrlichtMain.h"

IrrlichtMain::IrrlichtMain() : width(1920), height(1080), keyevent(KeyboardEvent()) {

    this->device = createDevice(										// creation device
            video::EDT_OPENGL,											    // l'API est OpenGL
            core::dimension2d<u32>(width, height),							// taille de la fenetre 800x600
            16, false, false, false, &keyevent);

}


void IrrlichtMain::main() {
    while (device->run()){
        Game game(device, &keyevent, 50, 50);
        game.gameLoop();

        // to close device
        device->closeDevice();
    }

    // drop every loading image / node / model / all
    device->drop();
}
