#include <irrlicht.h>
#include "Game.h"

using namespace irr;


int main(void) {
	Game game(10, 10);
	game.gameLoop();


	return 0;
}
