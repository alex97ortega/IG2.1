#ifndef H_ARBOL_H
#define H_ARBOL_H

#include "ObjetoCompuesto.h"
class Arbol :
	public ObjetoCompuesto
{
public:
	Arbol();
	virtual ~Arbol();
private:
	enum tipo{Abeto, Roble, Pino, Alamo};
};
#endif
