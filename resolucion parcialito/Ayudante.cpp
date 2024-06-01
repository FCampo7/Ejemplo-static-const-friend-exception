#include "Ayudante.h"

Ayudante::Ayudante(string nombre, string apellido, string dni) :Persona(nombre, apellido, dni)
{
}

void Ayudante::servirse(Alimento b)
{
	agregarAlimento(b);
}

bool Ayudante::feliz()
{
	bool feliz = false;
	vector<Alimento> a = getConsumido();
	int i = 0;

	while (i < a.size() && !(a[i].EsCarne())) i++;

	if (i < a.size()) feliz = true;

	return feliz;
}

Ayudante::~Ayudante()
{
}
