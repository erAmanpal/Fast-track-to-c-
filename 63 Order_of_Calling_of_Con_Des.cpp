#include<iostream>
using namespace std;
class A
	{
		public:	A() {cout<<"I am A\n";	}
		public:	~A() {cout<<"I was A\n";	}	
	};
class B
	{
		public:	B() {cout<<"I am B\n";	}
		public:	~B() {cout<<"I was B\n";	}	
	};
class C : public B, public A
	{
		public:	C() {cout<<"I am C\n";	}	
		public:	~C() {cout<<"I was C\n";	}
	};

int main()
{
	C obj;
}
