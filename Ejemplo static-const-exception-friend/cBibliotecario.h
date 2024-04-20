#pragma once
#include <string>
#include "cLibrito.h"

using namespace std;

class cBibliotecario
{
	private:
		const string dni;
		string nombre;
		string apellido;
		string email;
		string celular;
		string fecha_nac; // "2024-04-04" 
		cLibrito* librito;
	
	public:
		cBibliotecario(string nombre, string dni, string apellido, string fecha_nac, cLibrito* librito);
		int get_indice();
		cLibrito* get_libro();
		~cBibliotecario() {}
};

