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
	u32 health;
    vector3df inertie;

public:
	Entities(const stringc &name, int health);
	Entities();

    bool isAlive();
    void takeDamage(u16 dmg);

    void enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager);

    void applyMove(f32 deltaTime);
    void updatePosition(vector3df vec);

    const vector3df & getInertie() const;
    void setInertie(const vector3df &inertie);
};


#endif //CRAZYMARBLE_ENTITIES_HPP
