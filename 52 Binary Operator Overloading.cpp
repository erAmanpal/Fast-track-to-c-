// operator overloading (poly+morphism=   already learned fun.. overloading 
#include<iostream>
using namespace std;
/*
oo using methods (MF) :  unary oo <--> no argument
						binary oo  <--> one argument

oo using friend function :  unary oo <--> one argument
							binary oo  <--> two argument

*/
class A  // user defined data type
{
	int x,y;
	public:
	A() {x=0; y=10;	}
	A operator -(A &o)
	{
		A temp;
		temp.x=x-o.x;
		temp.y=y-o.y;
		return temp;
	}
	
	A operator *(A &o)
	{
		A temp;
		temp.x=x*o.x;
		temp.y=y*o.y;
		return temp;
	}
	void show() {cout<<"x= "<<x<<" y="<<y;	}
};


int main()
{
	A k,l,m;
	k=l*m;
						// LHS   =  RHS   o of class A= o of class A
	//k=l-m;  // binary -
	// backend calling formant ===> 		k=l.operator-(m)
	k.show();
return 0;
}
