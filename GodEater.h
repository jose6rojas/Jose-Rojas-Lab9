// GodEater.h

#include <string>
#include "GodArc.h"

using namespace std;

#ifndef GODEATER_H
#define GODEATER_H

class GodEater
{
	private:
		string nombre;
		int vida;
		int nivel;
		int defensa;
		GodArc* arma;
	public:
		GodEater();
		GodEater(string, int); // nombre, nivel
		
		// nombre
		void setNombre(string);
		string getNombre();
		// vida
		int getVida();
		// nivel
		void setNivel(int);
		int getNivel();
		// defensa
		int getDefensa();
		// arma
		void setArma(GodArc*);
		GodArc* getArma();
		
		// ~GodEater() { delete arma; }
};

#endif
