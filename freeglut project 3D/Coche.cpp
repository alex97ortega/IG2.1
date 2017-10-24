#include "Coche.h"
#include "Rueda.h"

Coche::Coche()
{
	mov = 0;

	objetos.push_back(new Cube(4)); //CARROCERIA
	
	objetos.push_back(new Cylinder(_o, 0.3, 0.3, 1)); //FARO1
	objetos.push_back(new Cylinder(_o, 0.3, 0.3, 1)); //FARO2

	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_ID
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_IA
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_DD
	objetos.push_back(new Rueda(_o, 1, 1)); //RUEDA_DA
}

/*void Coche::dibuja(){
	
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
	RUEDA_ID->dibuja();
	glTranslatef(-2.5, 0, 0);
	RUEDA_IA->dibuja();
	glRotatef(180, 0, 1, 0);
	glTranslatef(-2.5, 0, -6);
	RUEDA_DD->dibuja();
	glTranslatef(2.5, 0, 0);
	RUEDA_DA->dibuja();
	glPopMatrix();

	glPopMatrix();
}*/
void Coche::mover(short int n){ // método público que para que se pueda acceder desde el main
	mov += n;
	dibuja();
}