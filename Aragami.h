// Aragami.h

#include <string>

using namespace std;

#ifndef ARAGAMI_H
#define ARAGAMI_H

class Aragami
{
	private:
		string nombre;
		int vida;
		int defensa;
		string elemento;
		int ataque;
	public:
		Aragami();
		Aragami(string, int, int, int, int); // nombre, vida, defensa, elemento, ataque
		
		// nombre
		void setNombre(string);
		string getNombre();
		// vida
		void setVida(int);
		int getVida();
		// defensa
		void setDefensa(int);
		int getDefensa();
		// elemento
		void setElemento(int);
		string getElemento();
		// ataque
		void setAtaque(int);
		int getAtaque();
};

#endif
