#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	// Declaring Variables
	float side1, side2, side3, area;
	
	//Getting input from user
	cout<<"Enter the value of Base:";
	cin>>side1;
	cout<<"Enter the value of Perpendicular:";
	cin>>side2;
	cout<<"Enter the value of Hypotenuse:";
	cin>>side3;
	
	//Calculating Area of Triangle
	area= (side1 + side2 + side3)/2;
	
	//Displaying Output
	cout<<"Area of the Triangle:"<<area;
}
