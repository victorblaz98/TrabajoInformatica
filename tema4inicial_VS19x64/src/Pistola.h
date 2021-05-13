#pragma once
#include "Arma.h"


class Pistola : public Arma {
public:
	Pistola();
	virtual~Pistola();

	void disparo(ListaDisparos&, Hombre);

};
