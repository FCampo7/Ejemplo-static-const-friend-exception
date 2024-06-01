#include "Alternados.h"

Alternados::Alternados(string nombre, string apellido, string dni) :Persona(nombre, apellido, dni)
{
	comioAnteriorMente = false;
}

void Alternados::servirse(Alimento b)
{
	if (!comioAnteriorMente)
		agregarAlimento(b);

	comioAnteriorMente = !comioAnteriorMente;
}

bool Alternados::feliz()
{
	return true;
}

Alternados::~Alternados()
{
}
