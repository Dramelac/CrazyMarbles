#include <irrlicht.h>
#include "Game.h"

using namespace irr;


int main(void) {
	Game game(20, 20);
	game.gameLoop();


	return 0;
}
