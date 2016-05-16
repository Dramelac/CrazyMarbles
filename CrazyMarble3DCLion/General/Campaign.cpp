//
// Created by mathieu on 09/05/16.
//

#include "Campaign.h"
Campaign::Campaign(IrrlichtDevice* device, KeyboardEvent* keyEvent, stringc pseudo)
        : playable(true), pseudo(pseudo) {

    this->device = device;
    driver = device->getVideoDriver();
    this->keyEvent = keyEvent;

    load();
}

Campaign::Campaign(IrrlichtDevice *device, KeyboardEvent *keyEvent, stringc pseudo, path map) : pseudo(pseudo) {
    this->device = device;
    driver = device->getVideoDriver();
    this->keyEvent = keyEvent;

    if (checkValidity(map)){
        playable = true;
        mapCycle.push_back(map);
    }

}

Campaign::Campaign():playable(false) {
    load();
}


s32 Campaign::play() {
    if (not playable) return -1;
    s32 score = 0;
    for (int mapNumber = 0; mapNumber < mapCycle.size(); ++mapNumber) {
        bool restart = true;
        while (restart){
            Game game(device, keyEvent, mapCycle[mapNumber], pseudo, score);
            switch (game.gameLoop()) {
                // next level
                case 0:
                    restart = false;
                    score = game.getScore();
                    break;
                // exit game
                case -1:
                    return score;
                // restart game
                case 1:
                default:
                    break;
            }
        }
    }
    return score;
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
    myfile.open ("data/Maps/campaign.path");
    if (myfile.is_open()){
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
    myfile.open ("data/Maps/campaign.path");
    std::string str;
    if (myfile.is_open()){
        bool toRefresh = false;
        u16 loadCount = 0;
        while (getline(myfile, str))
        {
            if (checkValidity(str.c_str())) {
                mapCycle.push_back(str.c_str());
                loadCount++;
            } else {
                toRefresh = true;
            }
            if (loadCount >= 10){
                toRefresh = true;
                break;
            }
        }
        myfile.close();
        cout << mapCycle.size() << " maps loaded" << endl;
        if (toRefresh) {
            save();
        }
    } else {
        cout << "error loading campaign !" << endl;
    }
}

bool Campaign::checkValidity(path map) {
    ifstream myfile;
    myfile.open(map.c_str());
    if (not myfile.is_open()){
        return false;
    }
    myfile.close();

    return true;
}

