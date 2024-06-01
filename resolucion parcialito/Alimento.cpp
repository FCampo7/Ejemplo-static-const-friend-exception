#include "Alimento.h"

Alimento::Alimento(string nombre, string descripcion, bool esCarne, bool tieneQueso, float calorias)
{
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->calorias = calorias;
	this->esCarne = esCarne;
	this->tieneQueso = tieneQueso;
}

string& Alimento::Nombre()
{
	return nombre;
}

string& Alimento::Descripcion()
{
	return descripcion;
}

bool& Alimento::EsCarne()
{
	return esCarne;
}

bool& Alimento::TieneQueso()
{
	return tieneQueso;
}

float& Alimento::Calorias()
{
	return calorias;
}

Alimento::~Alimento()
{
}

ostream& operator<<(ostream& os, const Alimento& a)
{
	os << a.nombre << ",\t" << a.descripcion << ((a.esCarne) ? ",\tEs carne" : ",\tNo es carne") << ((a.tieneQueso) ? ",\tTiene queso" : ",\tNo tiene queso")<<"\t"<<a.calorias<<" cal";
	return os;
}
