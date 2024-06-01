#include "Vegetariano.h"

Vegetariano::Vegetariano(string nombre, string apellido, string dni):Persona(nombre, apellido, dni)
{
}

void Vegetariano::servirse(Alimento b)
{
	if (!b.EsCarne()) agregarAlimento(b);
}

bool Vegetariano::feliz()
{
	bool feliz = false;
	
	Vegetariano* izq = dynamic_cast<Vegetariano*>(Izq());
	Vegetariano* der = dynamic_cast<Vegetariano*>(Der());
	
	if (izq != nullptr && der != nullptr) feliz = true;
	
	return feliz;
}

Vegetariano::~Vegetariano()
{
}
