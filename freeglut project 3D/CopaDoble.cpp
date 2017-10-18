#include "CopaDoble.h"
#include "Cylinder.h"
#include "Sphere.h"

CopaDoble::CopaDoble(Tipo copa)
{
	_copa = copa;

	if (_copa = Pino){
		objetos.push_back(new Cylinder(_o, 1, 0, 3));
		objetos.push_back(new Cylinder(_o, 1, 0, 3));
	}
	else {
		objetos.push_back(new Sphere(_o, 1.5));
		objetos.push_back(new Sphere(_o, 1));
	}
}

