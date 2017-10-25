#include "Arbol.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "CopaDoble.h"

Arbol::Arbol(Tipo t)
{
	_t = t;

	//Tronco
	objetos.push_back(new Cylinder(_o, 0.8, 0.6, 4, 0, 1, 0.4));
	PuntoVector3D * v = new PuntoVector3D(1, 0, 0, 0);
	objetos[0]->mT->rotate(-90, v);

	switch (_t)
	{
	case Arbol::Abeto: // 1 CONO
		objetos.push_back(new Cylinder(_o, 1.5, 0, 4, 0, 1, 0));
		v = new PuntoVector3D(0, 4, 0, 1);
		objetos[1]->mT->translate(v);
		v = new PuntoVector3D(1, 0, 0, 1);
		objetos[1]->mT->rotate(-90, v); 
		break;
	case Arbol::Roble: // 1 ESFERA
		objetos.push_back(new Sphere(_o, 2, 0, 1, 0));
		v = new PuntoVector3D(0, 6, 0, 1);
		objetos[1]->mT->translate(v);

		break;
	case Arbol::Pino: // 2 CONOS
		objetos.push_back(new CopaDoble(CopaDoble::Pino));
		v = new PuntoVector3D(0, 4, 0, 1);
		objetos[1]->mT->translate(v);
		v = new PuntoVector3D(1, 0, 0, 1);
		objetos[1]->mT->rotate(-90, v);
		break;
	case Arbol::Alamo: // 2 ESFERAS
		objetos.push_back(new CopaDoble(CopaDoble::Alamo));
		v = new PuntoVector3D(0, 5.5, 0, 1);
		objetos[1]->mT->translate(v);
		break;
	default:
		break;
	}
}
