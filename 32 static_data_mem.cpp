#include<iostream>
using namespace std;
class abc
{
	int a;
	
	static int s;
	public:
	void input(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<"a="<<a<<"   s="<<s<<endl;
	}
	static void inc()
	{
		s++;
	}

};
int abc::s;
int main()
{
	abc o1,o2,o3;
	o1.input(3);
	o2.input(5);
	o3.input(1);
	o1.inc();
	o2.inc();
	o3.inc();
	o1.show();
	o2.show();
	o3.show();
}
