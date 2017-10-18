#pragma once
#include "ObjetoCompuesto.h"

#define COPA1 objetos[0]
#define COPA2 objetos[1]

class CopaDoble :
	public ObjetoCompuesto
{
public:
	enum Tipo{ Pino, Alamo };
	CopaDoble(Tipo copa);
	virtual ~CopaDoble(){}
	void dibuja();
private:
	Tipo _copa;
};

