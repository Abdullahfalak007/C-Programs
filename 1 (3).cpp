#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	// Declaring Variables
	int basicSalary;
	float dearnessAllowance , houseRent, grossSalary;
	
	//Getting input from user
	cout<<"Enter Basic Salary:";
	cin>>basicSalary;
	
	//Calculating Gross Salary,Dearness Allowance And House rent.
	dearnessAllowance = basicSalary * (35.0/100.0);
	houseRent = basicSalary * (25.0/100.0);
	grossSalary = basicSalary + dearnessAllowance + houseRent; 
	
	//Displaying Output
	cout<<"Dearness Allowance:"<<dearnessAllowance<<endl;
	cout<<"House Rent:"<<houseRent<<endl;
	cout<<"Gross Salary:"<<grossSalary;
}
