#pragma once
#include "ListaDisparos.h"
#include <string>

/*
NOTA: las armas funcionan con una clase base Arma, y clases derivadas.
Faltan por implementar los cargadores.
*/

enum tipoArma_ {
	PISTOLA,
	ESCOPETA
};


class Arma {
friend class Hombre;

//metodos
public:

	//constructores-Destructores
	Arma();
	virtual~Arma();

	//getters&setters
	int getMunicion() { return municion; }
	float getDaño() { return daño; }
	int getAlcance() { return alcance; }
	tipoArma_ getTipoArma() { return tipoArma; }

	void setMunicion(int municion_) { municion = municion_;}
	void setDaño(float daño_) { daño = daño_; }
	void setAlcance(int alcance_) { alcance = alcance_; }

	//acciones
	void gastaMunicion() { municion -= 1; }
	//void creaDisparo(....) -->  opción de función auxiliar para ahorrar líneas de código en los disparos de las armas.
	
//atributos
protected:
	std::string nombre;
	int municion;
	int alcance;
	int cargador;
	float daño;
	tipoArma_ tipoArma;

};

