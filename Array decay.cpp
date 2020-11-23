#include<iostream>
using namespace std;
void pDecay (int *p)
{
	cout<<"Modified size of the array is ";
	cout<<sizeof(p)<<endl;
}

void dDecay (int (&p)[7])
{
	cout<<"Modified size of the array is ";
	cout<<sizeof(p)<<endl;
	
}

int main()
{
	int a[7]={1,2,3,4,5,6,7};
	cout<<"Size of the actual array is : ";
	cout<<sizeof(a)<<endl;
	pDecay(a);
	dDecay(a);
	return 0;
}
