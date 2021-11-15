#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int a,b,c,d;
	
	//Getting Input From  User 
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;

	//Logic to swap the variables
	d=a;
	a=b;
	b=c;
	c=d;
	
	//Dispalying Output
	cout<<"Value of a after swapping:"<<a<<endl;
	cout<<"Value of b after swapping:"<<b<<endl;
	cout<<"Value of c after swapping:"<<c;
}
