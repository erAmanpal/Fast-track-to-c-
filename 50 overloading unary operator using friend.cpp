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
++++++++++++++++++++++++++++++++++++++++++
friend function overloading including previous one.. following can't be overloaded:

1. ->
2. ()
3. []
4	=

Ways:  1. member function    &		 friend function
*/
class A  // user defined data type
{
	int x,y;
	public:
	A() {x=0; y=10;	}
	void show() {cout<<"c="<<x<<"\ny="<<y;	}  //show the content of data member

	friend void operator ++(A&,int);
	friend void operator ++(A&) ;
};



	void operator ++(A &o)  // overloading prefix unary increment operator
	{
		o.x++;   //++x
		o.y++;
	}
	void operator ++(A &o,int)  // overloading postfix unary increment operator
	{
		o.x++;   //++x
		o.y++;
	}	


int main()
{
	A t;
	++t; // is this a valid syntax with respect to the class
	t++;	
	t.show();

return 0;
}
