#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include<iostream>
#include<cstring>

class Localitate 
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public :
    Localitate();
    Localitate(const char* ,int ,int);  	
	int Locuitori();
	int Venitmediu();
    void afisare();
    Localitate & operator=(const Localitate&);
    ~Localitate();
        	
};

#endif
