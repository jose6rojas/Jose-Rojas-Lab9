// Aragami.cpp

#include "Aragami.h"

Aragami::Aragami()
{
	nombre = "";
	vida = 0;
	defensa = 0;
	elemento = "";
	ataque = 0;
}
Aragami::Aragami(string nombre, int vida, int defensa, int e, int ataque)
{
	this -> nombre = nombre;
	this -> vida = vida;
	this -> defensa = defensa;
	setElemento(e);
	this -> ataque = ataque;
}

// nombre
void Aragami::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string Aragami::getNombre() { return nombre; }
// vida
void Aragami::setVida(int vida)
{
	this -> vida = vida;
}
int Aragami::getVida() { return vida; }
// defensa
void Aragami::setDefensa(int defensa)
{
	this -> defensa = defensa;
}
int Aragami::getDefensa() { return defensa; }
// elemento
void Aragami::setElemento(int e)
{
	if(e == 1)
		elemento = "Divine";
	else if(e == 2)
		elemento = "Blaze";
	else if(e == 3)
		elemento = "Freeze";
	else
		elemento = "Divine";
}
string Aragami::getElemento() { return elemento; }
// ataque
void Aragami::setAtaque(int ataque) { this -> ataque = ataque; }
int Aragami::getAtaque() { return ataque; }
