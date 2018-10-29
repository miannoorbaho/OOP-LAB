 #include <iostream>
 #include<conio.h>
 
 //finds total marks & percentage of subjects
 
 using namespace std;
 int main()
 {
 	float st, s1, s2, s3, s4, s5, total, perc;
 	
	cout<<"Enter total marks each subject carry: ";
 	cin>>st;
 	cout<<"Enter the marks of following subjects"<<endl;
 	cout<<"Subject 1: ";
 	cin>>s1;
 	cout<<"Subject 2: ";
 	cin>>s2;
 	cout<<"Subject 2: ";
 	cin>>s2;
 	cout<<"Subject 3: ";
 	cin>>s3;
 	cout<<"Subject 4: ";
 	cin>>s4;
 	cout<<"Subject 5: ";
 	cin>>s5;
 	
 	
 	st*=5;
 	total= s1+s2+s3+s4+s5;
 	perc= total/st*100;
 	
 	cout<<endl<<"Total Marks: "<<total<<endl;
 	cout<<"Percentage: "<<perc;
 	
 	getch();
 	return 0;
  } 
