#pragma once
#include "PuntoVector3D.h"
#include "GL\freeglut.h"


class TAfin
{
public:
	TAfin();
	virtual ~TAfin();
	void postMultiplica(GLfloat* m1);
	void traslada(PuntoVector3D* v);
	void rota(PuntoVector3D* v);

private:
	GLfloat m[16];
};

