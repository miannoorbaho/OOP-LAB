#include<iostream>
#include<conio.h>
//customer class set members and get memebers
using namespace std;
class Customer{
	private:
		int id, credit_limit;
		string f_name, l_name;
		string address;
		
	public:
		Customer()		//constructor
		{
			id=1;
			credit_limit=0;
			f_name="firstname";
			l_name="lastname";
			address="Pakistan";
		}
		void set_id()
		{
			cout<<"Enter Customer ID: ";
			cin>>id;
		}
		void set_name()
		{
			cout<<"Enter 1st name: ";
			cin>>f_name;
			cout<<"Enter last name: ";
			cin>>l_name;
		}
		void set_address()
		{
			cout<<"Enter Address: ";
			cin>>address;
		}
		void set_credit_limit()
		{
			cout<<"Enter credit limit: ";
			cin>>credit_limit;
		}
		
		void setCustomer()	//general input funciton
		{
			set_id();
			set_name();
			set_address();
			set_credit_limit();
		}
		
		void get_id()
		{
			cout<<"Customer ID: "<<id<<endl;
		}
		void get_name()
		{
			cout<<"Customer Name: "<<f_name<<" "<<l_name<<endl;
		}
		void get_address()
		{
			cout<<"Customer Address: "<<address<<endl;
		}
		void get_credit_limit()
		{
			cout<<"Customer Credit Limit: "<<credit_limit<<endl;
		}
		
		
		void getCustomer()
		{
			cout<<endl<<"Showing the Customer Data"<<endl;
			get_id();
			get_name();
			get_address();
			get_credit_limit();
		}
};

int main()
{
	Customer cust1;
	
	cust1.setCustomer();
	cust1.getCustomer();
	getch();
	return 0;
}
