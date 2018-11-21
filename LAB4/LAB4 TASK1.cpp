#include<iostream>
//task1 function that take two integer and return larger
using namespace std;
int func(int x, int y)
{
	if(x> y)
	{
		return x;
	}else if(y>x)
	{
		return y;
	}
	else
	cout<<"Both are equal.";
}
int main()
{
	int a, b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Larger number is: "<<func(a,b);
	
	return 0;
}
