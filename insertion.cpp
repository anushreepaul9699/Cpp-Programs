#include<iostream>
using namespace std;
int main()
{
   int i ,n,item;
   int LA[]={1,3,5,7,8};
   cout<<"Enter the value of n : ";
   cin>>n;
   cout<<"Enter the array elements : "<<endl;
   for(i=0;i<n;i++)
   {
   	cout<<"LA ["<<i<<"]"<<"="<<LA[i]<<endl;
   }
   cout<<"Enter the element to be inserted : ";
   cin>>item;
    LA[i] = item;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<n+1; i++)
        {
        	cout<<"LA ["<<i<<"]"<<"="<<LA[i]<<endl;
		}
    
    return 0;
}
