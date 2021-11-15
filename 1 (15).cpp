#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	// Declaring Variables
	int num1, num2, num3, num4, sum, product;
	float average;
	
	//Getting input from user
    cout<<"Enter First Number:";
    cin>>num1;
    cout<<"Enter Second Number:";
    cin>>num2;
    cout<<"Enter Third Number:";
    cin>>num3;
    cout<<"Enter Forth Number:";
    cin>>num4;
	
	//Calculating Sum,Product and Average of all numbers.
	sum = num1 + num2 + num3 + num4;
	product= num1 * num2 *num3 * num4;
	average= (num1 + num2 + num3 + num4)/2.0;	
		
	//Displaying Output
	cout<<"Sum="<<sum<<endl;
	cout<<"Product="<<product<<endl;
	cout<<"Average="<<average;

}
