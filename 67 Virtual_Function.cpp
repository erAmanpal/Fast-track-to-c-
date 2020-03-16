// virtual function
#include<iostream>
using namespace std;

class Person
{
	public:
 virtual void show()	{	cout<<"I am a person";	}	//   *vptr ----> vft   Person::show ()  
};
class Student : public Person    //  *vpt ------>vft   Student::show()   .... Student::ppp()
{
	public:
	void show()	{	cout<<"I am a student";	}
	void ppp(){	}	
};


int main()
{
	cout<<"size of class Person: "<<sizeof(Person)<<endl;
	
	cout<<"size of Pointer: "<<sizeof(int *)<<endl;
	Person *ptr =new Student();
	ptr->show();


	/*
	// ???????
	Person *ptr;  /// static binding  int a=5; int *p=new int();
	
	Person p;
	Student s;
	ptr=&s;		// static binding -----> depends upon the data type 
	// dy. binding   - data type ..... + memory its pointin to
	ptr->show();
	*/
}
