#pragma once
#include "Persona.h"
class Dietetico :
    public Persona
{
public:
    Dietetico(string nombre, string apellido, string dni);
    void servirse(Alimento b) override;
    bool feliz() override;
    ~Dietetico();
};

