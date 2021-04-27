#include "Hombre.h"
#include "freeglut.h"

Hombre::Hombre() {
	aceleracion.y = 0;
	posicion.x = 0; posicion.y = 0;
}


void Hombre::dibuja()
{
	// TODO: Agregar aquí el código de implementación.
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidSphere(altura, 20, 20);
	glPopMatrix();
}


void Hombre::mueve(float t)
{
	// TODO: Agregar aquí el código de implementación.
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}

void Hombre::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}
