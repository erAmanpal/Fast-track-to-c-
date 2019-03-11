/*
1. Saving the data
2. Display/ show all records 
3. Search
4. Modify the data/record
5. Deleting some record from file
*/
#include<iostream>
#include<fstream>
using namespace std;
class record
{
	int key;
	char data[50];
	public:
		void input()
		{
			cout<<"Please enter the key field\n";
			cin>>key;
			cout<<"Please enter the data field\n";
			cin>>data;
		}
		void show()
		{
			cout<<"\nKey  :"<<key<<"\t"<<"data :"<<data<<endl;
		}
		int rt_key() { return key;		}
	
};


void menu()
{
	cout<<"Welcome to the project development\n";
	cout<<"Please enter the followig option to operate:\n";
	cout<<"Press 1: to save record\n";
	cout<<"Press 2: to display all record\n";
	cout<<"Press 3: to searh perticular record\n";
	cout<<"Press 4: to modify the record\n";
	cout<<"Press 5: to delete specific record\n";
	cout<<"Press 6: to EXIT\n";
}

fstream file;

int main()
{
	record obj;
	int choice;
	while(1)
	{
		menu();
		cin>>choice;
			switch(choice)
			{
				case 1: //Saving the data to file
					{
						obj.input();
						file.open("data",ios::out | ios::app | ios::binary);
						file.write((char*) &obj, sizeof(obj));
						file.close();
						system("CLS"); // clear the screen
						cout<<"The following data written succesfully\n";
						obj.show();
						system("pause"); // enter the key to continue...
						break;
					}
				case 2: //Display/ show all records from the file
					{
						file.open("data",ios::in | ios::binary);
						while (file.read((char*) &obj,sizeof(obj)))
						{
							obj.show();
						}
						file.close();
						system("pause"); // enter the key to continue...
						break;
					}
				case 3: //searcing a record from file.
					{
						int k;
						system("CLS");
						cout<<"Enter the record you want to search: ";
						cin>>k;
						file.open("data",ios::in | ios::binary);
						int flag=0;
						while (file.read((char*) &obj,sizeof(obj)))
						{
							if(obj.rt_key()==k)
							{
							obj.show();
							break;
							}
							else
							flag=1;
						}
						file.close();						
						if(flag==1) cout<<"Sorry record not found....\n";
						system("pause"); // enter the key to continue...
						break;						
					}
				case 4://Modify the data/record in a file
					{
						int k;
						system("CLS");
						cout<<"Enter the record(key filed) you want to modify/Edit: ";
						cin>>k;
						file.open("data",ios::in | ios::out | ios::binary);
						int flag=0; char ch;
						while (file.read((char*) &obj,sizeof(obj)))
						{
							if(obj.rt_key()==k)
							{
							obj.show();
							flag=0;
							break;
							}
							else
							flag=1;
						}
						if(flag==0)
						{
							cout<<"key found with following details\n";
							obj.show();
							cout<<"Do you want to still edit y/n :";
							cin>>ch;
							if(ch=='y' || ch=='Y')
							{
							file.seekp(-1*sizeof(obj),ios::cur);
							obj.input(); //initilizing the object with new data
							file.write((char*) &obj, sizeof(obj));
							}
						}
						else cout<<"Sorry record not found....\n";
						system("pause"); // enter the key to continue...
						break;							
					}				
				case 5:  //Delete a record from a file
					{
						int k;
						system("CLS");
						cout<<"Enter the record you want to delete: ";
						cin>>k;
						file.open("data",ios::in | ios::binary);
						int flag=0;
						while (file.read((char*) &obj,sizeof(obj)))
						{
							if(obj.rt_key()==k)
							{
							flag=0; // record found
							break;
							}
							else
							flag=1;  // no record found
						}
						ofstream tfile("databkp");						 
						if(flag==0)
							{
								file.seekg(0);
								while (file.read((char*) &obj,sizeof(obj)))
								{
									if(obj.rt_key()!=k)
									{
										tfile.write((char*)&obj,sizeof(obj));
									}
								}							
							} 
						else cout<<"data not found...\n";
					file.close();
					tfile.close();
					remove("data");
					rename("databkp","data");	
					cout<<"Data deleted succesfully...\n";
					break;							
					}
				case 6:
					{
						exit (0);  // to exit from the program
					}
				default:
				cout<<"Pease enter the valid option\n";			
			}
		
	}
	return 0;
}
