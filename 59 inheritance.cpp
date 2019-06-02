#include<iostream>
using namespace std;

class A
{
	public:
	void showA()	{		cout<<"I am class A's method\n";		}	
};
class B : public  A 
{
	public:
	void showB()	{		cout<<"I am class B's method\n";		}	
};
int main()
{
	//A obj;		 obj.showA();
	B objb;		objb.showB();
	objb.showA();
	return 0;
}
