// GodArc.cpp

#include "GodArc.h"

GodArc::GodArc()
{
	ataque = 0;
	elemento = "";
}
GodArc::GodArc(int ataque, int e)
{
	this -> ataque = ataque;
	setElemento(e);
}

void GodArc::setAtaque(int ataque)
{
	this -> ataque = ataque;
}
int GodArc::getAtaque() { return ataque; }

void GodArc::setElemento(int e)
{
	if(e == 1)
		elemento = "Divine";
	else if(e == 2)
		elemento = "Blaze";
	else if(e == 3)
		elemento = "Freeze";
	else
		elemento = "Blaze";
}
string GodArc::getElemento() { return elemento; }
