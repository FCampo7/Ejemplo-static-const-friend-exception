#pragma once
#include "Persona.h"
class Ayudante :
    public Persona
{
public:
    Ayudante(string nombre, string apellido, string dni);
    void servirse(Alimento b) override;
    bool feliz() override;
    ~Ayudante();
};

