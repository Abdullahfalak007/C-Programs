#include <iostream>
using namespace std;
int main ()
{
	//Variable Declaration
	int number, firstDigit, secondDigit, thirdDigit;
	
	//getting input as number
	cout<<"Enter any 3-digits number:";
	cin>> number;
	
	//Logic
	firstDigit= number/100;
	number =  number%100;
	secondDigit = number/10;
	number = number%10;
	thirdDigit = number;
	
	//Printing Output
	cout<<firstDigit<<endl;
	cout<<secondDigit<<endl;
	cout<<thirdDigit;
}
