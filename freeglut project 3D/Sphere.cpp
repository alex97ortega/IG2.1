#include "Sphere.h"


Sphere::Sphere(GLUquadric* o, GLfloat r)
{
	_o = o;
	_r = r;
}


void Sphere::dibuja(){
	gluSphere(_o, _r, 30, 30);
}