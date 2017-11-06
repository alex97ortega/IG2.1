#ifndef H_ESCENA_H
#define H_ESCENA_H

#include "ObjetoCompuesto.h"
#include "Coche.h"
#include "Arbol.h"
class Escena :
	public ObjetoCompuesto
{
public:
	Escena();
	Objeto3D * getCoche();
	void compruebaColision();
private:
	int numArboles;
};
#endif
