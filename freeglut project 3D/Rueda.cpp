#include "Rueda.h"
#include "Cylinder.h"
#include "Disk.h"
Rueda::Rueda(GLUquadric* o , GLfloat radio, GLfloat ancho)
{
	_o = o;
	_radio = radio; 
	_ancho = ancho;

	objetos.push_back(new Cylinder(o, _radio, _radio, _ancho));
	objetos.push_back(new Disk(o, 0, _radio));
}



