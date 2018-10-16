#include <iostream>
#include <conio.h>
//find sum of even numbers from 1 to n. using loop and continue.
using namespace std;

int main()
{
	int num, sum;
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int x=num; x>=0; x--)
	{
		if(x%2==0)
		sum= sum+x;
	}
	cout<<"Sum of even numbers from 1 to "<<num<<" is: "<<sum;

	getch();
	return 0;
}
