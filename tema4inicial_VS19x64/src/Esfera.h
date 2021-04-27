#pragma once
#include "Vector2D.h"
#include "ColorRGB.h"
class Esfera
{
private: 
	ColorRGB color;
	float radio;

	Vector2D posicion;
	Vector2D velocidad{ 5,15 };
	Vector2D aceleracion;
public:
	Esfera();
	void dibuja();
	void mueve(float t);
	void setColor(unsigned char r, unsigned char g, unsigned char b);
	void setRadio(float r);
	void setPos(float ix, float iy);
	void setVel(float vx, float vy);

	friend class Interaccion;
};

