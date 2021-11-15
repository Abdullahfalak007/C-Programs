#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int volume, length, width, height;
	
	//Getting Input From  User 
	cout<<"Enter The Length of cube:";
	cin>>length;
	cout<<"Enter The Width of cube:";
	cin>>width;
	cout<<"Enter The Height of cube:";
	cin>>height;
	
	//Calculating
	volume = length * width * height;
	
	//Dispalying Output
	cout<<"Volume of the cube:"<<volume;
}
