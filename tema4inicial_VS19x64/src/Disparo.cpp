#include "Disparo.h"
#include "freeglut.h"

Disparo::Disparo() {
	radio = 0.25f;
	velocidad.y = 2.0f;
	alcance = 2;
	daño = 10;
}

Disparo::~Disparo()
{
}

void Disparo::setRadio(float radio) {
	this->radio = radio;
}

void Disparo::setVector(Vector2D pos, Vector2D vel, Vector2D acel) {
	posicion = pos;
	velocidad = vel;
	aceleracion = acel;
}

void Disparo::setPos(float x, float y) {
	posicion.x = x;
	posicion.y = y;
	origen.x = x;
	origen.y = y;
}

void Disparo::dibuja() {
	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();

	glDisable(GL_LIGHTING);
	glBegin(GL_LINES);
	glVertex3f(origen.x, origen.y, 0.0f);
	glVertex3f(posicion.x, posicion.y, 0.0f);

	glEnd();
	glEnable(GL_LIGHTING);
	
}

void Disparo::mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

}