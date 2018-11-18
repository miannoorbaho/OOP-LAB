#include <iostream>
#include<conio.h>
#include<cstring>
//grading system for student simple input and print
using namespace std;

struct Student{
	int std_id;
	char std_name[10];
	char department[10];
	int semester;
};

struct Course{
	char course_name[10];
	int course_id;
	int course_mark;
};

Student stdn;
Course crs1;
Course crs2;
Course crs3;

	void inputstd()
	{
		cout<<"Enter Name of Student: ";
		cin>>stdn.std_name;
		cout<<"Enter ID of Student: ";
		cin>>stdn.std_id;
		cout<<"Enter Semester of Student: ";
		cin>>stdn.semester;
		cout<<"Enter Department of Student: ";
		cin>>stdn.department;
		
		
		cout<<endl<<"Enter Course 1 name: ";
		cin>>crs1.course_name;
		cout<<"Enter Course 1 ID: ";
		cin>>crs1.course_id;
		cout<<"Enter Course 1 marks: ";
		cin>>crs1.course_mark;
		
		cout<<endl<<"Enter Course 2 name: ";
		cin>>crs2.course_name;
		cout<<"Enter Course 2 ID: ";
		cin>>crs2.course_id;
		cout<<"Enter Course 2 marks: ";
		cin>>crs2.course_mark;
		
		cout<<endl<<"Enter Course 3 name: ";
		cin>>crs3.course_name;
		cout<<"Enter Course 3 ID: ";
		cin>>crs3.course_id;
		cout<<"Enter Course 3 marks: ";
		cin>>crs3.course_mark;
	
	}
	
	void outputstd()
	{
		cout<<"Showing the record of Student"<<endl;
		cout<<endl<<endl<<"Name of Student: "<<stdn.std_name;
		cout<<endl<<"ID of Student: "<<stdn.std_id;
		cout<<endl<<"Semester of Student: "<<stdn.semester;
		cout<<endl<<"Department of Student: "<<stdn.department;
		
		cout<<endl<<endl<<"Course 1 name: "<<crs1.course_name;
		cout<<endl<<"Course 1 ID: "<<crs1.course_id;
		cout<<endl<<"Course 1 marks: "<<crs1.course_mark;
		
		cout<<endl<<endl<<"Course 2 name: "<<crs2.course_name;
		cout<<endl<<"Course 2 ID: "<<crs2.course_id;
		cout<<endl<<"Course 2 marks: "<<crs2.course_mark;
		
		cout<<endl<<endl<<"Course 3 name: "<<crs3.course_name;
		cout<<endl<<"Course 3 ID: "<<crs3.course_id;
		cout<<endl<<"Course 3 marks: "<<crs3.course_mark;
	}

int main()
{		
	inputstd();
	outputstd();
	
	getch();
	return 0;
}
