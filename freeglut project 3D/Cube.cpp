#include "Cube.h"


Cube::Cube(int tam)
{
	t = tam;
}


Cube::~Cube()
{
}

void Cube::dibuja(){
	glutSolidCube(t);
}