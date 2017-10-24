#include "Disk.h"


Disk::Disk(GLUquadric* o, GLfloat inR, GLfloat outR)
{
	_o = o;
	_inR = inR;
	_outR = outR;
}


void Disk::dibuja(){
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glMultMatrixf(mT->getm());
	glColor3f(r, g, b);
	gluDisk(_o, _inR, _outR, 10, 10);
	glPopMatrix();
	
}