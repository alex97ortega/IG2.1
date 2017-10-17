#ifndef H_CYLINDER_H
#define H_CYLINDER_H
#include "ObjetoCuadrico.h"

class Cylinder :
	public ObjetoCuadrico
{
public:
	Cylinder(GLUquadric* o, GLfloat r1, GLfloat r2, GLfloat h);
	virtual ~Cylinder(){}
	void dibuja();
private:
	GLfloat _r1,_r2, _h;
};
#endif
