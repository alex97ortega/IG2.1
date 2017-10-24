#include "Cube.h"


Cube::Cube(int tam)
{
	t = tam;
}


Cube::~Cube()
{
}

void Cube::dibuja(){
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(mT->getm());
	glColor3f(r, g, b);
	glutSolidCube(t);
	glPopMatrix();
}