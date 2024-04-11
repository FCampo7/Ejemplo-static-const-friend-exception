#include "cLibrito.h"
#include <sstream>
#include <iostream>
cLibrito::cLibrito(string nombre, int cant_pags, int indice, string comentarios, string autor, string editorial)
{
	this->nombre = nombre;
	this->cant_pags = cant_pags;
	this->indice = indice;
	this->comentarios = comentarios;
	this->autor = autor;
	this->editorial = editorial;
}

cLibrito::cLibrito()
{
	nombre = "El principito";
	autor = "Messi";
	editorial="alfaguara infantil";
	indice = 0;
	comentarios = "Messi trajo la tercera";
	cant_pags = 100;
}

cLibrito::cLibrito(string nombre, int indice, string comentarios)
{
	this->nombre = nombre;
	this->indice = indice;
	this->comentarios = comentarios;
	this->autor = "Jose Hernandez";
	this->editorial = "El mundo";
	this->cant_pags = 200;
}

string cLibrito::get_nombre()
{
	return nombre;
}

int cLibrito::get_Cant_Pags()
{
	return cant_pags;
}

void cLibrito::set_indice(int Pag_new)
{
	indice = Pag_new;
}

int cLibrito::get_indice()
{
	return indice;
}

string cLibrito::to_string()
{
	stringstream ss;
	ss << "El nombre del libro es:" << nombre << endl;
	ss << "Su autor es:" << autor << endl;
	ss << "Su editorial es:" << editorial << endl;
	ss << "Alguno comentarios del libro son:" << comentarios << endl;
	ss << "El libro es de " << cant_pags << "hojas" << endl;
	return ss.str();
}

void cLibrito::imprimir()
{
	std::cout << to_string();
}

cLibrito::~cLibrito()
{
}
