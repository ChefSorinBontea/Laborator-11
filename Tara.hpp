#ifndef TARA_HPP
#define TARA_HPP

#include "Oras.hpp"

class Tara 
{
	Localitate **l;     
public:
    Tara();
    Tara(Localitate **);
    int Locuitori();
    int Venit();
    void afisare();
    ~Tara();
};
#endif
