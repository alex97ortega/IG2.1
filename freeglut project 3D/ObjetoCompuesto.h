#pragma once
#include "Objeto3D.h"
#include <vector>
class ObjetoCompuesto :
	public Objeto3D
{
public:
	ObjetoCompuesto();
	virtual ~ObjetoCompuesto();
	void dibuja();
private:
	std::vector <Objeto3D*> objetos; // objetos que contiene(pueden ser compuestos o cuadricos
};

