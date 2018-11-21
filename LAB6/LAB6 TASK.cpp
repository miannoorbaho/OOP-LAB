#include<iostream>
#include<conio.h>
#include<string.h>
//implement classes, constructor with and without perameters and destructor
using namespace std;

class Data{
	private:
		int x;
		
	public:
		void set();
		void get();
		Data();
		~Data();
		Data(int);
};
void Data::set()
{
	cout<<endl<<endl<<"USER SHOULD ENTER DATA:";
	cout<<endl<<"Enter the number: ";
	cin>>x;
	
}
void Data::get()
{
	cout<<endl<<endl<<"Showing Data: "<<endl;
	cout<<"Number: "<<x;
}
Data::Data()
{
	x=0;
	cout<<endl<<"Constructor called and initialized data: "<<endl;;
	get();
}
Data::Data(int y)
{
	x=y;
	cout<<endl<<"Constructor called with parameters and initialized data: ";
	get();
}
Data::~Data()
{
	
	cout<<endl<<"Destructor called. Deleted object."<<endl;
}

int main()
{
	Data obj1;				//obj1 created with default constructor
	obj1.set();		//obj1 setting its variables
	obj1.get();		//obj1 showing its data
	obj1.~Data();			//destructor deleting obj1 data from ram
	
	Data obj2(10);	//obj2 created with perameters and constructor called with parameters
	obj2.set();		//obj2 setting its variables
	obj2.get();		//obj2 showing its data
	obj2.~Data();			//destructor deleting obj2 data from ram
	
	getch();
	return 0;
}
