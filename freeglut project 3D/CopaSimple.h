#ifndef H_COPASIMPLE_H
#define H_COPASIMPLE_H
#include "ObjetoCompuesto.h"
class CopaSimple :
	public ObjetoCompuesto
{
public:
	enum Tipo{ Abeto, Roble };
	CopaSimple(Tipo copa);
	virtual ~CopaSimple(){}
private:
	Tipo _copa;
};

#endif