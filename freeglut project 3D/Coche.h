#ifndef H_COCHE_H
#define H_COCHE_H

#include "ObjetoCompuesto.h"
#include "Cube.h"
#include "Cylinder.h"

#define CARROCERIA objetos[0]
#define FARO1 objetos[1]
#define FARO2 objetos[2]
#define RUEDA1 objetos[3]
#define RUEDA2 objetos[4]
#define RUEDA3 objetos[5]
#define RUEDA4 objetos[6]

class Coche :
	public ObjetoCompuesto
{
public:
	Coche();
	void dibuja();
	void mover(short int n);
private:
	GLdouble mov;
};
#endif
