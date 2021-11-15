#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
//Declaring Variables
float radius , area , volume;
float pi = 3.141592654;

//Getting Radius as input
cout<<"Enter Radius of the Sphere:";
cin>> radius;

//calculating Area and Volume
area = 4*pi*pow(radius,2); 
volume = (4/3)*pi*pow(radius,3);

//Dispalying Outputs
cout<<"Area of the Sphere:"<<area<<endl;
cout<<"Volume of the Sphere:"<<volume;
}
