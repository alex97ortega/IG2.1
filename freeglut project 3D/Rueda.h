#pragma once
#include "ObjetoCompuesto.h"
class Rueda :
	public ObjetoCompuesto
{
public:
	Rueda(GLUquadric* o, GLfloat _radio, GLfloat _ancho);
	virtual ~Rueda(){}
	dibuja();
private:
	GLfloat _radio, _ancho;
};

