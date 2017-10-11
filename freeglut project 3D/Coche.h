#ifndef H_COCHE_H
#define H_COCHE_H

#include "ObjetoCompuesto.h"
#include "ObjetoCuadrico.h"
class Coche :
	public ObjetoCompuesto
{
public:
	Coche();
	virtual ~Coche();
};
#endif
