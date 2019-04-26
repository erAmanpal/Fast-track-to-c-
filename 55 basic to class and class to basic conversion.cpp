#include<iostream>
using namespace std;
class A
{
	int a; 
	public:
		A(){		}
		A(int x)  // paremetric constructor (use to cnvt basic to class)
		{
			a=x;
		}
	void show(){cout<<a;	}
	void in(){cin>>a;	}
	
	operator int()
	{
		return a;
	}
		
};


int main()
{
int a=5; // basic type
A obj; 		// user definded data type
obj  =  a;  // basic data type to class (user defined) data type
obj.show();
int var;	A o2;	o2.in();	var=o2; // class type to basic type
cout<<var;
}
