#include "Coche.h"
#include <iostream>

Coche::Coche()
{
	o = gluNewQuadric();
	mov = 0;

	objetos.push_back(new Cube(4)); //CARROCERIA

	objetos.push_back(new Cylinder(o, 0.3, 0.3, 1)); //FARO1
	objetos.push_back(new Cylinder(o, 0.3, 0.3, 1)); //FARO2
}

void Coche::dibuja(){
	
	glPushMatrix();
	glTranslatef(mov, 2, 0);

	glPushMatrix();
	glTranslatef(0, 0.5, 0);
	glColor3f(1.0, 0, 1.0);
	CARROCERIA->dibuja();
	glPopMatrix();

	//faros
	glPushMatrix();
	glColor3f(0, 1.0, 0);
	glTranslatef(1.5, 0.3, -1);
	glRotatef(90, 0, 1, 0);
	FARO1->dibuja();
	glTranslatef(-2, 0, 0);
	FARO2->dibuja();
	glPopMatrix();

	//ruedas
	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(1.2, -1, -3);
	glutSolidCylinder(1, 1, 10, 10);//cambiar 
	glTranslatef(-2.5, 0, 0);
	glutSolidCylinder(1, 1, 10, 10);//cambiar
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(1.2, -1, 2);
	glutSolidCylinder(1, 1, 10, 10);//cambiar
	glTranslatef(-2.5, 0, 0);
	glutSolidCylinder(1, 1, 10, 10);//cambiar
	glPopMatrix();
	glPopMatrix();
}
void Coche::mover(short int n){ // método público que para que se pueda acceder desde el main
	mov += n;
	dibuja();
}