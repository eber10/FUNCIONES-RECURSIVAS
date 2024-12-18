#include<iostream>
#include<string>
using namespace std;
struct fecha
{
	int dia;
	int mes;
	int anio;
};
struct Personal
{
	string dni;
	string nombre;
	fecha fechaNacimiento;
};
bool compararFechas(fecha f1, fecha f2)
{
	if(f1.anio<f2.anio)
	{
		return true;
	}
	if(f1.anio==f2.anio &&f1.mes<f2.mes)
	{
		return true;
	}
	if(f1.anio==f2.anio && f1.mes==f2.mes && f1.dia<f2.dia)
	{
		return true;
	}
	
	return false;
}
void ordenarSeleccionDir(Personal per[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int menor=i;
		for(int j=i+1; j<n; j++)
		{
			if(compararFechas(per[j].fechaNacimiento, per[menor].fechaNacimiento))
			{
				menor=j;
			}
		}
		if(menor!=i)
		{
			Personal temp=per[i];
			per[i]=per[menor];
			per[menor]=temp;
		}	
	}
	for(int i=0; i<n; i++)
	{
	 cout << "DNI: " << per[i].dni
             << ", Nombre: " << per[i].nombre
             << ", Fecha de nacimiento: " << per[i].fechaNacimiento.dia << "/"
             << per[i].fechaNacimiento.mes << "/" << per[i].fechaNacimiento.anio
             << endl;
		
	}
}

int main()
{
	Personal per[]={
		{"7193533","daniel",{1,4,2000}},
		{"7293232","carlos",{1,3,2000}},
		{"8723242","mario",{6,3,2015}}
	};
	int n=3;
	ordenarSeleccionDir(per,n);

	return 0;
	
}