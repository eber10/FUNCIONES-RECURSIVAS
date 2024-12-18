#include<iostream>
#include<string>
using namespace std;
struct Articulos
{
	string codigo;
	string descripcion;
	int cantidad;
	double precio;
};

int main()
{
	Articulos arti[]={
		{"20","usb",4,50},
		{"21","celular",2,500},
		{"22","laptop",1,1500}
	};
	int n=3;
	int inversion[n];
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arti[i].cantidad*arti[i].precio<arti[j].cantidad*arti[j].precio)
			{
				Articulos aux=arti[i];
				arti[i]=arti[j];
				arti[j]=aux;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<"articulo: "<<i+1<<" codigo: "<<arti[i].codigo
		<<" descripcion: "<<arti[i].descripcion<<" cantidad: "<<arti[i].cantidad
		<<" precio: "<<arti[i].precio<<" inversion: "<<arti[i].cantidad*arti[i].precio<<endl;
	}
	return 0;
	
}