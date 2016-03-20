#include <irrlicht.h>

using namespace irr;


int main(void) {

	IrrlichtDevice *device = createDevice( // creation device
		video::EDT_OPENGL,                      // l'API est OpenGL
		core::dimension2d<u32>(800, 600),   // taille de la fenetre 800x600
		32, false, true, false, 0);

	video::IVideoDriver* driver =
		device->getVideoDriver();                    // creation driver
	scene::ISceneManager *sceneManager =
		device->getSceneManager();                  // creation scene manager

	sceneManager->addCameraSceneNode(0,             // ajout camera fixe
		core::vector3df(0, 0, 0),
		core::vector3df(5, 0, 0));

	while (device->run()) {                          // la boucle de rendu
		driver->beginScene(                          // demarre le rendu
			true,                                    // clear back-buffer
			true,                                    // clear z-buffer
			irr::video::SColor(255, 255, 255, 255));    // fond blanc
		sceneManager->drawAll();                    // calcule le rendu
		driver->endScene();                         // affiche le rendu
	}

	device->drop();                                 // liberation de la memoire
	return 0;
}
