#pragma once
#include "Persona.h"
class Vegano :
    public Persona
{
public:
    Vegano(string nombre, string apellido, string dni);
    void servirse(Alimento b) override;
    bool feliz() override;
    ~Vegano();
};

