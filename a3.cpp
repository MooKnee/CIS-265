//Name: Caitlin Mooney
//Course: CIS-265
//Professor: Dr. David Wang
//Homework: Assignment 3 #14 Overloaded Hospital
//Date Due: 02/02/19
/*
15. Overloaded Hospital
Write a program that computes and displays the charges for a patient’s hospital stay.
First, the program should ask if the patient was admitted as an in-patient or an outpatient.
If the patient was an in-patient, the following data should be entered:
• The number of days spent in the hospital
• The daily rate
• Hospital medication charges
• Charges for hospital services (lab tests, etc.)
The program should ask for the following data if the patient was an out-patient:
• Charges for hospital services (lab tests, etc.)
• Hospital medication charges
The program should use two overloaded functions to calculate the total charges. One
of the functions should accept arguments for the in-patient data, while the other function
accepts arguments for out-patient information. Both functions should return the
total charges.
Input Validation: Do not accept negative numbers for any data.
*/


#include <iostream>
#include <iomanip>
using namespace std;
void getChoice(char &);
double calcTotalCharges(int, double, double, double);
double calcTotalCharges(double, double);

int main()
{
	char selection;//menu selection
	int admitted;//days admitted
	double rate;//daily pay rate
	double medicationCharges;//hospital medication charges
	double serviceCharges;//hospital service charges
	



	//set numeric output formatting
	cout<<fixed<<showpoint<<setprecision(2);
	//display the menu get a selection
	cout<<"Was the patient admitted as an\n";
	cout<<"(I) an in-patient, or \n";
	cout<<"(O) an out-patient?\n";

	getChoice(selection);
	//process the menu selection
	switch(selection)
	{
		//hourly paid employee
		case 'I' :
		case 'i' : cout << "For how many days was the patient for? \n";
					cin >> admitted;
					while (admitted<0)
					{
						cout << "For how many days was the patient for? \n";
						cin >> admitted;
					}
					cout << "What is the daily pay rate? \n" ;
					cin >> rate;
					while (rate<0)
					{
						cout << "What is the daily pay rate? \n" ;
						cin >> rate;
					}
					cout << "What are the hospital medication charges? \n";
					cin >> medicationCharges;
					while (medicationCharges<0)
					{
						cout << "What are the hospital medication charges? \n";
						cin >> medicationCharges;
					}
					cout << "What are the charges for hospital services\n";
					cout << " (lab tests, etc.)? ";
					cin >> serviceCharges;
					while (serviceCharges<0)
					{
						cout << "What are the charges for hospital services\n";
						cout << " (lab tests, etc.)? ";
						cin >> serviceCharges;
					}
					cout << "This in-patient's hospital charges are $";
					cout << calcTotalCharges(admitted, rate, medicationCharges, serviceCharges) << endl;
					break;
		case 'O' :
		case 'o' : cout << "What are the hospital medication charges? ";
					cin >> medicationCharges;
						while (medicationCharges<0)
					{
						cout << "What are the hospital medication charges? \n";
						cin >> medicationCharges;
					}
					cout << "What are the charges for hospital services\n";
					cout << " (lab tests, etc.)? ";
					cin >> serviceCharges;
					while (serviceCharges<0)
					{
						cout << "What are the charges for hospital services\n";
						cout << " (lab tests, etc.)? ";
						cin >> serviceCharges;
					}
					cout << "This out-patient's hospital charge are $";
					cout << calcTotalCharges(medicationCharges, serviceCharges) << endl;
					break;
	}
	return 0;
}
//definition of function getChoice
//the parameter letter is a reference to a char
//this function asks the user for an H or an S
//and returns the validated input
void getChoice(char & letter)
{
	//get user's selection
	cout << "Enter your choice (I or O): ";
	cin >> letter;
	//validate the selection
	while (letter != 'I' && letter != 'i' && letter != 'O' && letter != 'o')
	{
		cout << "Please enter I or O: ";
		cin >> letter;
	}
}
double calcTotalCharges(int admitted, double rate, double medicationCharges, double serviceCharges)
{
	return (admitted*rate)+medicationCharges+serviceCharges;
}
double calcTotalCharges(double medicationCharges, double serviceCharges)
{
	return medicationCharges+serviceCharges;
}


