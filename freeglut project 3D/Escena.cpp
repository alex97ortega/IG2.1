#include "Escena.h"

Escena::Escena()
{
	objetos.push_back(new Arbol(Arbol::Alamo));

	//EL COCHE SIEMPRE HABRA QUE ELVARLO 2 PARA QUE SE APOYE EN EL PLANO XZ
	/*PuntoVector3D * v = new PuntoVector3D(0, 2, 0, 1);
	objetos[0]->mT->translate(v);*/
}
