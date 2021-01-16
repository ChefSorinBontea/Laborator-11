#include"Oras.hpp"

Oras::Oras():bonus_venit(0),Localitate()
{
}

Oras::Oras(int bonus_venit,const char* nume,int nr_locuitori,int venit_mediu):Localitate(nume,nr_locuitori,venit_mediu), bonus_venit(bonus_venit)
{	
}

int Oras::Venit()
{
	return Localitate::Venitmediu()+bonus_venit;
}

void Oras::afisare()
{
	Localitate::afisare();
	cout<<"Bonus venit:"<<bonus_venit;
}

