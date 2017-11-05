#ifndef H_COCHE_H
#define H_COCHE_H

#include "ObjetoCompuesto.h"
#include "Cube.h"
#include "Cylinder.h"

#define CARROCERIA objetos[0]
#define FARO1 objetos[1]
#define FARO2 objetos[2]
#define RUEDA_ID objetos[3]
#define RUEDA_IA objetos[4]
#define RUEDA_DD objetos[5]
#define RUEDA_DA objetos[6]

class Coche :
	public ObjetoCompuesto
{
public:
	Coche();
	
	void avanzaIzquierda();
	void avanzaDerecha();
	void retrocedeIzquierda();
	void retrocedeDerecha();
private:
	GLdouble mov;
};
#endif
