#include<iostream>
using namespace std;

class m
{
	int a; 
	public:
	void show(){cout<<a;	}
	void in(){cin>>a;	}
	int geta(){return a;	}
};

class cm
{
	int a; 
	public:
		cm(){		}
		cm(m x)  // parametric constructor (use to one class to another class)
		{
			a=x.geta()*100;
		}
	void show(){cout<<a;	}
	void in(){cin>>a;	}
};
int main()
{
	m om; om.in();
	cm ocm;  ocm=om;
	ocm.show();
	
}
