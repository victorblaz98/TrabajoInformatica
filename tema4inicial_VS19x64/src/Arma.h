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
	float getDa�o() { return da�o; }
	int getAlcance() { return alcance; }
	tipoArma_ getTipoArma() { return tipoArma; }

	void setMunicion(int municion_) { municion = municion_;}
	void setDa�o(float da�o_) { da�o = da�o_; }
	void setAlcance(int alcance_) { alcance = alcance_; }

	//acciones
	void gastaMunicion() { municion -= 1; }
	//void creaDisparo(....) -->  opci�n de funci�n auxiliar para ahorrar l�neas de c�digo en los disparos de las armas.
	
//atributos
protected:
	std::string nombre;
	int municion;
	int alcance;
	int cargador;
	float da�o;
	tipoArma_ tipoArma;

};

