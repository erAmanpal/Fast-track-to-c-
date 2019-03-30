// operator overloading (poly+morphism=   already learned fun.. overloading 
#include<iostream>
using namespace std;
/*
operators====>  a) unary : +a,-a,++a,a++,--a,a-- ....  b) Binary: a+b,a*b ....
Operator can't be overloaded (using member function)
1.  sizeof()
2.	::  (scope resolution operator)
3. .,.* (member  access operator)
4.	? :	(conditional operator)

*/
class A  // user defined data type
{
	int x,y;
	public:
	A() {x=0; y=10;	}
	void show() {cout<<"c="<<x<<"\ny="<<y;	}  //show the content of data member
	void operator ++()  // overloading prefix unary increment operator
	{
		x++;   //++x
		y++;
	}
	
	void operator ++(int)  // overloading postfix unary increment operator
	{
		x++;   //++x
		y++;
	}
		
};


int main()
{
	A t;
	++t; // is this a valid syntax with respect to the class
	t++;
	t.show();

return 0;
}
