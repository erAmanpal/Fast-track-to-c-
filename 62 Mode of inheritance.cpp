/*
 Visibility Mode in inheritance (Access Specifiers)
____________________________________________________
|Base class	| Mode of inheritance in Derived Class	|				   
|           |_______________________________________|
|(Access	|           |            |              |   
|Specifier) |	Public	|	Private	 |	Protected   |
____________________________________________________|
|Private	|     X     |    X       |     X        |
|----------------------------------------------------
|Protected	|   Pro     |   Pri      |    Pro       |
|----------------------------------------------------			
|Public		|   Pub     |   Pri      |    Pro       | 
-----------------------------------------------------
*/

#include<iostream>
using namespace std;

class Base
{
	private:		int a;
	public:			int b;
	protected:		int c;
};

class Child : private Base{
	void in() 
	{
		c=20;	//protected in base class
		b=10;	// public
	}
};

class F : public Child{
void acc() { 
//c=88;   //this is acting private in Child class cant accessable
//b=99;	//this is acting private in Child class cant accessable
/* As c and b is accessed from child class (immidiate parent of F class */
}	
};

int main()
{
	Base obj;
	obj.b;
	return 0;
}
