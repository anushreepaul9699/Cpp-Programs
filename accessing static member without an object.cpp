#include<iostream>
using namespace std ;
class A

{
	int x;
	public:
		A()
		{
			cout<<"A's contructor is called "<<endl;
			
		}
};

class B
{
	static A a ;
	
	public :
		B()
		{
			cout<<"B's contructor is called "<<endl;
		}
			static A getA()
			{
				return a;
			}
			
		};


A B ::a; // definition of a 

int main()
{
	A a = B ::getA();//static member 'a' is accessed without an object 
	
	return 0;
	
	
}
