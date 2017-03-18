// GodArc.h

#include <string>

using namespace std;

#ifndef GODARC_H
#define GODARC_H

class GodArc
{
	protected:
		int ataque;
		string elemento;
	public:
		GodArc();
		GodArc(int, int);
		
		void setAtaque(int);
		int getAtaque();
		void setElemento(int); // 1. Divine, 2. Blaze, 3. Freeze
		string getElemento();
		
		virtual int attack() { return ataque; }
};

#endif
