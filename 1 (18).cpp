#include <iostream>
using namespace std;
int main ()
{
	float ageInYears, ageInDays, ageInMonths;
	cout<<"Enter Your Age In Years=";
	cin>>ageInYears;
	//Logic
	ageInMonths= ageInYears*12;
	ageInDays= ageInYears*365;
	//Printing output
	cout<<"Age in Months="<< ageInMonths<<endl;		
	cout<<"Age in Dayss="<< ageInDays<<endl;
}
