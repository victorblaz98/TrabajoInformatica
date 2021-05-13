#include "Hombre.h"
#include "Interaccion.h"
#include "freeglut.h"
#include <iostream>

Hombre::Hombre() {
	altura = 1.8f;
	tipoArma = ESCOPETA; //ARMA INICIAL
}

Hombre::~Hombre()
{
}

void Hombre::setVel(float vx, float vy) {
	velocidad.x = vx, velocidad.y = vy;
}

void Hombre::dibuja()
{
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();

	disparos.dibuja(); //dibujo de los disparos
}

void Hombre::mueve(float t)
{
	disparos.mueve(t);	//invoca el movimiento de la lista de disparos
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

	//función para que el movimiento del hombre sea más fluido. Opcional
	if (velocidad.x != 0) {
		if (velocidad.x > 0)velocidad = velocidad.x - 0.5;
		else velocidad = velocidad.x + 0.5;
	}



}

void Hombre::disparo() {
	switch (tipoArma) {
	case PISTOLA: {
		pistola.disparo(disparos, *this); 
	}
	case ESCOPETA: {
		if (escopeta.getMunicion() > 0)		//siempre y cuando haya munición, se sigue utilizando la escopeta
			escopeta.disparo(disparos, *this);
		else
			tipoArma = PISTOLA;
	}
	}
}

void Hombre::equiparArma(tipoArma_ tipo) {
	switch (tipo) {
	case PISTOLA:
		tipoArma = PISTOLA;
	case ESCOPETA: {
		escopeta.setMunicion(30);	//se reestablece la munición
		tipoArma = ESCOPETA;
	}
	}
}

