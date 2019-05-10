/* converting one class type to another class type using conversion function*/
#include<iostream>
using namespace std;
class cm
{
	int v;
	public:
		cm(){		}
		cm(int n){v=n;}
	void show(){cout<<"Equvalent cm: "<<v;	}		
};

class m
{
	float v;
	public:
		void in(){ cout<<"input value in meter : "; cin>>v;		}
			/*Conversion function : for converting one class to another class [here cm to m class] */
		operator cm()		{			return cm(v*100);		} 
};
int main()
{
	m mo; mo.in();			cm co; 	co=mo;		co.show();
	return 0;
}
