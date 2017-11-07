#include "QuadtreeNode.h"


QuadtreeNode::QuadtreeNode(GLfloat cX, GLfloat cZ, GLfloat s)
{
	SWCornerX = cX; 
	SWCornerZ = cZ; 
	size = s;

	header = new QuadtreeNode(cX, cZ, s);
	header->build();
}


QuadtreeNode::~QuadtreeNode()
{
}

void QuadtreeNode::build(){
if (this->numberTreesIntersected() <= UMBRAL)
this->addIntersectingTreesToList();
else {
	SWChild = new QuadtreeNode(SWCornerX, SWCornerZ, size / 2.0);
	NWChild = new QuadtreeNode(SWCornerX, SWCornerZ - size / 2.0,
		size / 2.0);
	NEChild = new QuadtreeNode(SWCornerX + size / 2.0,
		SWCornerZ - size / 2.0, size / 2.0);
	SEChild = new QuadtreeNode(SWCornerX + size / 2.0, SWCornerZ,
		size / 2.0);
	SWChild->build(); NWChild->build();
	NEChild->build(); SEChild->build();
}
}

int QuadtreeNode::numberTreesIntersected(){
	int numVal = 0;
	for (int j = 0; j < COLUMNS; j++){
		for (int i = 0; i<ROWS; i++){
				if (checkDiscRectangleIntersection(
					SWCornerX, SWCornerZ,
					SWCornerX + size, SWCornerZ - size,
					arrayTrees[i][j].getCenterX(),
					arrayTrees[i][j].getCenterZ(),
					arrayTrees[i][j].getRadius()))
					numVal++;
				}
	}
	return numVal;
}

void QuadtreeNode::addIntersectingTreesToList(){
	for (int j = 0; j < COLUMNS; j++){
		for (int i = 0; i<ROWS; i++){
			if (checkDiscRectangleIntersection(
				SWCornerX, SWCornerZ,
				SWCornerX + size, SWCornerZ - size,
				arrayTrees[i][j].getCenterX(),
				arrayTrees[i][j].getCenterZ())) //Tambien se cogeria el tamaño)
				listTrees.push_back(arrayTrees[i][j]);
			}
	}
}

void QuadtreeNode::drawTrees(GLfloat x1, GLfloat z1, GLfloat x2, GLfloat z2, GLfloat x3, GLfloat z3, GLfloat x4, GLfloat z4){
	//If the square does not intersect the frustum do nothing.
	if (checkQuadrilateralsIntersection(x1, z1, x2, z2, x3, z3, x4, z4,
		SWCornerX, SWCornerZ, SWCornerX, SWCornerZ - size,
		SWCornerX + size, SWCornerZ - size, SWCornerX + size, SWCornerZ)) {
		if (SWChild == NULL) { //Square is leaf.
			//Draw all the asteroids in asteroidList.
		}
		else {
			SWChild->drawTrees(x1, z1, x2, z2, x3, z3, x4, z4);
			NWChild->drawTrees(x1, z1, x2, z2, x3, z3, x4, z4);
			NEChild->drawTrees(x1, z1, x2, z2, x3, z3, x4, z4);
			SEChild->drawTrees(x1, z1, x2, z2, x3, z3, x4, z4);
		}
	}
}
