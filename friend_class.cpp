#include<iostream>
using namespace std;
class abc
{
	int a;
	public:

	void input()
	{
		cout<<"enter the integer value for a";
		cin>>a;
	}
	void show()
	{
		cout<<"you have entered the value of a="<<a;
	}
	friend class ff;
};

class ff
{
public: 
	void f_fun(abc x)
	{
	cout<<x.a;
	}
};
int main()
{
	abc obj;
	obj.input();
	ff o;
	o.f_fun(obj);		
}
