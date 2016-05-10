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

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"Quit", L"Exits Program");
    valide = gui->addButton(rect<s32>(600,550,1320,650), 0, 103, L"Valider");

    editBox = gui->addEditBox(L"", rect<irr::s32>(20,20,320,70));
    //font = gui->getFont("data/GUI/battlefield.png");
    //editBox->setOverrideFont(font);

}


const wchar_t* NickMenu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            if (valide->isPressed() || exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                //visibilityButtons(false);
                const wchar_t *nickname  = editBox->getText();
                return nickname;
            }
        }
    }
    return L"";
}

void NickMenu::visibilityButtons(bool status) {
    editBox->setVisible(status);
    valide->setVisible(status);
    exit->setVisible(status);
}


NickMenu::~NickMenu() {
    editBox->remove();
    valide->remove();
    exit->remove();
}