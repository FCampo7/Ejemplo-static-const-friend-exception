#pragma once
#include "Persona.h"

class Alternados :
    public Persona
{
private:
    bool comioAnteriorMente;
public:
    Alternados(string nombre, string apellido, string dni);
    void servirse(Alimento b) override;
    bool feliz() override;
    ~Alternados();
};


