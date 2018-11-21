#include<iostream>
#include<string>
//task2 login successfull
using namespace std;
void verify(string user, string pswd)
{
	if(user=="abcd" && pswd=="pakistan")
	{
		cout<<"Login Success";
	}
	else
	cout<<"Login failed";
}
int main()
{
	string a,b;
	cout<<"Enter username: ";
	cin>>a;
	cout<<"Enter password: ";
	cin>>b;
	cout<<endl;
	verify(a,b);
	return 0;
}
