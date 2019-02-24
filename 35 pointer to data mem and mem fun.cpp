#include<iostream>
using namespace std;

class A
{
public:
int x;
void in(int a)
{
	x=a;
}
void fun()
{
	cout<<"this is fun funciton";
}
};

int main()
{
	A obj; 
	obj.in(100);
	int A::*p;						//Pointer to data member
	p=&A::x;  cout<<obj.*p;
	
	void (A::*funp)()=&A::fun;   	//Pointer to member function
	(obj.*funp)();
	
	

}
