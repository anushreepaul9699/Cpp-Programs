#include<iostream>
using namespace std ;

//Reverse Function

void reverse(string str)
{
	for(int i = str.length()-1;i>=0;i--)
	{
		cout<<str[i];
		
	}
}

//Driver Code

int main ()
{
	string s="Anushree";
	reverse(s);
	return 0;
}
