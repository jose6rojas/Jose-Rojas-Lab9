// Scythe.h - hija de GodArc

#include "GodArc.h"

#ifndef SCYTHE_H
#define SCYTHE_H

class Scythe : public GodArc
{
        private:
                int nivelSlash;
                int poderCorteLargo;
        public:
                Scythe();
                Scythe(int, int, int, int); // nivelSlash, poderCorteLargo, ataque, elemento

                void setNivelSlash(int);
                int getNivelSlash();
                void setPoderCorteLargo(int);
                int getPoderCorteLargo();
		
		int attack() { return ataque + nivelSlash; }
};

#endif
