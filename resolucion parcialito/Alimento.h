#pragma once
#include <iostream>
#include <string>

using namespace std;

class Alimento
{
private:
	string nombre, descripcion;
	bool esCarne;
	bool tieneQueso;
	float calorias;
public:
	Alimento(string nombre = "Carne de lomo", string descripcion = "Carne de lomo con champiñones", bool esCarne = true, bool tieneQueso = false, float calorias = 900);
	string& Nombre();
	string& Descripcion();
	bool& EsCarne();
	bool& TieneQueso();
	float& Calorias();
	friend ostream& operator<<(ostream& os, const Alimento& a);
	~Alimento();
};

