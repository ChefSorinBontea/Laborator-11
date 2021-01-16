#include "Tara.hpp"

Tara::Tara():l(NULL)
{
}

Tara::Tara(Localitate ** x):l(x)
{
}

void Tara::afisare()
{
	int i=0;
	while(l[i]!=NULL)
	{
		l[i]->afisare();
		i++;
		cout<<endl;
	}
}

int Tara::Venit()
{
	int i =0; 
	int v = 0;
	while(l[i]!=NULL)
	{
		v = v+l[i]->Venitmediu();
		i++;
	}
	return v;
}

int Tara::Locuitori()
{
	int i = 0; 
	int locuitori = 0 ;
	while(l[i]!=NULL)
	{
		locuitori =locuitori+l[i]->Locuitori();
		i++;
	}
	return locuitori;
}

Tara::~Tara()
{
	delete []v;
}
