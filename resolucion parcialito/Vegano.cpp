#include "Vegano.h"

Vegano::Vegano(string nombre, string apellido, string dni):Persona(nombre, apellido, dni)
{
}

void Vegano::servirse(Alimento b)
{
	if (!b.EsCarne() && !b.TieneQueso()) agregarAlimento(b);
}

bool Vegano::feliz()
{
	bool feliz = true;
	if (getElementos().size() >= 3) feliz = false;

	return feliz;
}

Vegano::~Vegano()
{
}
