#include <iostream>
using namespace std;
int main ()
{
	//Variable Declaration
	int sub1, sub2, sub3, sub4, sub5, ObtainedMarks;
	float percentage;
	
	//Getting input from user
	cout<<"Enter Marks First Subject:"<<endl;
	cin>>sub1;
	cout<<"Enter Marks Second Subject:"<<endl;
	cin>>sub2;
	cout<<"Enter Marks Third Subject:"<<endl;
	cin>>sub3;
	cout<<"Enter Marks Fourth Subject:"<<endl;
	cin>>sub4;
	cout<<"Enter Marks Fifth Subject:"<<endl;
	cin>>sub5;
	
	//calculating Obtained
	ObtainedMarks= sub1+sub2+sub3+sub4+sub5;
	cout<<"Obtained Marks="<<ObtainedMarks<<endl;
	
	//calculating Percentage
	percentage= (ObtainedMarks/500.0)*100.0;
	cout<<"Percentage="<< percentage<<"%";
}
