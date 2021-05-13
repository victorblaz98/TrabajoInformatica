#include "Caja.h"
#include "Hombre.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h"

class Mundo
{
public:
	Esfera esfera;
	Esfera esfera2;
	Hombre hombre;
	Caja caja;
	Bonus bonus;
	Pared plataforma;

public:
	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mover();
	void dibuja();
	void teclaEspecial(unsigned char key);

	float x_ojo;
	float y_ojo;
	float z_ojo;
};
