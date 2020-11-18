#include<iostream>
using namespace std ;
int main ()
{
	int i;
	int arr[4];
	arr[0]= 1;
	arr[2]=9;
	arr[1]=arr[2];
    arr[3]=arr[2];
	for(i=0;i<4;i++)
	{
		cout<<arr[i];
		}	
	return 0;
}
