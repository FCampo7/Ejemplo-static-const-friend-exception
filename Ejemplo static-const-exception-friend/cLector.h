#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <ctime>
#include "cLibrito.h"

using namespace std;

class cLector
{
private:
	
	//static int static_id; // Incrementador de IDs
	const int id; // Identificación del lector en la biblioteca
	const string dni;

	string nombre;
	string apellido;
	string email;
	string celular;
	string fecha_nac; // "2024-04-04" 
	cLibrito* librito;
	tm convertirFecha();
public:
	cLector(string nombre, string dni, string apellido, string fecha_nac,cLibrito* librito);
	static int cant_lectores;

	static int static_id; // Incrementador de IDs
	string get_dni();
	string get_nombre();
	string get_apellido();
	string get_email();
	string get_celular();
	string ger_Fnacimiento();
	string to_string();
	void imprimir();
	void set_libro(cLibrito* New_librito);
	/// <summary>
	/// convierte la fecha string en variables enteras para operar con libreria ctime
	/// </summary>
	/// <returns>retorna la edad en anios</returns>
	int get_edad();
	void set_Email(string n_Email);
	bool set_celular(string n_Celular);
	bool leer_libro(int paginas_leidas);
	const int get_id();
	~cLector();

};

