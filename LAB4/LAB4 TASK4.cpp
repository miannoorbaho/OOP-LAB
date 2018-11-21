#include<iostream>
#include<conio.h>
#include<string.h>
//finding character in string
using namespace std;
int find_char(char *x, char y)
{
	if(*x==y)
	{
		return 1;
	}
	else return 0;
}

int main()
{
	string c_string;
	char character;
	char *ptr;
	int length;
	cout<<"Enter the string: ";
	cin>>c_string;
	cout<<"Enter character to find in above string: ";
	cin>>character;
	length=c_string.length();
	
	char ch[length];
	int result;
	for(int i=0; i<length; i++)
	{
		ch[i]=c_string[i];
		*ptr=ch[i];
	
		result=find_char(ptr, character);
		if(result==1)
		{
			cout<<character<<" found in this string"<<endl;
		}
	}
}
