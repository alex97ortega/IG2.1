#ifndef H_SPHERE_H
#define H_SPHERE_H

#include "ObjetoCuadrico.h"
class Sphere :
	public ObjetoCuadrico
{
public:
	Sphere(GLUquadric* o, GLfloat r);
	virtual ~Sphere(){}
	void dibuja();
private:
	GLfloat _r;
};
#endif
