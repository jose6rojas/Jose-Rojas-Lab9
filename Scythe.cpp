// Scythe.cpp - hija de GodArc

#include "Scythe.h"

Scythe::Scythe() { }
Scythe::Scythe(int nivelSlash, int poderCorteLargo, int ataque, int e) : GodArc(ataque, e)
{
        this -> nivelSlash = nivelSlash;
        this -> poderCorteLargo = poderCorteLargo;
}

// nivelSlash
void Scythe::setNivelSlash(int nivelSlash)
{
        this -> nivelSlash = nivelSlash;
}
int Scythe::getNivelSlash() { return nivelSlash; }

// poderCorteLargo
void Scythe::setPoderCorteLargo(int poderCorteLargo)
{
        this -> poderCorteLargo = poderCorteLargo;
}
int Scythe::getPoderCorteLargo() { return poderCorteLargo; }
