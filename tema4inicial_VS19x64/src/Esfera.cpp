#include "Esfera.h"
#include "freeglut.h"

Esfera::Esfera() {
	color.r = color.b = color.g = 255; //Valor por defecto de la esfera: blanco
	radio = 1.0f;
	aceleracion.y = -9.8f; //aceleracion de la gravedad
}

void Esfera::dibuja()
{
	// TODO: Agregar aqu� el c�digo de implementaci�n.
	glColor3ub(color.r, color.g, color.b);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}


void Esfera::mueve(float t)
{
	// TODO: Agregar aqu� el c�digo de implementaci�n.
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}


void Esfera::setColor(unsigned char r, unsigned char g, unsigned char b)
{
	// TODO: Agregar aqu� el c�digo de implementaci�n.
	color.r = r;
	color.g = g;
	color.b = b;
}


void Esfera::setRadio(float r)
{
	// TODO: Agregar aqu� el c�digo de implementaci�n.
	if (r < 0.1f)r = 0.1f;
	radio = r;
}


void Esfera::setPos(float ix, float iy)
{
	// TODO: Agregar aqu� el c�digo de implementaci�n.
	posicion.x = ix;
	posicion.y = iy;
}

void Esfera::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
