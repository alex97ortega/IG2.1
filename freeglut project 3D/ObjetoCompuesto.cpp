#include "ObjetoCompuesto.h"


ObjetoCompuesto::ObjetoCompuesto()
{
}


ObjetoCompuesto::~ObjetoCompuesto()
{
}
void ObjetoCompuesto::dibuja(){
	for (auto o : objetos){
		o->dibuja();
	}
}