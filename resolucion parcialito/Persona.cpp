#include "Persona.h"

Persona::Persona(string nombre, string apellido, string dni)
{
	caloriasConsumidas = 0;
	this->nombre = nombre;
	this->apellido = apellido;
	this->dni = dni;
	this->izquierda = nullptr;
	this->derecha = nullptr;
}

string& Persona::Nombre()
{
	return nombre;
}

string& Persona::Apellido()
{
	return apellido;
}

string& Persona::Dni()
{
	return dni;
}

Persona*& Persona::Izq()
{
	return izquierda;
}

Persona*& Persona::Der()
{
	return derecha;
}

void Persona::agregarIzqDer(Persona* izq, Persona* der)
{
	izquierda = izq;
	derecha = der;
}

float Persona::getCaloriasConsumidas()
{
	return caloriasConsumidas;
}

vector<Alimento>& Persona::getConsumido()
{
	return consumido;
}

void Persona::agregarAlimento(Alimento a)
{
	if (caloriasConsumidas + a.Calorias() <= 5000) {
		consumido.push_back(a);
		caloriasConsumidas += a.Calorias();
	}
}

vector<string>& Persona::getElementos()
{
	return elemento;
}

void Persona::agregarElemento(string e)
{
	elemento.push_back(e);
}

string Persona::Pipon()
{
	int i = 0;
	string s = "No estoy Pipón :'(";

	while (i < consumido.size() && consumido[i].Calorias() < 1500) i++;

	if (i < consumido.size())
		s = "Estoy Pipón! :D";

	return s;
}

void Persona::operator+(Alimento a)
{
	agregarAlimento(a);
}

ostream& operator<<(ostream& os, const Persona& p)
{
	os << p.nombre << " " << p.apellido << " " << p.dni;
	return os;
}

Persona::~Persona()
{
}