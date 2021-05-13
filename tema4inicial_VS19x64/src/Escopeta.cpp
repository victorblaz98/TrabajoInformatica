#include "Escopeta.h"
#include "Hombre.h"		//Hombre.h se debe incluir obligatoriamente en .cpp, de lo contrario da error

#include <iostream>

Escopeta::Escopeta() {
	//CONSTRUCTOR
	tipoArma = ESCOPETA;
	alcance = 10;
	municion = 5;
	daño = 10;
	cargador = 0;
	nombre = "Escopeta";
}

Escopeta::~Escopeta() {
	//DESTRUCTOR
}

void Escopeta::disparo(ListaDisparos& disparos_, Hombre h) {
	
	Vector2D pos = h.getPosicion();
	Disparo* d1 = new Disparo();		
	d1->setAlcance(10.0f);
	d1->setPos(pos);
	d1->setVel(-2.5f, 5.0f);
	d1->setAcel(0.0f, 4.0f);
	disparos_.agregar(d1);
	
	Disparo* d2 = new Disparo();
	d2->setAlcance(10.0f);
	d2->setPos(pos);
	d2->setVel(2.5f, 5.0f);
	d2->setAcel(0.0f, 4.0f);
	disparos_.agregar(d2);

	Disparo* d3 = new Disparo();
	d3->setAlcance(10.0f);
	d3->setPos(pos);
	d3->setVel(0.0f, 5.0f);
	d3->setAcel(0.0f, 4.0f);
	disparos_.agregar(d3);
	gastaMunicion();		//resta 1 a la munición actual
}