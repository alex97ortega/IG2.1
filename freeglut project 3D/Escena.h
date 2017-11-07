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
	bool finJuego(){ return numArboles == 0; }
private:
	int numArboles;
};
#endif
