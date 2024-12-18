#include<iostream>
#include<string>
using namespace std;
struct Fecha
{
	int dia;
	int mes;
	int anio;
};
struct Personal
{
	string dni;
	string nombre;
	Fecha fechaNacimiento;
};
bool compararFechas(Fecha f1, Fecha f2)
{
	if(f1.anio<f2.anio)
	{
		return true;
	}
	if(f1.anio==f2.anio and f1.mes<f2.mes)
	{
		return true;
	}
	if(f1.anio==f2.anio and f1.mes==f2.mes and f1.dia<f2.dia)
	{
		return true;
	}
	return false;
}
void ordenarSeleDir(Personal pe[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int menor=i;
		for(int j=i+1; j<n; j++)
		{
			if(compararFechas(pe[j].fechaNacimiento,pe[menor].fechaNacimiento))
			{
				menor=j;
			}
		}
		if(menor!=i)
		{
			Personal aux=pe[i];
			pe[i]=pe[menor];
			pe[menor]=aux;
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<"nombre: "<<pe[i].nombre<<" dni: "<<pe[i].dni
		<<" fecha de nacimiento: "<<pe[i].fechaNacimiento.dia<<"/"<<pe[i].fechaNacimiento.mes
		<<"/"<<pe[i].fechaNacimiento.anio<<endl;
	}
}
int busquedaBinaria(Personal pe[],int n, int valor)
{
	int izq=1, der=n, m, cen=0, pos;
	while(izq<=der and cen==0)
	{
		m=(izq+der)/2;
		if(pe[m].fechaNacimiento.anio==valor)
		{
			cen=1;
		}
		else
		{
			if(pe[m].fechaNacimiento.anio<valor)
			{
				izq=m+1;
			}
			else
			{
				der=m-1;
			}
		}
	}
	if(cen==1)
	{
		pos=m;
	}
	else
	{
		pos=-izq;
	}
	return pos;
	
}
int main()
{
	Personal per[]={
		{"73434355","marcos",{1,5,2002}},
		{"8373344","luis",{4,11,1995}},
		{"08373434","gabriel",{6,2,2024}},
		{"93734343","pedro",{7,12,2000}}
	};
	int n=4, valo, indice;
	ordenarSeleDir(per,n);
	cout<<"ingrese el anio a buscar: "; cin>>valo;
	indice=busquedaBinaria(per,n,valo);
	if(indice>=0)
	{
		cout<<"nombre: "<<per[indice].nombre<<endl;
		cout<<"dni: "<<per[indice].dni<<endl;
		cout<<"fecha de nacimiento: "<<per[indice].fechaNacimiento.dia<<"/"
		<<per[indice].fechaNacimiento.mes<<"/"<<per[indice].fechaNacimiento.anio<<endl;
	}
	else
	{
		cout<<"no se encontro una persona "<<endl;
	}
	return 0;
}