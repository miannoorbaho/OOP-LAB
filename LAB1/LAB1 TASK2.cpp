#include <iostream>
#include <conio.h>

//temperature converter: Fahrenheit to Celcius and Celcius to Fahrenheit

using namespace std;

float f2c(float f)
{
	return (f-32)*5/9;
}

float c2f(float c)
{
	return (c*9/5)+32;
}

int main()
{
	int mod;
	float f, c;
	
	cout<<"To convert Fahrenheit to Celcius enter 1, To convert Celcius to Fahrenheit enter 2: ";
	cin>>mod;

	switch (mod)
	{
		case 1:
			{
				cout<<"Enter temperature in Fahrenheit: ";
				cin>>f;
				cout<<"Result in Celcius: "<<f2c(f)<<" F";
				break;
			}
		case 2:
			{
				cout<<"Enter temperature in Celcius: ";
				cin>>c;
				cout<<"Result in Fahrenheit is: "<<c2f(c)<<" C";
				break;
			}
	}
	
	getch();
	return 0;
}
