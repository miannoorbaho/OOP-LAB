#include<iostream>
#include<conio.h>
//sums the digits of number
using namespace std;

int main()
{
	int num, sum;
	int rnum[2];
	
	cout<<"Enter a 3 digit number: ";
	cin>>num;
	
	rnum[0]= num%10;		//LAST DIGIT SEGREGATED

	rnum[1]= num%100;
	rnum[1]= rnum[1]/10;	//second digit segregated

	rnum[2]= rnum[2]/100;	//first digit segregated

	sum= rnum[0]+ rnum[1]+ rnum[2];
	cout<<"Sum of digits: "<<sum;
		
	getch();
	return 0;
}
