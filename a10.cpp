// ch 11 PC # 1
// Movie Data
//Write a program that uses a structure named MovieData to store the following information about a movie:
//	Title
//	Director
//	Year Released
//	Running Time (in minutes)
//The program should create two MovieDate variables, store values in their members, and pass each one, in turn, to a function that displays the information about the movie
//in a clearly formatted manner

/*
//Program 11-1
//This program demonstrates the use of structures
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
	int		empNumber;	// Employee number
	string	name;	// Employee's name
	double	hours;	// Hours worked
	double	payRate;	// Hourly payRate
	double	grossPay;	// Gross pay
};

int main()
{
	PayRoll employee;	// employee is a PayRoll structure
	
	// Get the employee's number
	cout << "Enter the employee's number: ";
	cin >> employee.empNumber;
	
	// Get the employee's name
	cout << "Enter the employee's name: ";
	cin.ignore();	// To skip the remaining '\n' character *********FIGURE OUT WHY THIS IS ACTUALLY NECESSARY
	getline(cin, employee.name);
	
	// Get the hours worked by the employee
	cout << "How many hours did the employee work? ";
	cin >> employee.hours;
	
	// Get the employee's hourly pay rate
	cout << "What is the employee's hourly pay rate? ";
	cin >> employee.payRate;
	
	// Calculate the employee's gross pay
	employee.grossPay = employee.hours * employee.payRate;
	
	// Display employee data
	cout << "Here is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly payRate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross Pay: $" << employee.grossPay << endl;
	return 0;
}
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct MovieData
{
	string	title, director;	// title and director variables
	int		yearReleased, runningTime;	// year released and running time variables
};

int main()
{
	MovieData movie;	// movie is a MovieData structure
	
	// Get the movie's title
	cout << "Enter the movie's title: ";
	//cin.ignore();
	string input;
	//cin >> input;
	//getline(cin, movie.title);		//NEED TO FIX DROPS FIRST CHARACTER UNLESS YOU PRESS SPACE
	cin >> movie.title;
	
	
	// Get the movie's director
	cout << "Enter the movie's director: ";
	//cin.ignore();
	getline(cin, movie.director);		//NEED TO FIX DROPS FIRST CHARACTER UNLESS YOU PRESS SPACE WHEN THE FIRST VARIABLE (MOVIE TITLE) USES CIN.IGNORE()
	
	// Get the movie's year of release
	cout << "What year was this movie released? ";
	cin >> movie.yearReleased;
	
	// Get the movie's running time in minutes
	cout << "What is the movie's running time in minutes? ";
	cin >> movie.runningTime;
	
	// Display the movie data
	cout << "Here is the movie's data:\n";
	cout << "Title: " << movie.title << endl;
	cout << "Director: " << movie.director << endl;
	cout << "Year Released: " << movie.yearReleased << endl;
	cout << "Running Time: " << movie.runningTime << endl;
	cout << fixed << showpoint << setprecision(2);
	
	system("PAUSE");
	return 0;
}
	
	
