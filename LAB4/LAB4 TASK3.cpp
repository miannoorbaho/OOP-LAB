#include<iostream>
//task3 swap integers by reference
using namespace std;
void swapnum(int &x, int &y)
{
	int z;
	z=x;
	x=y;
	y=z;
}

int main()
{
	int a,b;
	cout<<"Enter 1st number x: ";
	cin>>a;
	cout<<"Enter 2nd number y: ";
	cin>>b;
	
	swapnum(a,b);
	cout<<"Swapped:"<<endl;
	cout<<"Value of x: "<<a;
	cout<<endl<<"Value of y: "<<b;
	return 0;
}
