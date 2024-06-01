#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Alimento.h"

using namespace std;

class Persona
{
private:
	string nombre, apellido, dni;
	float caloriasConsumidas;
	vector<Alimento> consumido;
	vector<string> elemento;
	Persona* izquierda;
	Persona* derecha;
public:
	Persona(string nombre, string apellido, string dni);
	string& Nombre();
	string& Apellido();
	string& Dni();
	
	Persona*& Izq();
	Persona*& Der();
	
	void agregarIzqDer(Persona* izq, Persona* der);
	
	float getCaloriasConsumidas();
	
	vector<Alimento>& getConsumido();
	void agregarAlimento(Alimento a);
	
	vector<string>& getElementos();
	void agregarElemento(string e);
	
	string Pipon();
	
	void operator+(Alimento a);
	friend ostream& operator<<(ostream& os, const Persona& p);
	
	virtual void servirse(Alimento b) = 0;
	virtual bool feliz() = 0;
	virtual ~Persona();
};