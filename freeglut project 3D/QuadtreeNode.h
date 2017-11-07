#ifndef H_QUADTREENODE_H
#define H_QUADTREENODE_H
#include "GL\freeglut.h"
#include "Arbol.h"
#include <vector>
#include <list>
class QuadtreeNode
{
public:
	QuadtreeNode(GLfloat cX, GLfloat cZ, GLfloat s);
	virtual ~QuadtreeNode();

	void build();
	int numberTreesIntersected();
	void addIntersectingTreesToList();
	void drawTrees(GLfloat x1, GLfloat z1, GLfloat x2, GLfloat z2, GLfloat x3, GLfloat z3, GLfloat x4, GLfloat z4);
	void initialize(GLfloat x, GLfloat z, GLfloat s);
	GLfloat getCenterX() { return SWCornerX; }
	GLfloat	getCenterZ(){ return SWCornerZ; }
	GLfloat	getRadius(){ return size; }
private:
	GLfloat SWCornerX, SWCornerZ, size;
	const int COLUMNS = 30, ROWS = 30, UMBRAL = 10;

	std::vector<QuadtreeNode *> arrayTrees;
	std::list<Arbol *> listTrees;
	QuadtreeNode * header, *SWChild, *NWChild, *NEChild, *SEChild;
};

#endif