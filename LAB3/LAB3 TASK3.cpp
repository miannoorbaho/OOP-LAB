#include<iostream>
#include<conio.h>
#include<cstring>
//converter feet inches to meters
using namespace std;

struct parameter{
	float feet;
	float inch;
	float meter;
};

int main()
{
	int choice;
	parameter obj;
	
	cout<<"Enter 1 for feet and 2 for inches: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
				cout<<"Enter length in feet: ";
				cin>>obj.feet;
				obj.meter= obj.feet*0.3048;
				cout<<endl<<"Value of feets in meters is: "<<obj.meter;
				break;
			}
		case 2:
			{
				cout<<"Enter length in inch: ";
				cin>>obj.inch;
				obj.meter= obj.inch*0.0254;
				cout<<endl<<"Value of inches in meters is: "<<obj.meter;
				break;
			}
	}
	
	getch();
	return 0;
}
