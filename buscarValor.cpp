#include<iostream>
using namespace std;
bool buscarValor(int x, int arr[], int n,int indice=0)
{
	if(indice==n)
	{
		return 0;
	}
	else
	{
		if(arr[indice]==x)
		{
			cout<<"valor encontrado "<<endl;
			cout<<"se encuentra en la posicion: "<<indice<<endl;
			return 1;
		}
	}
	return buscarValor(x, arr, n, indice+1);
}
int main()
{
	int arr[]={1,6,5,2,7,8,9}, n=7, x;
	cout<<"ingrese el valor a buscar: "; cin>>x;
	if(!buscarValor(x,arr,n))
	{
		cout<<"valor no encontrado"<<endl;
	}
	return 0;
	
}