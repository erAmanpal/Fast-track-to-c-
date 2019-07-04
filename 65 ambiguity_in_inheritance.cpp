#include<iostream>
using namespace std;
class A
	{
		public:	fn() {cout<<"I am A\n";	}
	};	
class B
	{
		public:	fn() {cout<<"I am B\n";	}
	};
class C :  public A,public B
	{
			
	};

int main()
{
	C obj;
	obj.B::fn(); 
	return 0;
}
