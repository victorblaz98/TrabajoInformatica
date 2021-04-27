#pragma once
#include "Vector2D.h"
class Hombre
{
private:
	
	float altura{ 1.8f };
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
public:
	Hombre();
	void dibuja();
	void mueve(float t);
	void setVel(float vx, float vy);

	friend class Interaccion;
};

