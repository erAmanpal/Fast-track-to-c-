#include<iostream>
using namespace std;
class A
{
	int a; // data member
	public:
		A operator +(A obj)
		{
			A t;
			t.a = (this->a) + (obj.a);
			return t;		
		}
	void in() { cin>>a;}
	void show() {cout<<a;	} 
	friend ostream& operator <<(ostream& os, A obj); // extraction oper overloading
	friend istream&   operator >>(istream& is, A obj); // overload insertion operator
};

	ostream&   operator <<(ostream& os, A obj)
	{
		os<<obj.a; 
		return os;
	}
	
	istream&   operator >>(istream& is, A obj)
	{
		is>>obj.a; 
		return is;
	}

int main()
{
	A a,b,c;	cin>>a; cin>>b;	c=a+b; //c=a.operator(b)
	cout<<c;
}
