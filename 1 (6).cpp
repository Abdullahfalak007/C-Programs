#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	float arcLength, radius, angle;
	
	//Getting Input From  User 
	cout<<"Enter the Radius of Arc:";
	cin>>radius;
	cout<<"Enter the angle made by Arc:";
	cin>>angle;
	
	//Calculating
	arcLength = radius * angle;
	
	//Dispalying Output
	cout<<"Arc of the Length:"<<arcLength;
}
