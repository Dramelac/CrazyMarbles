//
// Created by mathieu on 09/05/16.
//

#include "Campaign.h"
#include "Game.h"

Campaign::Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent) {
    this->device = device;
    driver = device->getVideoDriver();
    this->keyEvent = keyEvent;
}


void Campaign::play() {

    for (int mapNumber = 0; mapNumber < mapCycle.size(); ++mapNumber) {
        bool restart = true;
        while (restart){
            Game game(device, keyEvent, mapCycle[mapNumber]);
            switch (game.gameLoop()) {
                // next level
                case 0:
                    restart = false;
                    break;
                // exit game
                case -1:
                    return;
                // restart game
                default:
                    break;
            }
        }
    }
}

