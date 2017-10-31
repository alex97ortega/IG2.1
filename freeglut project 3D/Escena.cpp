#include "Escena.h"
#include<stdlib.h>

Escena::Escena()
{
	
	//EL COCHE SIEMPRE HABRA QUE ELVARLO 2 PARA QUE SE APOYE EN EL PLANO XZ

	objetos.push_back(new Coche);
	PuntoVector3D * v = new PuntoVector3D(0, 0.2, 0, 1);
	objetos[0]->mT->translate(v);
	numArboles = 0;


	// (0,20),(20,0)
	for (size_t i = 0; i < 50; i+=5) // 20 saltando cada 2 huecos para que haya más espacio entre árboles
	{
		for (size_t j = 0; j < 50; j+=5)
		{
			if (rand() % 4 == 0){ // se crea árbol
				numArboles++;
				switch (rand() % 4)
				{
				case 0:
					objetos.push_back(new Arbol(Arbol::Abeto));					
					break;
				case 1:
					objetos.push_back(new Arbol(Arbol::Alamo));
					break;
				case 2:
					objetos.push_back(new Arbol(Arbol::Roble));
					break;
				default:
					objetos.push_back(new Arbol(Arbol::Pino));
					break;
				}
				PuntoVector3D * v = new PuntoVector3D(i, 0, j, 1);
				objetos[numArboles]->mT->translate(v); // el 0 es el coche
			}
		}
	}
}
