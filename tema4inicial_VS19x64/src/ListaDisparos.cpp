#include "ListaDisparos.h"
#include "Disparo.h"

#include <iostream>

ListaDisparos::ListaDisparos() {
	numero = 0;
	for (int i = 0;i < MAX_DISPAROS;i++)
		lista[i] = 0;

}

bool ListaDisparos::agregar(Disparo* e) {
	if (numero < MAX_DISPAROS)
		lista[numero++] = e;
	else
		return false;
	return true;
}

void ListaDisparos::eliminar(int index) {
	if ((index < 0) || (index >= numero))
		return;
	delete lista[index];
	numero--;
	for (int i = index;i < numero;i++)
		lista[i] = lista[i + 1];
}

void ListaDisparos::eliminar(Disparo* e)
{
	for (int i = 0;i < numero;i++)
		if (lista[i] == e)
		{
			eliminar(i);
			return;
		}
}

void ListaDisparos::alcance() {
	for (int i = 0; i < numero; i++) {
		
	}
}
void ListaDisparos::destruirContenido() {
	for (int i = 0;i < numero;i++) // destrucción de disparos contenidos
		delete lista[i];
	numero = 0;
}

void ListaDisparos::dibuja() {
	for (int i = 0;i < numero;i++)
		lista[i]->dibuja();

}

void ListaDisparos::mueve(float t) {
	for (int i = 0;i < numero;i++) {
		lista[i]->mueve(t);

		//función de eliminación de alcance
		float alcance = lista[i]->getAlcance();
		Vector2D dif = (lista[i]->getOrigen() - lista[i]->getPos());
		float mod = dif.modulo();
		if (mod >= alcance) {
			eliminar(i);
		}

	}
}
		


