#include <iostream>
using namespace std;

int main(){
float Math, Phy, Chem, Mech, Eng, Ger, CS;
cout<<"Enter your Math grade \n";
cin>> Math;
cout<<"Enter your Phy grade \n";
cin>>Phy;
cout<<"Enter your Chem grade \n";
cin>>Chem;
cout<<"Enter your Mech grade \n";
cin>>Mech;
cout<<"Enter your Eng grade \n";
cin>>Eng;
cout<<"Enter your Ger grade \n";
cin>>Ger;
cout<<"Enter your CS grade \n";
cin>>CS;
float sum=Math+Phy+Chem+Mech+Eng+Ger+CS;
float Avg=0.5;
float grade= sum*Avg; 
if(grade>=90)
	cout<<"Your grade is: A\n";
else if(grade>=85)
	cout<<"Your grade is: B+\n";
else if (grade>=80)
	cout<<"Your grade is: B\n";
else if (grade>=75)
	cout<<"Your grade is:  C+\n";
else 
cout<<"Your grade is: F";

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
