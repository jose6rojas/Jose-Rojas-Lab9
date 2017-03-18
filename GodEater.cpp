// GodEater.cpp

#include "GodEater.h"

GodEater::GodEater() { }
GodEater::GodEater(string nombre, int nivel)
{
	this -> nombre = nombre;
	vida = nivel * 50;
	this -> nivel = nivel;
	defensa = nivel * 20;
	// GodArc*
}

// nombre
void GodEater::setNombre(string nombre)
{
	this -> nombre = nombre;
}
string GodEater::getNombre() { return nombre; }
// vida
int GodEater::getVida() { return vida; }
// nivel
void GodEater::setNivel(int nivel)
{
	this -> nivel = nivel;
	vida = nivel * 50;
	defensa = nivel * 20;
}
int GodEater::getNivel() { return nivel; }
// defensa
int GodEater::getDefensa() { return defensa; }
// arma
void GodEater::setArma(GodArc* arma)
{
	this -> arma = arma;
}
GodArc* GodEater::getArma() { return arma; }
