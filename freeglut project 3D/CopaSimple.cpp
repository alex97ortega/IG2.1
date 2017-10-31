#include "CopaSimple.h"
#include "Cylinder.h"
#include "Sphere.h"


CopaSimple::CopaSimple(Tipo copa)
{
	copa = copa;
	PuntoVector3D * v;
	if (_copa == Tipo::Abeto){
		objetos.push_back(new Cylinder(_o, 1.5, 0, 4, 0, 1, 0));
	}
	else {
		objetos.push_back(new Sphere(_o, 2, 0, 1, 0));
	}
}


