#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Declaring Variables
	int num, square, cube;
	
	//Getting Input From  User 
	cout<<"Enter any Number:";
	cin>>num;
	
	//Calculating
	square = pow(num,2);
	cube = pow(num,3);
	
	//Dispalying Output
    cout<<"Square:"<<square<<endl;
    cout<<"Cube:"<<cube;

}
