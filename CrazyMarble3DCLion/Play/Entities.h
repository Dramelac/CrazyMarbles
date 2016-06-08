//
// Created by mathieu on 03/03/16.
//

#ifndef CRAZYMARBLE3D_ENTITIES_HPP
#define CRAZYMARBLE3D_ENTITIES_HPP


#include <irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;

class Entities {
protected:

    IAnimatedMesh* sceneMesh;
    IMeshSceneNode* sceneNode;

    ISceneNodeAnimatorCollisionResponse* animatorCollisionResponse;
    u32 fallDistance;

	stringc name;
	s32 health;
    vector3df inertie;

public:
	Entities(const stringc &name, s32 health);
	Entities();

    bool isAlive();
    virtual void takeDamage(u64 dmg);

    ITriangleSelector* getSelector(ISceneManager *sceneManager);

    void enableCollision(IMetaTriangleSelector *metaSelector, ISceneManager *sceneManager);
	ISceneNodeAnimatorCollisionResponse* enableCustomCollision(ITriangleSelector *metaSelector, ISceneManager *sceneManager);
    void removeAnimator(ISceneNodeAnimator *animator);

    void applyMove(f32 deltaTime, u16 level=100);
    virtual bool isFall(u16 level=100);
    void updatePosition(vector3df vec);

	virtual void setPosition(vector3df position);

    const vector3df & getInertie() const;
    void setInertie(const vector3df &inertie);
};


#endif //CRAZYMARBLE3D_ENTITIES_HPP
