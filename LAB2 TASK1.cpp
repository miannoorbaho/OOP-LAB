#include <iostream>
#include <conio.h>

float add(float x, float y)
{
	return x+y;
}

float sub(float x, float y)
{
	return x-y;
}

float mul(float x, float y)
{
	return x*y;
}

float div(float x, float y)
{
	return x/y;
}

using namespace std;
int main ()
{
	float a, b;
	int mod;
	int rep=1;



	while(rep>0){
	cout<<"Enter 1 to Add, 2 to Subtract, 3 to Multiply, 4 to Divide. : ";
	cin>>mod;
	switch (mod)
	{
		case 1:
		case 2:
		case 3:
			{
				cout<<endl<<"Enter 1st number ";
				cin>>a;
				cout<<"Enter 2nd number ";
				cin>>b;
				break;
			}
			
		case 4:
			{
				cout<<endl<<"Enter 1st number, The dividend: ";
				cin>>a;
				cout<<"Enter 2nd number, The divisor: ";
				cin>>b;
				break;
			}
	}
	
	
	switch(mod)
	{
	
	case 1:
		{
			cout<<"Result: "<<add(a, b);
			break;
		}
	
	case 2:
		{
			cout<<"Result: "<<sub(a, b);
			break;
		}
	
	case 3:
		{
			cout<<"Result: "<<mul(a, b);
			break;
		}
		
		case 4:
		{
			cout<<"Result: "<<div(a, b);
			break;
		}
	}
	
	cout<<endl<<endl<<"Enter 1 to proceed again, 0 to terminate: ";
	cin>>rep;
	cout<<endl<<endl;
	
}

	getche();
	return 0;
	//clrscr();
}
