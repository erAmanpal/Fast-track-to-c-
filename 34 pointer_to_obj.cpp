#include<iostream>
using namespace std;
class abc
{
	int a;
	public:
	void input(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<"you have entered the value of a="<<a;
	}
};

int main()
{
	abc obj,*p;
	p=&obj; 
	p->input(55);	p->show();	
}
