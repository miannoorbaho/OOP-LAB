#include <iostream>
#include<conio.h>

//swaps values of two variables without involving third variable

using namespace std;

int main()
{
	float a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	
	a+=b;
	b=a-b;	//b got swapped value
	a=a-b;	//a got swapped value
	
	cout<<endl<<"After Swapping: "<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	getch();
	return 0;
}
