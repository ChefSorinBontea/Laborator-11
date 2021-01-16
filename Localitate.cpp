#include "Localitate.hpp"

Localitate::Localitate():,nr_locuitori(0),venit_mediu(0)
{
	nume = NULL;
}

Localitate::Localitate(const char* nume,int nr_locuitori,int venit_mediu) :nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
	this->nume = new char[strlen(nume) +1];
	strcpy(this->nume,nume);
}

int Localitate::Venitmediu()
{
	return venit_mediu;
}

int Localitate::Locuitori()
{
	return nr_locuitori;
}

void Localitate::afisare()
{
	cout<<"Nume :"<<nume<<endl;
	cout<<"Numar locuitori : "<<nr_locuitori<<endl;
	cout<<"Venit mediu :"<<venit_mediu;
	

}

Localitate & Localitate::operator=(const Localitate& obj)
{
	this->venit_mediu=obj.venit_mediu;
	this->nr_locuitori=obj.nr_locuitori;
	if(nume!=NULL)
	{
		delete []nume;
	}
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	
	return *this;
}

Localitate::~Localitate()
{
	delete []nume;
}
