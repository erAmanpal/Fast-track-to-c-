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
/*
#include<iostream>
using namespace std;
// multiple inheritance
class AA
{
	public:
	void showAA()	{		cout<<"I am class AA's method\n";		}	
};
class A
{
	public:
	void showA()	{		cout<<"I am class A's method\n";		}	
};
class B : public  A , public AA
{
	public:
	void showB()	{		cout<<"I am class B's method\n";		}	
};
int main()
{
	B objb;		objb.showB();
	objb.showAA();
	return 0;
}

*/


/*
#include<iostream>
using namespace std;
// multi level
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
class C : public B
{
	public:
	void showC()	{		cout<<"I am class C's method\n";		}	
};

int main()
{
	C obj;		 obj.showA();
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// hierarchical inheritance 
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
class C : public A
{
	public:
	void showC()	{		cout<<"I am class C's method\n";		}	
};

int main()
{
	B objb;		objb.showB();
	objb.showA();
	C obj; obj.showA();
	return 0;
}

*/

/*
#include<iostream>
using namespace std;
// hierarchical inheritance 
class A
{
	public:	void showA()	{		cout<<"I am class A's method\n";		}	
};
class B : public  A 
{
	public:	void showB()	{		cout<<"I am class B's method\n";		}	
};
class C : public A
{
	public:	void showC()	{		cout<<"I am class C's method\n";		}	
};
class D : public B, public C
{
	public:	void showD()	{		cout<<"I am class A's method\n";		}	
};

int main()
{
	D obj; obj.showB();
	return 0;
}

*/
