#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s ("Anushree");
	char p [s.length()];
	int i;
	for (i=0;i<sizeof(p);i++)
	{
		p[i]=s[i];
		cout<<p[i];
	}
	return 0 ;
}
