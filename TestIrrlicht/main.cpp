#include <iostream>
#include <irrlicht.h>

using namespace irr;

using namespace std;

int main() {

    // Crée le moteur.
    IrrlichtDevice* device = createDevice(video::EDT_OPENGL,
                                          core::dimension2d<u32>(640, 480));



    video::IVideoDriver* driver = device->getVideoDriver();
    scene::ISceneManager* smgr = device->getSceneManager();
    gui::IGUIEnvironment* env = device->getGUIEnvironment();

    driver->setTextureCreationFlag(video::ETCF_ALWAYS_32_BIT, true);

    // Ajoute le logo d'Irrlicht.
    env->addImage(driver->getTexture("media/irrlichtlogo3.png"),
                  core::position2d<s32>(10,10));

    // Ajoute une caméra.
    scene::ICameraSceneNode* camera = smgr->addCameraSceneNodeFPS();
    camera->setPosition(core::vector3df(-200,200,-200));

    // Cache le curseur de la souris.
    device->getCursorControl()->setVisible(false);



    scene::ISceneNode* earth = 0;

    scene::IAnimatedMesh* earthMesh = smgr->getMesh("media/earth.x");
    if (earthMesh)
    {
        // Réalise plusieurs tâches avec le manipulateur de mesh.
        scene::IMeshManipulator *manipulator = smgr->getMeshManipulator();

        // Crée la copie de mesh avec les informations de la tangente du mesh original earth.x.
        scene::IMesh* tangentSphereMesh =
                manipulator->createMeshWithTangents(earthMesh->getMesh(0));

        // Fixe la valeur alpha pour chaque vertex à 200.
        manipulator->setVertexColorAlpha(tangentSphereMesh, 200);

        // Redimensionne le mesh avec un facteur 50.
        core::matrix4 m;
        m.setScale ( core::vector3df(50,50,50) );
        manipulator->transform( tangentSphereMesh, m );

        earth = smgr->addMeshSceneNode(tangentSphereMesh);

        earth->setPosition(core::vector3df(-70,130,45));

        // Charge la texture des hauteurs et crée la texture des normales à partir de celle-ci et l'affecte au mesh.
        video::ITexture* earthNormalMap = driver->getTexture("media/earthbump.jpg");
        if (earthNormalMap)
        {
            driver->makeNormalMapTexture(earthNormalMap, 20.0f);
            earth->setMaterialTexture(1, earthNormalMap);
            earth->setMaterialType(video::EMT_NORMAL_MAP_TRANSPARENT_VERTEX_ALPHA);
        }

        // Ajuste les options du matériel.
        //earth->setMaterialFlag(video::EMF_FOG_ENABLE, true);
        earth->setMaterialFlag(video::EMF_ANTI_ALIASING, true);

        // Ajoute l'animateur de rotation.
        scene::ISceneNodeAnimator* anim =
                smgr->createRotationAnimator(core::vector3df(0,0.1f,0));
        earth->addAnimator(anim);
        anim->drop();

        // Jette le mesh parce que nous l'avons crée avec un appel à createXXX.
        tangentSphereMesh->drop();
    }







    int lastFPS = -1;

    while(device->run())
        if (device->isWindowActive())
        {
            driver->beginScene(true, true, 0);

            smgr->drawAll();
            env->drawAll();

            driver->endScene();

            int fps = driver->getFPS();

            if (lastFPS != fps)
            {
                core::stringw str = L"Per pixel lighting example - Irrlicht Engine [";
                str += driver->getName();
                str += "] FPS:";
                str += fps;

                device->setWindowCaption(str.c_str());
                lastFPS = fps;
            }
        }

    device->drop();

    return 0;
}