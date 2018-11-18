#include<iostream>
#include<conio.h>
#include<cstring>
//task 4 enter 5 employee data
using namespace std;

struct Employee{
	char emp_name[10];
	int emp_id;
	char designation[10];
};

void inputoutput(Employee)
	{
		Employee emp[5];
		
		//input
		for(int i=0; i<5; i++)
		{
			cout<<"Enter Record of Employee "<<i<<":"<<endl;
			cout<<"Enter Name of Employee: ";
			cin>>emp[i].emp_name;
			cout<<"Enter ID of Employee: ";
			cin>>emp[i].emp_id;
			cout<<"Enter Designation of Employee: ";
			cin>>emp[i].designation;
		
			cout<<endl<<endl;
		}

		cout<<endl;
		//output
		for(int j=0; j<5; j++)
		{
			cout<<"Showing Records of Employees"<<endl;
			cout<<"Record of Employee "<<j<<" is as below: ";
			cout<<endl<<"Name: "<<emp[j].emp_name;
			cout<<endl<<"ID: "<<emp[j].emp_id;
			cout<<endl<<"Designation: "<<emp[j].designation;
			cout<<endl<<endl;
		}
	
	}

int main()
{
	Employee emp;
	inputoutput(emp);
		
	getch();
	return 0;
}
