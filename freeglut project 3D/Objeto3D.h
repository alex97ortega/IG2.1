#pragma once
class Objeto3D
{
public:
	Objeto3D() {};
	virtual ~Objeto3D(){};
	virtual void dibuja() = 0;
};

