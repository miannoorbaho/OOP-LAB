#include<iostream>
#include<conio.h>
//reverse the order of numbers
using namespace std;

int main()
{
	int num;
	int rnum[2];
	
	cout<<"Enter a 3 digit number: ";
	cin>>num;
	
	rnum[0]= num%10;		//LAST DIGIT SEGREGATED

	rnum[1]= num%100;
	rnum[1]= rnum[1]/10;	//second digit segregated
	
	rnum[2]= rnum[2]/100;	//first digit segregated
	
	cout<<"Reverse order of "<<num<<" is: ";		//variable num is changing value
	for(int a=0; a<=2; a++)
	{
		cout<<rnum[a];
	}
	
	
	
	getch();
	return 0;
}
