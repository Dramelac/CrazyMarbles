//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE_ENTITIES_HPP
#define CRAZYMARBLE_ENTITIES_HPP


#include <irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;

class Entities {
protected:

    IAnimatedMesh* sceneMesh;
    IMeshSceneNode* sceneNode;

    ISceneNodeAnimatorCollisionResponse* animatorCollisionResponse;

	stringc name;
	int health;

public:
	Entities(const stringc &name, int health);
	Entities();

    void enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager);
};


#endif //CRAZYMARBLE_ENTITIES_HPP
