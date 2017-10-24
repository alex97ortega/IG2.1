#include "Sphere.h"


Sphere::Sphere(GLUquadric* o, GLfloat r)
{
	_o = o;
	_r = r;
}


void Sphere::dibuja(){
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(mT->getm());
	glColor3f(r, g, b);
	gluSphere(_o, _r, 30, 30);
	glPopMatrix();
}