// ShortSword.cpp - hija de GodArc

#include "ShortSword.h"

ShortSword::ShortSword() { }
ShortSword::ShortSword(int nivelPierce, int poderSpeedCut, int ataque, int e) : GodArc(ataque, e)
{
        this -> nivelPierce = nivelPierce;
        this -> poderSpeedCut = poderSpeedCut;
}

// nivelPierce
void ShortSword::setNivelPierce(int nivelPierce)
{
        this -> nivelPierce = nivelPierce;
}
int ShortSword::getNivelPierce() { return nivelPierce; }

// poderSpeedCut
void ShortSword::setPoderSpeedCut(int poderSpeedCut)
{
        this -> poderSpeedCut = poderSpeedCut;
}
int ShortSword::getPoderSpeedCut() { return poderSpeedCut; }
