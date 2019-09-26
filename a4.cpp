///
//2. Rainfall Statistics
//Write a program that lets the user enter the total rainfall for 
//each of 12 months into an array of doubles. The program should 
//calculate and display the total rainfall for the year, the 
//average monthly rainfall, and the months with the highest and lowest
//amounts. Input Validation: Do not accept negative numbers for monthly 
//rainfall figures.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int		NUM_MONTHS=12;
	double			rainfall[NUM_MONTHS];
	string			months[NUM_MONTHS]={"January","February","March","April",
										"May","June","July","August",
										"September","October","November",
										"December"};
	double			total=0,
					average=0,
					highest=0,
					lowest=0;
	
	
	//input amount of rainfall for each month
	for (int i=0; i<NUM_MONTHS; i++)
	{
		cout<<"Enter the amount of rainfall in inches for the \n";
		cout<<months[i]<<" months.\n";
		cin>>rainfall[i];
		while (rainfall[i]< 0)
		{
			cout<<"This is an error.";
			cout<<"Enter the amount of rainfall in inches for the \n";
			cout<<months[i]<<" months.\n";
			cin>>rainfall[i];
		} 
	}
	
	for (int f=0; f<NUM_MONTHS; f++)
	{
		total+=rainfall[f];
	}
	average=total/(NUM_MONTHS);
	cout<<"The average amount of rainfall per month is "<<average<<".\n";

	highest=rainfall[0];
	for (int ree=1; ree<NUM_MONTHS; ree++)
	{
		if (rainfall[ree]>highest)
		{
			highest=rainfall[ree];
		}
	}
	cout<<highest<<endl;
	//cout<<"The month with the highest amount of rainfall is the month of "<<months[ree]<<" with "<<highest<<" amount of rain.\n";
	
	lowest=rainfall[0];
	for (int yeet=1;yeet<NUM_MONTHS; yeet++)
	{
		if (rainfall[yeet]<lowest)
		{
			lowest=rainfall[yeet];
		}
	}
	cout<<lowest<<endl;
	//cout<<"The month with the lowest amount of rainfall is the month of "<<months[yeet]<<" with "<<lowest<<" amount of rain.\n";
	system ("PAUSE");
	return 0;
}



