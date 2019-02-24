#include<iostream>
using namespace std;
class abc
{
	int a;
	public:
		abc(int x) {	cout<<"i am constructor"<<x<<endl;	}
		~abc() { cout<<"I am destructor"<<a;		}
};


int main()
{
	abc o1(1),o2(2);
	 
return 0;	 

}

