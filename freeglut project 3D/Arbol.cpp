#include "Arbol.h"


Arbol::Arbol(Tipo t)
{
	_t = t;
}

void Arbol::dibuja(){
	switch (_t)
	{
	case Arbol::Abeto: // 1 CONO
		glPushMatrix();
		glTranslatef(7, 0, -3);
		glRotatef(-90, 1, 0, 0);
		glColor3f(0.5, 0.6, 0.2);
		glutSolidCylinder(1, 4, 10, 10);//cambiar
		glTranslatef(0, 0, 5);
		glColor3f(0, 1, 0);
		glutSolidSphere(1, 10, 10);//cambiar
		glPopMatrix();
		break;
	case Arbol::Roble: // 1 ESFERA
		glPushMatrix();
		glTranslatef(7, 0, -3);
		glRotatef(-90, 1, 0, 0);
		glColor3f(0.5, 0.6, 0.2);
		glutSolidCylinder(1, 4, 10, 10);//cambiar
		glTranslatef(0, 0, 5);
		glColor3f(0, 1, 0);
		glutSolidSphere(1, 10, 10);//cambiar
		glPopMatrix();
		break;
	case Arbol::Pino: // 2 CONOS
		glPushMatrix();
		glTranslatef(7, 0, -3);
		glRotatef(-90, 1, 0, 0);
		glColor3f(0.5, 0.6, 0.2);
		glutSolidCylinder(1, 4, 10, 10);//cambiar
		glTranslatef(0, 0, 5);
		glColor3f(0, 1, 0);
		glutSolidSphere(1, 10, 10);//cambiar
		glPopMatrix();
		break;
	case Arbol::Alamo: // 2 ESFERAS
		glPushMatrix();
		glTranslatef(7, 0, -3);
		glRotatef(-90, 1, 0, 0);
		glColor3f(0.5, 0.6, 0.2);
		glutSolidCylinder(1, 4, 10, 10);//cambiar
		glTranslatef(0, 0, 5);
		glColor3f(0, 1, 0);
		glutSolidSphere(1, 10, 10);//cambiar
		glPopMatrix();
		break;
	default:
		break;
	}	
}