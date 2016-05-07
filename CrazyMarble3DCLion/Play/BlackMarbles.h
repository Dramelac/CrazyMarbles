//
// Created by mathieu on 07/05/16.
//

#ifndef CRAZYMARBLE3DCLION_BLACKMARBLES_H
#define CRAZYMARBLE3DCLION_BLACKMARBLES_H

#include <irrlicht.h>
#include "Entities.h"
#include "../Utils/TextureLoader.h"

using namespace irr;
using namespace scene;
using namespace core;

class BlackMarbles : public Entities {

private:
    IAnimatedMesh* sphereMesh;
    IMeshSceneNode* sphere_node;


public:
    BlackMarbles(ISceneManager *sceneManager);
    BlackMarbles(ISceneManager *sceneManager, vector3df position);
};


#endif //CRAZYMARBLE3DCLION_BLACKMARBLES_H
