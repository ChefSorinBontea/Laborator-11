#include "Localitate.hpp"
#include "Oras.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Tara.hpp"

using namespace std;

int main()
{
    Tara **x;
    Localitate **a1,**a2,**a3,**a4,**a5;
    
    a1 = new Localitate*[2];
    a1[0] = new Localitate("Castelu",3600,1200);
    a1[2] = NULL;
    
    a2 = new Localitate*[3];
    a2[0] = new Oras(540,"Navodari",63300,430);
    a2[1] = new Municipiu("Constanta",300,"Mangalia",1900,2500) ;	
    a2[2] = NULL;
    
    a3 = new Localitate*[3];
    a3[0] = new Oras(300,"Lumina",4200,900);
    a3[1] = new Municipiu("Constanta",100,"Vama Veche",70000,4000) ;
	a3[2] = NULL;	
	
    a4 = new Localitate*[3];
    a4[0] = new Oras(500,"Cernavoda",60000,9000);
    a4[1] = new Municipiu("Muntenia",300,"Pitesti",30000,2500) ;	
    a4[2] = NULL;
    
    a5 = new Localitate*[3];
    a5[0] = new Oras(300,"Agigea",8700,7700);
	a5[1] = new Municipiu("Constanta",1000,"Constanta",125000,800);
	a5[2] = NULL;	
  
    x = new Tara*[5];
	x[0] = new Tara(a1); 
	x[1] = new Tara(a2);
	x[2] = new Tara(a3);
	x[3] = new Tara(a4);
	x[4] = new Tara(a5);
	Tara *aux;
	
	for(int i=0;i<5;i++)
	{
	 	x[i]->afisare();
	 	cout<<endl;
	}
	 
	 for(int i=0;i<4;i++)
	 {
	 	for(int j=i+1;j<5;j++)
	 	{
	 		 if(x[i]->Locuitori()<x[j]->Locuitori())
	 		 {
	 		 	aux = x[i];
	 		 	x[i] = x[j];
	 		 	x[j] = aux;
			}
		}
	 	  
	 }
	 
    for(int i=0;i<4;i++)
	 {
	 	for(int j=i+1;j<5;j++)
	 	{
	 		 if(x[i]->Venit()<x[j]->Venit() )
	 		 {
	 		 	aux = x[i];
	 		 	x[i] = x[j];
	 		 	x[j] = aux;
			}
		}
	 	  
	 }
	 
	return 0;
}
