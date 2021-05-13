#pragma once
#include "Arma.h"


class Escopeta : public Arma {
public:
	Escopeta();
	virtual~Escopeta();

	void disparo(ListaDisparos&, Hombre);

};
