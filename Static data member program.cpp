#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A constructor is called"<<endl;
		}
};

class B
{
	
		static A a;
		
		public:
			B()
			{
				cout<<"B  constructor is called "<<endl ;
			}
};

int main()
{
	B b;
    return 0;	
}
