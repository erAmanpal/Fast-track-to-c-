/*
 Visibility Mode in inheritance (Access Specifiers)
_____________________________________________________
|Base class	|| Mode of inheritance in Derived Class	 |				   
|(Access    ||---------------------------------------|
|Specifier)	||  Public   |   Private  |   Protected  |   
|____________________________________________________|
|Private	||     X     |     X      |       X      |
|----------------------------------------------------
|Protected	||    Pro    |      Pri   |     Pro      |
|----------------------------------------------------			
|Public		||    Pub    |      Pri   |     Pro      | 
-----------------------------------------------------
*/

#include<iostream>
using namespace std;
class Base{
	private:		int a;
	public:			int b;
	protected:		int c;
};
class Child:protected Base{
	void in()
	{
		c=20; 
		b=10; 
	}
};
class F: public Child{
void acc(){ c=88; b=99;  }	
};

int main()
{
Base obj;	
obj.b; 
	return 0;
}
