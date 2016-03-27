#include <irrlicht.h>
using namespace irr;
using namespace irr::core;
using namespace irr::video;
using namespace std;

IrrlichtDevice*                 device;
video::IVideoDriver*	        driver;
scene::ISceneManager*           smgr;
scene::ICameraSceneNode*        camera;
scene::IAnimatedMesh*           ground;
scene::IMeshSceneNode*          ground_node;
scene::IAnimatedMesh*           house;
scene::IMeshSceneNode*          house_node;
scene::IAnimatedMesh*           avatar;
scene::IAnimatedMeshSceneNode*  avatar_node;
video::SMaterial                material;
scene::ISceneNode*              cube;
int main () {

    //video::EDT_SOFTWARE
    //video::EDT_NULL
    //video::EDT_OPENGL,

    device=createDevice(video::EDT_OPENGL, dimension2d<u32>(640,480),16,false,true);

    if (device == 0) return(1);

    driver = device->getVideoDriver();
    smgr = device->getSceneManager();
/*
    smgr->addSkyBoxSceneNode(
            driver->getTexture("./media/irrlicht2_up.jpg"),
            driver->getTexture("./media/irrlicht2_dn.jpg"),
            driver->getTexture("./media/irrlicht2_lf.jpg"),
            driver->getTexture("./media/irrlicht2_rt.jpg"),
            driver->getTexture("./media/irrlicht2_ft.jpg"),
            driver->getTexture("./media/irrlicht2_bk.jpg"));
*/
    smgr->addSkyBoxSceneNode(
            driver->getTexture("./media/water.jpg"),
            driver->getTexture("./media/wall.bmp"),
            driver->getTexture("./media/wall.bmp"),
            driver->getTexture("./media/wall.bmp"),
            driver->getTexture("./media/wall.bmp"),
            driver->getTexture("./media/wall.bmp"));

    smgr->addLightSceneNode(0, vector3df(0, 100, 0),
                                 video::SColorf(1.0f, 1.0f, 1.0f), 1000.0f, -1);

    smgr->setAmbientLight(video::SColorf(255.0,255.0,255.0));



    camera = smgr->addCameraSceneNodeFPS(0,30.0f,90.0f,-1,
                                         0,0,false,0.0f);
    camera->setPosition(vector3df(30,10,30));

    ground = smgr->getMesh("./graph/grass.obj");
    ground_node = smgr->addMeshSceneNode(ground);
    ground_node->setScale(vector3df(1000,1,1000));
    ground_node->setMaterialFlag(EMF_LIGHTING, false);

    material.setTexture(0, driver->getTexture("./graph/building.tga"));
    house = smgr->getMesh("./graph/building.obj");


    for (int i=0; i<5; i++) {
            house_node = smgr->addMeshSceneNode(house);
            house_node->setScale(vector3df(0.5f,0.5f,0.5f));
            house_node->setPosition(vector3df(30*i+5,0,-30));
            house_node->getMaterial(0) = material;
            house_node->setRotation(vector3df(0,90,0));
        }

    /*
    material.setTexture(0, driver->getTexture("media/sydney.bmp"));
    avatar = smgr->getMesh("media/sydney.md2");
    avatar_node = smgr->addAnimatedMeshSceneNode(avatar);
    avatar_node->setScale(vector3df(.1,.1,.1));
    avatar_node->setPosition(vector3df(5,2.5,5));
    avatar_node->setRotation(vector3df(0,270,0));
    avatar_node->getMaterial(0) = material;
*/

    cube = smgr->addCubeSceneNode(1.0f, 0, -1,
                                  vector3df(10, 2, 10),
                                  vector3df(45.0, 0, 0),
                                  vector3df(1.0f, 1.0f, 1.0f));

    cube->setMaterialTexture(0, driver->getTexture("media/wall.jpg"));

    //cube->addAnimator(smgr->createRotationAnimator(vector3df(1,.5,.25)));

    while (device->run()) {
            driver->beginScene(true,true, video::SColor(255,100,101,140));
            smgr->drawAll();
            driver->endScene();
        }

    driver->drop();

    return(0);
}