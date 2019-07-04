#include<iostream>
using namespace std;
class A
	{
		public:	fn() {cout<<"I am A\n";	}
	};	
class B :  public virtual  A	{	};
class C :  virtual public A	{	};
class D :  public B, public C {	};
	

int main()
{
	D obj;
	obj.fn(); 
	return 0;
}
