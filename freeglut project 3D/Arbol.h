#ifndef H_ARBOL_H
#define H_ARBOL_H

#include "ObjetoCompuesto.h"
#include "ObjetoCuadrico.h"

#define TRONCO objetos[0]
#define COPA objetos[1]
class Arbol :
	public ObjetoCompuesto
{
	
public:
	enum Tipo{ Abeto, Roble, Pino, Alamo };

	Arbol(Tipo t);
	void dibuja();
private:	
	Tipo _t;
};
#endif
