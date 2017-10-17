#ifndef H_CUBE_H
#define H_CUBE_H

#include "ObjetoCuadrico.h"
#include "GL\freeglut.h"

class Cube :
	public ObjetoCuadrico
{
public:
	Cube(int tam);
	virtual ~Cube();
	void dibuja();
private:
	int t;
};

#endif