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
	for (auto o : objetos){
		o->dibuja();
	}
}