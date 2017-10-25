#include "CopaDoble.h"
#include "Cylinder.h"
#include "Sphere.h"

CopaDoble::CopaDoble(Tipo copa)
{
	_copa = copa;
	PuntoVector3D * v;
	if (_copa == Tipo::Pino){
		objetos.push_back(new Cylinder(_o, 1.5, 0, 3, 0, 1, 0));
		objetos.push_back(new Cylinder(_o, 1, 0, 3, 0, 1, 0));
		v = new PuntoVector3D(0, 0, 1, 1);
		objetos[1]->mT->translate(v);
	}
	else {
		objetos.push_back(new Sphere(_o, 2, 0, 1, 0));
		objetos.push_back(new Sphere(_o, 1.5, 0, 1, 0));
		v = new PuntoVector3D(0, 0, 1.5, 1);
		objetos[1]->mT->translate(v);
	}
}

