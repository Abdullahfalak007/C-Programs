#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int x,y;
	float distance;
	
	//Getting Input From  User 
	cout<<"Enter the value of x:";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;
	
	//Calculating
	distance = sqrt(( pow(x,2) + pow(y,2) ));
	
	//Dispalying Output
	cout<<"Distance Between x & y:"<<distance;
}
