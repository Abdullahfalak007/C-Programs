#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
//Declaring Variables; total number of students = tnos, Fee per student = fps & Total  fee Collected = tfc
int tnos , fps, tfc;

//getting Inputs
cout<<"Total Number Of Students:";
cin>>tnos;
cout<<"Fee Per Student:";
cin>>fps;

//Calculating Total Fee Collected 
tfc = tnos*fps;
//Displaying Output
cout<<"Total Fee Collected:"<<tfc;
}
