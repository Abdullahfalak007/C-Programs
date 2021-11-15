#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	// Declaring Variables:
	int noOfPagesOfBook, noOfPageReadInOneDay;
	int noOfDaysPersonHasReadTheBook, pagesRead, pagesRemaining;
	
	
	//Getting Input From  User 
	cout<<"Enter Total Number of Pages of the Book:";
	cin>>noOfPagesOfBook;
	cout<<"Enter Number of Pages Read in One Day:";
	cin>>noOfPageReadInOneDay;
	cout<<"Number Of Days You have been reading the book:";
	cin>>noOfDaysPersonHasReadTheBook;
	
	//Calculating
	pagesRead =  noOfPageReadInOneDay * noOfDaysPersonHasReadTheBook;
	pagesRemaining = noOfPagesOfBook - pagesRead;
	 
	//Dispalying Output
	cout<<"Number of Pages Read so far:"<<pagesRead<<endl;
	cout<<"Number of Pages Remaining:"<<pagesRemaining;

}
