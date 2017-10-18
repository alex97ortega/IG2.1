#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto()
{
}


ObjetoCompuesto::~ObjetoCompuesto()
{
	for (auto o : objetos){
		delete o;
	}
}
void ObjetoCompuesto::dibuja(){
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	//glMultMatrix(this->mT->m);
	for (auto o : objetos)
		//Metodo que coloque el objeto antes de dibujarlo 
		o->dibuja();
	glPopMatrix();
}