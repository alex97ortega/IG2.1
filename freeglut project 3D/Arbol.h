#ifndef H_ARBOL_H
#define H_ARBOL_H

#include "ObjetoCompuesto.h"
#include "ObjetoCuadrico.h"
#include "GL\freeglut.h"
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
