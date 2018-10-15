#include<iostream>
#include<conio.h>
#include<cmath>

//finds real roots of quadratic equation

using namespace std;

int main()
{
	float x, y, s;	//roots
	float a,b,c;	//quaderatic equation values
	
	cout<<"Enter values of a, b and c accordingly where quaderatic equation as followed: "<<endl<<"ax^2 + bx +c = 0"<<endl;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	s=(b*b)-(4*a*c);
	
	x=(-b+sqrt(s))/(2*a);
	y=(-b-sqrt(s))/(2*a);

	cout<<endl<<"Real roots are: "<<x<< " & "<<y;
	
	getch();
	return 0;
}
