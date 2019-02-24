#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string s;
char name[50];
fstream f("data.txt",ios::app | ios::out | ios::in);
cout<<"Enter you name to Subscribe my channel:\n";
cout<<"Fast track learning to c++\n";
cin>>name;
f<<name<<endl;
char c;
f.seekg(0);  //ios::beg, ios::end ,  ios::cur

while(f.get(c))
{
	cout<<c;
}
f.close();

return 0;	 
}

