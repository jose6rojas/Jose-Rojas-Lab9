// ShortSword.h - hija de GodArc

#include "GodArc.h"

#ifndef SHORTSWORD_H
#define SHORTSWORD_H

class ShortSword : public GodArc
{
        private:
                int nivelPierce;
                int poderSpeedCut;
        public:
                ShortSword();
                ShortSword(int, int, int, int); // nivelPierce, poderSpeedCut, ataque, elemento

                void setNivelPierce(int);
                int getNivelPierce();
                void setPoderSpeedCut(int);
                int getPoderSpeedCut();
};

#endif
