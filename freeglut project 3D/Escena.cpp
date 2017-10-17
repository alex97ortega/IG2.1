#include "Escena.h"


Escena::Escena()
{
	objetos.push_back(new Coche());
	objetos.push_back(new Arbol(Arbol::Abeto));
}
