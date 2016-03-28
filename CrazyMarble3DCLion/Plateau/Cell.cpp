//
// Created by mathieu on 23/02/16.
//

#include <iostream>
#include "Cell.h"
#include "../Utils/TextureLoader.h"

Cell::Cell() {

    cellMesh = TextureLoader::cellMesh;

}


void Cell::setupQuadPlace(int row, int column, ISceneManager* sceneManager) {

    vector3df temp = vector3df(row*150.0f,-500.0f,column*150.0f);
    cell_node = sceneManager->addMeshSceneNode(cellMesh);
    cell_node->setPosition(temp);
    cell_node->setMaterialTexture(0, TextureLoader::tile);

	/*
	if (row == 9 && column == 9) heightLevel = 1;
	//unsigned int width = TextureLoader::tile.getSize().x;
	unsigned int width = 64;
	//unsigned int height = TextureLoader::tile.getSize().y;
	unsigned int height = 64;

	int level = heightLevel * width / 2;

	int x = (middle / 2 - (row * (width / 2))) + column * (width / 2) - width / 2;
	int y = row * (width / 4) + column * (height / 4) + level + 50;

	int max = y + 1000;
	textCell.setPosition(Vector2f(x, y));
	quad[0].position = Vector2f(x + width / 2, y);
	quad[1].position = Vector2f(x + width, y + height / 4);
	quad[2].position = Vector2f(x + width / 2, y + height / 2);
	quad[3].position = Vector2f(x, y + height / 4);

	quadWallRight[0].position = quad[2].position;
	quadWallRight[1].position = quad[1].position;
	quadWallRight[2].position = Vector2f(x + width, max - height / 4);
	quadWallRight[3].position = Vector2f(x + width / 2, max);

	quadWallLeft[0].position = quad[3].position;
	quadWallLeft[1].position = quad[2].position;
	quadWallLeft[2].position = Vector2f(x + width / 2, max);
	quadWallLeft[3].position = Vector2f(x, max - height / 4);
	*/
}

/*
void Cell::drawCel(RenderWindow *windows){
	//windows->draw(quad, &TextureLoader::tile);
	windows->draw(textCell);

	windows->draw(quadWallLeft, &TextureLoader::tileWall);
	windows->draw(quadWallRight, &TextureLoader::tileWall);
}
*/
