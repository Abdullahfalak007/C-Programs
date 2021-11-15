#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	float petrol , distance;
	
	//Getting Input From  User 
	cout<<"Enter the quantity of Petrol available:";
	cin>> petrol;
	
	//Calculating
	distance = petrol * 5.3;
	
	//Dispalying Output
    cout<<"Distance That can be Traveled in available Petrol:"<<distance<<"miles";
}
