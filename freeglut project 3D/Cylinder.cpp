#include "Cylinder.h"


Cylinder::Cylinder(GLUquadric* o, GLfloat r1, GLfloat r2, GLfloat h)
{
	_o = o;
	_r1 = r1;
	_r2 = r2;
	_h = h;
}


void Cylinder::dibuja(){
	gluCylinder(_o, _r1, _r2, _h, 10, 10);
}