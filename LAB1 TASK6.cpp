#include <iostream>
#include <conio.h>

//prints ASCI codes

using namespace std;

int asc(char x)
{
	return x;
}

int main()
{
	char a;
	cout<<"Enter character: ";
	cin>>a;
	cout<<"ASCII code for "<<a<<" is: "<<asc(a);
	getch();
	return 0;
}
