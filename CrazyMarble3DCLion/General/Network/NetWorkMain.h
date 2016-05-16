//
// Created by mathieu on 16/05/16.
//

#ifndef CRAZYMARBLE3DCLION_NETWORKMAIN_H
#define CRAZYMARBLE3DCLION_NETWORKMAIN_H

#include <irrlicht.h>
#include <irrNet.h>

using namespace irr;
using namespace net;

class NetWorkMain {
private:
    INetManager* netManager;
    bool isClient;

public:
    NetWorkMain(IrrlichtDevice* device, bool isClient);
    virtual ~NetWorkMain();
};


#endif //CRAZYMARBLE3DCLION_NETWORKMAIN_H
