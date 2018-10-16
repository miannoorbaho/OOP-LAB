#include <iostream>
#include <conio.h>
//factorial finding
using namespace std;

int main()
{
	int a, f=1;
	cout<<"Enter the number to find factorial: ";
	cin>>a;
	
	for(int x=a; x>0; x--)
	{
		f=f*x;
	}
	cout<<"Factorial of number "<<a<<" is: "<<f;
	getch();
	return 0;
}
