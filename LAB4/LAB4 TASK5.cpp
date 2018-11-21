#include<iostream>
#include<conio.h>
//
using namespace std;
struct student{
	string f_name, l_name;
};
void showStudent(student a)
{
	cout<<"First name: "<<a.f_name<<endl;
	cout<<"Last name: "<<a.l_name<<endl;
}
void showStudent(student *b)
{
	cout<<"First name: "<<b->f_name<<endl;
	cout<<"Last name: "<<b->l_name<<endl;
}
int main()
{
	student obj;
	cout<<"Enter first name: ";
	cin>>obj.f_name;
	cout<<"Enter last name: ";
	cin>>obj.l_name;
	
	cout<<endl<<"Showing data through structure passing to function: "<<endl;
	showStudent(obj);
	
	cout<<endl<<"Showing data through pointer structure passing to function: "<<endl;
	showStudent(&obj);
}
