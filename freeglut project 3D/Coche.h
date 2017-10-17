#ifndef H_COCHE_H
#define H_COCHE_H

#include "ObjetoCompuesto.h"
#include "Cube.h"
#include "GL\freeglut.h"

#define CARROCERIA objetos[0]
#define FARO1 objetos[1]
#define FARO2 objetos[2]

class Coche :
	public ObjetoCompuesto
{
public:
	Coche();
	void dibuja();
	void mover(short int n);
private:
	GLdouble mov;
	GLUquadric* o;
	
	
};
#endif
