#include<iostream>
using namespace std;
int main ()
{
	int arr[5],i;
	cout<<"Size of the array is : "<<sizeof(int)<<"\n";
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"The address of arr ["<<i<<"] is "<<&arr[i<<"\n"];
	}
	return 0;
}
