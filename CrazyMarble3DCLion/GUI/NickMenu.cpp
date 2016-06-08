//sd by antoine on 04/05/16.
//

#include "NickMenu.h"


NickMenu::NickMenu(IrrlichtDevice *device, KeyboardEvent *keyEvent)
        : GUIBase(device, keyEvent) {

    exit = gui->addButton(rect<s32>(1700,900,1900,1000), 0, 101, L"", L"Exits Program");
    exit->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_quit.png"));
    exit->setDrawBorder(false);
    exit->setUseAlphaChannel(true);

    valide = gui->addButton(rect<s32>(890,700,1010,750), 0, 103, L"");
    valide->setImage(driver->getTexture("data/GUI/Menu/menu_pause_valid.png"));
    valide->setDrawBorder(false);
    valide->setUseAlphaChannel(true);

    enterNick = gui->addImage(rect<s32>(700,600,980,690),0,105);
    enterNick->setImage(driver->getTexture("data/GUI/Menu/enter_nickname.png"));
    enterNick->setUseAlphaChannel(true);
    enterNick->setScaleImage(true);

    crazyMarble = gui->addImage(rect<s32>(630,380,1320,580),0,104);
    crazyMarble->setImage(driver->getTexture("data/GUI/Menu/crazyM.png"));
    crazyMarble->setUseAlphaChannel(true);
    crazyMarble->setScaleImage(true);

    editBox = gui->addEditBox(L"", rect<irr::s32>(1000,620,1200,670));
    font = gui->getFont("data/GUI/Menu/fontlucida.png");
    editBox->setOverrideFont(font);
    editBox->setOverrideColor(SColor(255,0,0,0));


}


const wchar_t* NickMenu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (valide->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                const wchar_t *nickname  = editBox->getText();
                return nickname;
            }
            if (exit->isPressed()){
                device->closeDevice();
                return L"";
            }
        }
    }
    return L"";
}

NickMenu::~NickMenu() {
    editBox->remove();
    valide->remove();
    exit->remove();
    crazyMarble->remove();
    enterNick->remove();
    
}