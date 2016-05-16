//
// Created by mathieu on 16/05/16.
//

#include "NetWorkMain.h"

NetWorkMain::NetWorkMain(IrrlichtDevice* device, bool isClient): isClient(isClient) {

    netManager = new INetManager(device);
    netManager->setVerbose(1);

    if (isClient){
        netManager->setUpClient();
    } else {
        netManager->setUpServer();
    }
}

NetWorkMain::~NetWorkMain() {
    delete netManager;
}