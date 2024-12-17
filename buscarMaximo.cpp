#include<iostream>
using namespace std;
int maximo(int arr[], int n, int max, int indice=0)
{
	if(indice==n)
	{
		return max;
	}
	else
	{
		if(arr[indice]>max)
		{
			max=arr[indice];
		}
	}
	return maximo(arr,n,max,indice+1);
}
int main()
{
	int arr[]={1,4,10,22,2,9,7}, n=7, max;
	max=arr[0];
	cout<<"maximo: "<<maximo(arr,n,max);
	
	return 0;
	
}