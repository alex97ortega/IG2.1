#ifndef H_OBJETO3D_H
#define H_OBJETO3D_H

class Objeto3D
{
public:
	Objeto3D() {};
	virtual ~Objeto3D(){};
	virtual void dibuja() = 0;
};

#endif