#include <iostream>
#include <conio.h>

//finds greater number

using namespace std;

int main()
{
	float a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	
	if(a>b)
	cout<<a<<" is greater than "<<b;
	else if(b>a)
	cout<<b<<" is greater than "<<a;
	else
	cout<<"Both "<<b<<" & "<<a<<" are equal ";
	
	
	getch();
	return 0;
}
