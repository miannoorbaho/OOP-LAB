#include<iostream>
#include<conio.h>

using namespace std;

class Country{
	private:
		string c_name, capital;
		int c_id;
		long int longitude, latitude, population;
		double area;
	
	public:
		
		void set_name()
		{
			cout<<"Enter name of Country: ";
			cin>>c_name;
		}
		void set_location()
		{
			cout<<"Enter Longitude: ";
			cin>>longitude;
			cout<<"Enter Latitude: ";
			cin>>latitude;
		}
		void set_area()
		{
			cout<<"Enter area of country: ";
			cin>>area;
		}
		void set_population()
		{
			cout<<"Enter population of country: ";
			cin>>population;
		}
		void set_capital()
		{
			cout<<"Enter Capital of country: ";
			cin>>capital;
		}
		void SetInfo()
		{
			set_name();
			set_location();
			set_area();
			set_population();
			set_capital();
		}
		
		
		void Display_name()
		{
			cout<<"Name of Country: "<<c_name<<endl;
		}
		void Display_location()
		{
			cout<<"Logitude of Country: "<<longitude<<endl;
			cout<<"Latitude of Country: "<<latitude<<endl;
		}
		void Display_area()
		{
			cout<<"Area of Country: "<<area<<endl;
		}
		void Display_capital()
		{
			cout<<"Capital of Country: "<<capital<<endl;
		}
		void DisplayAllInfo()
		{
			Display_name();
			Display_location();
			Display_area();
			Display_capital();
		}
		
		
};

int main()
{
	Country c[3];
	int changechoice, allfieldchoice, fieldchoice ,countrychoice;
	
	for(int x=0; x<=2; x++)		//input three country data
	{
		cout<<"ENTER COUNTRY DATA:"<<endl;
		c[x].SetInfo();
		cout<<endl<<endl;
	}
	
	cout<<endl<<endl<<"SHOWING DATA OF COUNTRIES"<<endl;
	for(int x=0; x<=2; x++)
	{
		
		c[x].DisplayAllInfo();
		cout<<endl;
	}
	
	cout<<"Do you want to change any Country info? If yes then enter 1, if no then enter 0: ";
	cin>>changechoice;
	if(changechoice==1)
	{
		cout<<"For which country you want to change information? Enter the id: ";
		cin>>countrychoice;
		cout<<"To change all fields press 1, To change any single field press 2: ";
		cin>>allfieldchoice;
		countrychoice-=1;
		if(allfieldchoice==1)
		{
			c[countrychoice].SetInfo();
			cout<<endl<<endl<<"Showiong Updated Data:"<<endl;
			c[countrychoice].DisplayAllInfo();
			
		}
		else if(allfieldchoice==2)
		{
			cout<<"Which field you want to change? Press 1 for Country name, 2 for location, 3 for area, 4 for population and 5 for capital : ";
			cin>>fieldchoice;
			switch(fieldchoice)
			{
				case '1':
					c[countrychoice].set_name();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
				case '2':
					c[countrychoice].set_location();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
				case '3':
					c[countrychoice].set_area();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
				case '4':
					c[countrychoice].set_name();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
				case '5':
					c[countrychoice].set_name();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
				case '6':
					c[countrychoice].set_name();
					cout<<endl<<endl<<"Showing you Updated Record:"<<endl;
					c[countrychoice].DisplayAllInfo();
					break;
			}
		}
	}
	return 0;
}
