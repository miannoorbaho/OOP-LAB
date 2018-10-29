#include <iostream>
#include <conio.h>
//Takes five uppercase characters as input and gives lowercase characters in reverse order as output.
using namespace std;


int main()
{
	int asc;
	char word[4]={0};
	
	//input();
	cout<<"Enter characters one by one: "<<endl;
	for(int a=0; a<=4; a++)
	{
		cout<<"Enter an character: ";
		cin>>word[a];
		cout<<endl;
	}
	
	//lcase();
	for(int a=0; a<=4; a++)
	{
		if(word[a]!=0)
		{
			asc=word[a];
			asc+=32;
			word[a]=asc;
		}
	}
	
	//output
	cout<<"Result in lowercase reverse order: "<<endl;
	for(int a=4; a>=0; a--)
	{
			cout<<word[a];
			cout<<"		";
	}
	
	
	getch();
	return 0;
}
