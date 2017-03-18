// BusterSword.h - hija de GodArc

#include "GodArc.h"

#ifndef BUSTERSWORD_H
#define BUSTERSWORD_H

class BusterSword : public GodArc
{
	private:
		int ataqueCrush;
		int poderExplosivo;
	public:
		BusterSword();
		BusterSword(int, int, int, int); // ataqueCrush, poderExplosivo, ataque, elemento
		
		void setAtaqueCrush(int);
		int getAtaqueCrush();
		void setPoderExplosivo(int);
		int getPoderExplosivo();
};

#endif
