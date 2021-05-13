#pragma once
#include "Vector2D.h"
class Disparo
{
	//atributos
private:
	float radio;
	float alcance;
	float daño;

	Vector2D origen;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	//metodos
public:

	//constructores-Destructores
	Disparo();
	virtual~Disparo();

	//getters&setters (alguna quizás sobre)
	float getAlcance() { return alcance; }
	Vector2D getPos() { return posicion; }
	Vector2D getVel() { return velocidad; }
	Vector2D getOrigen() { return origen; }
	void setRadio(float radio);
	void setAlcance(float alcance_) { alcance = alcance_; }
	void setPos(float x, float y);
	void setVel(float x, float y) { velocidad.x = x, velocidad.y = y; }
	void setAcel(float x, float y) { aceleracion.x = x, aceleracion.y = y; }
	void setPos(Vector2D pos) { posicion = pos, origen = pos; }
	void setVel(Vector2D vel) { velocidad = vel; }
	void setAcel(Vector2D acel) { aceleracion = acel; }
	void setVector(Vector2D pos, Vector2D vel, Vector2D acel);

	//funciones gráficas
	void dibuja();
	void mueve(float t);
};

