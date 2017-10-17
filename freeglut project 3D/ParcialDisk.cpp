#include "ParcialDisk.h"


ParcialDisk::ParcialDisk(GLUquadric* o, GLfloat inR, GLfloat outR, GLfloat fAng, GLfloat sAng)
{
	_o = o;
	_inR = inR;
	_outR = outR;
	_fAng = fAng;
	_sAng = sAng;
}

void ParcialDisk::dibuja(){
	gluPartialDisk(_o, _inR, _outR, 10, 10, _fAng, _sAng);
}
