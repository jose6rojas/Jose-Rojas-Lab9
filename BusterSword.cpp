// BusterSword.cpp - hija de GodArc

#include "BusterSword.h"

BusterSword::BusterSword() { }
BusterSword::BusterSword(int ataqueCrush, int poderExplosivo, int ataque, int e) : GodArc(ataque, e)
{
	this -> ataqueCrush = ataqueCrush;
	this -> poderExplosivo = poderExplosivo;
}

// ataqueCrush
void BusterSword::setAtaqueCrush(int ataqueCrush)
{
	this -> ataqueCrush = ataqueCrush;
}
int BusterSword::getAtaqueCrush() { return ataqueCrush; }

// poderExplosivo
void BusterSword::setPoderExplosivo(int poderExplosivo)
{
	this -> poderExplosivo = poderExplosivo;
}
int BusterSword::getPoderExplosivo() { return poderExplosivo; }
