//
// Created by mathieu on 16/05/16.
//

#include "NetWorkMain.h"

NetWorkMain::NetWorkMain(IrrlichtDevice* device) {

    netManager = new INetManager(device);
    netManager->setVerbose(1);
}

NetWorkMain::~NetWorkMain() {
    delete netManager;
}