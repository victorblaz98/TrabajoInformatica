#pragma once
#include "Disparo.h"
#include "Caja.h"
#include "Pared.h"

#define MAX_DISPAROS 100


class ListaDisparos
{
public:
	ListaDisparos();

	//acciones
	bool agregar(Disparo* e);
	void eliminar(int);
	void eliminar(Disparo*);
	void destruirContenido();

	void alcance(); //sin definir --> se ha puesto función de alcance en mueve
	void dibuja();
	void mueve(float t);

public:
	Disparo* lista[MAX_DISPAROS];
	int numero;

};
