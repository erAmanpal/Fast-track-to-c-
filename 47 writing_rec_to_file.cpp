#include<iostream>
#include<fstream>
using namespace std;

class A
{
	int roll;
	float marks;
	public:
		void input(int r, float m)
		{
			roll=r;
			marks=m;
		}
		void show()
		{
			cout<<"Roll no ="<<roll<<"\t"<<marks<<endl;
		}
};


int main()
{
	A obj1,obj2;
	obj1.input(10,80);

ofstream o("xyz.dat",ios::binary);
o.write( (char*) &obj1, sizeof(obj1) );
o.close();

ifstream i("xyz.dat");
i.read( (char*) &obj2, sizeof(obj2) );
i.close();

obj1.show();

obj2.show();
return 0;	 
}

