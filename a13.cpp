//courseID: CIS-265-001HY
//Name: Caitlin Mooney
//Prof. Wang
//Assignment#13
//Due by 05/04/2019

//Chapter 13 Programming Challenge #1 - Date
// Design a class called Date.
// The class should store a date in three integers: month, day, and year.
// There should be member functions to print the date in the following forms:
//		12/25/2014
//		December 25, 2014
//		25 December 2014
// Demonstrate the class by writing a complete program implementing it.
// Input Validation:
//		Do not accept values for the day greater than 31 or less than 1.
//		Do not accept values for the month greater than 12 or less than 1.


#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


class Date
{
	public:
		Date(int, int, int);
		string 	Month_s[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		void 	printDate1();
		void 	printDate2();
		void 	printDate3();
	private:
		int 	month;
		int 	day;
		int 	year;
};

int main()
{
	int dy;
	int mn;
	int yr;
	do{
		cout<<"Enter day: "<<endl;
		cin>>dy;
		if (dy<1||dy>31||!cin)
		{
			cout<<endl;
			cout<<"You must enter a valid day number between 1 and 31"<<endl;
			cin.ignore(128,'\n');
		}
	}while(dy<1||dy>31||!cin);
	cout<<endl;
	do{
		cout<<"Enter month: "<<endl;
		cin>>mn;
		if (mn<1||mn>12||!cin)
		{
			cout<<endl;
			cout<<"You must enter a valid month number between 1 and 12"<<endl;
			cin.ignore(128,'\n');
		}
	}while(mn<1||mn>12||!cin);
	cout<<endl;
	do{
		cout<<"Enter year: "<<endl;
		cin>>yr;
		if (yr<1||!cin)
		{
			cout<<endl;
			cout<<"You must enter a valid year number"<<endl;
			cin.ignore(128,'\n');
		}
	}while(yr<1||!cin);
	cout<<endl;
	cout<<"The Date is: "<<endl;
	Date yote=Date(mn, dy, yr);
	yote.printDate1();
	yote.printDate2();
	yote.printDate3();

	system("PAUSE");
	return 0;		
}
void Date::printDate1()
{
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}
void Date::printDate2()
{
	cout<<Month_s[month-1]<<" "<<day<<", "<<year<<endl;
}
	
void Date::printDate3()
{
	cout<<day<<" "<<Month_s[month-1]<<" "<<year<<endl;
}
Date::Date(int mn, int dy, int yr)
{
	month=mn;
	day=dy;
	year=yr;
};

