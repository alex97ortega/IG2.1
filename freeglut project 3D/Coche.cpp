#include "Coche.h"
#include "Rueda.h"

Coche::Coche()
{
	mov = 0;

	objetos.push_back(new Cube(4, 1.0, 0, 1.0)); //CARROCERIA
	
	objetos.push_back(new Cylinder(_o, 0.3, 0.3, 1, 0, 1.0, 0)); //FARO1
	objetos.push_back(new Cylinder(_o, 0.3, 0.3, 1, 0, 1.0, 0)); //FARO2

	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_ID
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_IA
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_DD
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_DA

	
	PuntoVector3D * v = new PuntoVector3D(0, 0.5, 0, 1);
	CARROCERIA->mT->translate(v);

	//faros
	v = new PuntoVector3D(1.5, 0.3, -1, 1);
	FARO1->mT->translate(v);
	v = new PuntoVector3D(0, 1, 0, 0);
	FARO1->mT->rotate(90.0, v);

	v = new PuntoVector3D(1.5, 0.3, 1, 1);
	FARO2->mT->translate(v);
	v = new PuntoVector3D(0, 1, 0, 0);
	FARO2->mT->rotate(90.0, v);

	//ruedas
	v = new PuntoVector3D(1.2, -1, -3, 1);
	RUEDA_ID->mT->translate(v);

	v = new PuntoVector3D(-1.2, -1, -3, 1);
	RUEDA_IA->mT->translate(v);

	v = new PuntoVector3D(0, 1, 0, 0);
	RUEDA_DD->mT->rotate(180.0, v);
	v = new PuntoVector3D(-1.2, -1, -2.5, 1);
	RUEDA_DD->mT->translate(v);

	v = new PuntoVector3D(0, 1, 0, 0);
	RUEDA_DA->mT->rotate(180.0, v);
	v = new PuntoVector3D(1.2, -1, -2.5, 1);
	RUEDA_DA->mT->translate(v);
}

void Coche::avanzaIzquierda(){ 

	PuntoVector3D * v = new PuntoVector3D(3, 0, 0, 0);
	mT->translate(v);

	v = new PuntoVector3D(0, 1, 0, 0);
	mT->rotate(10, v);
}

void Coche::avanzaDerecha() { // método público que para que se pueda acceder desde el main

	PuntoVector3D * v = new PuntoVector3D(3, 0, 0, 0);
	mT->translate(v);

	v = new PuntoVector3D(0, 1, 0, 0);
	mT->rotate(-10, v);
}

void Coche::retrocedeIzquierda() { // método público que para que se pueda acceder desde el main

	PuntoVector3D * v = new PuntoVector3D(0, 1, 0, 0);
	mT->rotate(-10, v);

	v = new PuntoVector3D(-3, 0, 0, 0);
	mT->translate(v);

}

void Coche::retrocedeDerecha() { 

	PuntoVector3D * v = new PuntoVector3D(0, 1, 0, 0);
	mT->rotate(10, v);

	v = new PuntoVector3D(-3, 0, 0, 0);
	mT->translate(v);

}
