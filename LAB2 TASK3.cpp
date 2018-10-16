#include <iostream>
#include <conio.h>
//prints like 1, 12, 123, 1234, 12345 etc
using namespace std;

int main()
{
	for(int a=1; a<=9; a++)
	{
		for(int b=1; b<=a; b++)
		{
			cout<<b;
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
