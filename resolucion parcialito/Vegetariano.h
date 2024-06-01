#pragma once
#include "Persona.h"
class Vegetariano :
    public Persona
{
public:
    Vegetariano(string nombre, string apellido, string dni);
    void servirse(Alimento b) override;
    bool feliz() override;
    ~Vegetariano();
};

