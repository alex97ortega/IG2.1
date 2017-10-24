#include "Escena.h"

Escena::Escena()
{
	objetos.push_back(new Coche());
	objetos.push_back(new Arbol(Arbol::Abeto)); 


	PuntoVector3D * v = new PuntoVector3D(10, 10, 0, 1);
	objetos[0]->mT->translate(v);

}
