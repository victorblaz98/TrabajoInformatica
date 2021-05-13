#pragma once
#include "Vector2D.h"
#include "ListaDisparos.h"
#include "Escopeta.h"
#include "Pistola.h"

class Hombre
{
	//atributos	
private:
	tipoArma_ tipoArma; //indica qué arma está en uso
	Pistola pistola;
	Escopeta escopeta;
	ListaDisparos disparos; //La lista que gestiona los disparos pertenece a hombre

	float altura;
	Vector2D posicion;
	Vector2D velocidad = (0.0f,0.0f);
	Vector2D aceleracion;

	//metodos
public:
	Hombre();
	virtual~Hombre();
	
	//getters&setters
	void setVel(float vx, float vy);
	float getAltura() { return altura; }
	Vector2D getPosicion() { return posicion; }
	Vector2D getVelocidad() { return velocidad; }
	Vector2D getAceleracion() { return aceleracion; }
	
	//armas
	void disparo(); //el disparo del hombre llama a funciones de disparo de las armas según tipoArma
	void equiparArma(tipoArma_);
	
	//gráfico
	void dibuja();
	void mueve(float t);

	friend class Interaccion;


};

