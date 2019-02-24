#include<iostream>
using namespace std;
class abc
{
	int a;
	public:
	void input(int x,int y)
	{
		a=x+y;
	}
	void show()
	{
		cout<<"you have entered the value of a="<<a;
	}
};

int main()
{
	abc obj;
	obj.input(88,10);	obj.show();	
}
