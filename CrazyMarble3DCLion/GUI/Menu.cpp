//
// Created by mathieu on 26/04/16.
//

#include "Menu.h"
#include "../Utils/SoundUtils.h"

Menu::Menu(IrrlichtDevice *inDevice, KeyboardEvent *keyEvent)
        : GUIBase(inDevice, keyEvent) {

    this->device->setWindowCaption(L"Crazy Marble  -  [MENU]");
    SoundUtils::play();
    device->getCursorControl()->setVisible(true);

    background = gui->addImage(driver->getTexture("data/GUI/Menu/BGCM3.png"), position2d<int>(0, 0));

    IGUISkin* skin = gui->getSkin();
    skin->setFont(gui->getFont("data/GUI/fonts/font15px.png"), EGDF_DEFAULT);
    skin->setColor(EGDC_BUTTON_TEXT, SColor(255,255,255,255));

    NickMenu nickMenu(device, keyEvent);
    const wchar_t* temp = nickMenu.loop();

    exit = gui->addButton(rect<s32>(1800,950,1900,1000), 0, 101, L"", L"Exits Program");
    exit->setImage(driver->getTexture("data/GUI/Menu/bouton_menu_quit.png"));
    exit->setDrawBorder(false);
    exit->setUseAlphaChannel(true);

    play = gui->addButton(rect<s32>(657,400,1263,545), 0, 102, L"");
    play->setImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_play_selected.png"));
    play->setPressedImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_play_pressed.png"));
    play->setDrawBorder(false);
    play->setUseAlphaChannel(true);

    levelEditor = gui->addButton(rect<s32>(657,550,1263,695),0,104, L"");//657, 700, 1263, 845
    levelEditor->setImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_level_editor_selected.png"));
    levelEditor->setPressedImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_level_editor_pressed.png"));
    levelEditor->setDrawBorder(false);
    levelEditor->setUseAlphaChannel(true);

    credit = gui->addButton(rect<s32>(657, 700, 1263, 845),0,104, L"");
    credit->setImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_credits_selected.png"));
    credit->setPressedImage(driver->getTexture("data/GUI/Menu/button/bouton_main_menu_credits_pressed.png"));
    credit->setDrawBorder(false);
    credit->setUseAlphaChannel(true);

    nickName = gui->addButton(rect<s32>(1700, 70, 1850, 120),0 ,104,L"");
    nickName->setText(temp);

    mutedBackSound = gui->addButton(rect<s32>(1600, 70, 1650, 120),0 ,104,L"");
    mutedBackSound->setImage(driver->getTexture("data/GUI/Menu/muteSound.png"));
    mutedBackSound->setDrawBorder(false);
    mutedBackSound->setUseAlphaChannel(true);
    mutedBackSound->setScaleImage(true);

    mutedNoise = gui->addButton(rect<s32>(1500, 70, 1550, 120),0 ,104,L"");
    mutedNoise->setImage(driver->getTexture("data/GUI/Menu/muteNoise.png"));
    mutedNoise->setDrawBorder(false);
    mutedNoise->setUseAlphaChannel(true);
    mutedNoise->setScaleImage(true);

}


void Menu::loop() {
    while (device->run()){
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, SColor(0,200,200,200));

            gui->drawAll();

            driver->endScene();

            soundBack(SoundUtils::statusSound);
            noiseSound(SoundUtils::noise);

            if (exit->isPressed() || keyEvent->IsKeyDown(KEY_ESCAPE, true)){
                device->closeDevice();
            } else if (play->isPressed()){
                visibilityButons(false);
                background->setVisible(true);
                MenuPlayMode menuIntermediate(device, keyEvent, nickName->getText(), background);
                menuIntermediate.loop();
                visibilityButons(true);
                device->getCursorControl()->setVisible(true);
                visibilityButons(true);
            } else if (levelEditor->isPressed()){
                visibilityButons(false);
                background->setVisible(true);
                MenuLevelEditor menuIntermediate(device, keyEvent, background);
                menuIntermediate.loop();
                visibilityButons(true);
            } else if (credit->isPressed()){

            } else if (nickName->isPressed()){
                visibilityButons(false);
                background->setVisible(true);
                NickMenu nickMenu(device, keyEvent);
                nickName->setText(nickMenu.loop());
                visibilityButons(true);
            } else if (mutedBackSound->isPressed()){
                SoundUtils::muteSoundBack();
                mutedBackSound->setPressed(false);
            }else if (mutedNoise->isPressed()){
                SoundUtils::muteNoise();
                mutedNoise->setPressed(false);
            }

        }
    }
}

void Menu::visibilityButons(bool status) {
    exit->setVisible(status);
    play->setVisible(status);
    //scoreBoard->setVisible(status);
    levelEditor->setVisible(status);
    credit->setVisible(status);
    nickName->setVisible(status);
    background->setVisible(status);
    mutedNoise->setVisible(status);
    mutedBackSound->setVisible(status);
}

void Menu::soundBack(bool) {
    if(SoundUtils::statusSound){
        mutedBackSound->setImage(driver->getTexture("data/GUI/Menu/muteSound.png"));
    }else{
        mutedBackSound->setImage(driver->getTexture("data/GUI/Menu/sound.png"));
    }

}

void Menu::noiseSound(bool) {
    if(SoundUtils::noise){
        mutedNoise->setImage(driver->getTexture("data/GUI/Menu/noise.png"));
    }else{
        mutedNoise->setImage(driver->getTexture("data/GUI/Menu/muteNoise.png"));
    }
}






