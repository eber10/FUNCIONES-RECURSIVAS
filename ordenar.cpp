#include<iostream>
#include<string>
using namespace std;
struct Articulo
{
	string codigo;
	string descripcion;
	int precio;
	int cantidad;
};
int main()
{
	Articulo arti[3];
	int montoInversion[3];
	int n=3;
	for(int i=0; i<n; i++)
	{
		cout<<"articulo "<<i+1<<endl;
		cout<<"Codigo: "; cin>>arti[i].codigo;
		cout<<"descripcion: "; cin>>arti[i].descripcion;
		cout<<"precio: "; cin>>arti[i].precio;
		cout<<"cantidad: "; cin>>arti[i].cantidad;
		montoInversion[i]=arti[i].precio*arti[i].cantidad;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(montoInversion[i]<montoInversion[j])
			{
				Articulo aux=arti[i];
				arti[i]=arti[j];
				arti[j]=aux;
				int aux1=montoInversion[i];
				montoInversion[i]=montoInversion[j];
				montoInversion[j]=aux1;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<"articulo:"<<i+1<<" codigo: "<<arti[i].codigo<<"  descripcion: "<<arti[i].descripcion<<"  precio: "<<arti[i].precio<<"  cantidad: "<<arti[i].cantidad<<" inversion: "<<montoInversion[i]<<endl;
		
	}
	
	return 0;
	
}