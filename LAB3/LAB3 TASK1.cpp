#include <iostream>
#include <conio.h>
#include <cstring>
//task1
using namespace std;

struct EmpRecord{
		char employee_name[10];
		int date, month, year;
		char designation[10];
	};


int main()
{
	EmpRecord emp;
	strcpy(emp.employee_name,"NOOR BAHO");
	emp.date=18;
	emp.month=01;
	emp.year=2018;
	strcpy(emp.designation,"Student");
	
	cout<<"Output through Structure:"<<endl;
	cout<<"Employee Name: "<<emp.employee_name;
	cout<<endl<<"Employee's date of joining: "<<emp.date<<"-"<<emp.month<<"-"<<emp.year;
	cout<<endl<<"Employee's designation: "<<emp.designation;
	
	
	
	getch();
	return 0;
}
