#include<iostream>
using namespace std;
int reflejo(int numero, int invierte=0)
{
	if(numero==0)
	{
		return invierte;
	}
	return reflejo(numero/10,(invierte*10)+numero%10);
}
int main()
{
	int num;
	cout<<"ingrese un numero: "; cin>>num;
	cout<<reflejo(num);
	return 0;
}