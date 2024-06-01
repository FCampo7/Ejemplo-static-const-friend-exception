#include "Dietetico.h"

Dietetico::Dietetico(string nombre, string apellido, string dni):Persona(nombre, apellido, dni)
{
}

void Dietetico::servirse(Alimento b)
{
	if (getCaloriasConsumidas() + b.Calorias() <= 2000)
		agregarAlimento(b);
}

bool Dietetico::feliz()
{
	bool feliz=true;
	int i = 0;

	vector<string> e = getElementos();

	while (i < e.size() && e[i] != "Aceite") i++;

	if (i < e.size()) feliz = false;

	return feliz;
}

Dietetico::~Dietetico()
{
}
