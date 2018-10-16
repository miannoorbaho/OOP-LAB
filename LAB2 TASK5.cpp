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
	
//cout<<num;	//Debugging statement	
	rnum[2]= num%1000;
	rnum[2]= rnum[2]/100;	//first digit segregated
	//confusion variable num is changing value at above statement whereas variable num is not used in this statement.
	
	cout<<"Reverse order of "<<num<<" is: ";		//variable num is changing value
	for(int a=0; a<=2; a++)
	{
		cout<<rnum[a];
	}
	
	
	
	getch();
	return 0;
}
