#include <irrlicht.h>
#include "Game.h"

using namespace irr;


int main(void) {
	Game game(50, 50);
	game.gameLoop();


	return 0;
}
