#include "cBibliotecario.h"

cBibliotecario::cBibliotecario(string nombre, string dni, string apellido, string fecha_nac, cLibrito* librito) : dni(dni)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->fecha_nac = fecha_nac;
    this->email = "0";
    this->celular = "0";
    this->librito = librito;
}

int cBibliotecario::get_indice()
{
    return librito->indice;
}

cLibrito* cBibliotecario::get_libro()
{
    return librito;
}




