#pragma once
#include "Vector2D.h"
#include "Pared.h"
class Disparo
{
private:


	float radio{0.25f};
	Vector2D origen;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

public:
	// Funcion para dibujar el disparo
	Disparo();
	void dibuja();
	void mueve(float t);
	void setPos(float ix, float iy);
};

