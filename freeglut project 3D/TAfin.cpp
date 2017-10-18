#include "TAfin.h"


TAfin::TAfin()
{
}


TAfin::~TAfin()
{
}

void TAfin::traslada(PuntoVector3D* v) {
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(v->getX(), v->getY(), v->getZ());
	GLfloat m1[16];
	//Dejar la matriz actual de modelado-vista en m1
	//Los 16 datos est�n enumerados por columnas
	glGetFloatv(GL_MODELVIEW_MATRIX, m1);
	glPopMatrix();
	postMultiplica(m1);
}

void TAfin::postMultiplica(GLfloat* m1) { //  post-multiplica (m= m * m1;)
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadMatrixf(m); 	//Cargar m como matriz actual de modelado-vista
	glMultMatrixf(m1); 	//Post-multiplicar por m1
	glGetFloatv(GL_MODELVIEW_MATRIX, m); 	//Dejar el resultado en m
	glPopMatrix();
}
