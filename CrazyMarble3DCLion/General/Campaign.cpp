//
// Created by mathieu on 09/05/16.
//

#include "Campaign.h"
Campaign::Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent) {
    this->device = device;
    driver = device->getVideoDriver();
    this->keyEvent = keyEvent;

    load();
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

const array<path> &Campaign::getMapCycle() const {
    return mapCycle;
}

void Campaign::setMapCycle(u16 placeNumber, path map) {
    if (mapCycle.size() > placeNumber) {
        mapCycle[placeNumber] = map;
    }
}

void Campaign::setMapCycle(path map) {
    mapCycle.push_back(map);
}

void Campaign::removeMapAt(u16 placeNumber) {
    if (mapCycle.size() > placeNumber) {
        mapCycle.erase(placeNumber);
    }
}

void Campaign::save() {
    ofstream myfile;
    if (myfile.is_open()){
        myfile.open ("data/Maps/campaign.path");
        for (int i = 0; i < mapCycle.size(); ++i) {
            myfile << mapCycle[i].c_str() << "\n";
        }
        myfile.close();
    } else {
        cout << "error saving campaign !" << endl;
    }
}

void Campaign::load() {
    ifstream myfile;
    string str;
    if (myfile.is_open()){
        myfile.open ("data/Maps/campaign.path");
        while (getline(myfile, str))
        {
            mapCycle.push_back(str);
        }
        myfile.close();
    } else {
        cout << "error loading campaign !" << endl;
    }
}

