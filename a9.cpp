//courseID:CIS165-001
//name: Caitlin Mooney
//Prof. Wang
//Assignment#9
//Due by 04/06/2019
// ch 10 PC #18
// Phone Number List
// Write a program that has an array of at least 10 string objects that hold people's names and phone numbers
// You may make up your own strings, or use the following:
//	"Alejandra Cruz, 555-1223"
//	"Joe Looney, 555-0097"
//	"Geri Palmer, 555-8787"
//	"Li Chen, 555-1212"
//	"Holly Gaddis, 555-8878"
//	"Sam Wiggins, 555-0998"
//	"Bob Kain, 555-8712"
//	"Tim Haynes, 555-7676"
//	"Warren Gaddis, 555-9037"
//	"Jean James, 555-4939"
//	"Ron Palmer, 555-2783"
// The program should ask the user to enter a name or partial name to search for in the array
// Any entries in the array that match the string entered should be displayed
//For example, if the user enters “ Palmer ” the program should display the following names from the list:
//	Geri Palmer, 555-8787
//	Ron Palmer, 555-2783

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) 
{

	// Declarations
	string name[11] = { "Alejandra Cruz, 555-1223",	// Array of names and phone numbers
 						"Joe Looney, 555-0097",
 						"Geri Palmer, 555-8787", 
 						"Li Chen, 555-1212",
 						"Holly Gaddis, 555-8878",
 						"Sam Wiggins, 555-0998", 
 						"Bob Kain, 555-8712", 
 						"Tim Haynes, 555-7676", 
 						"Warren Gaddis, 555-9037", 
 						"Jean James, 555-4939",
 						"Ron Palmer, 555-2783" };
 	
 	// Variables
	string	searchName,	// Search variable
			firstName[11],	// Holds first name
			lastName[11],	// Holds last name
			fullName[11];	// Holds full name
 	
 	const	string	SPACE = " ",
 					COMMA = ",";
 	
 	int	space[11],		// Location for spaces in array
 		comma[11],		// Location for commas in array
		nope = 0;	// Counter for search results
 	
	for(int i = 0; i<11; i++)	// Loop for firstname, lastname, fullname array
		{
			space[i] = name[i].find(SPACE);		// Locates space location
			comma[i] = name[i].find(COMMA);		// Locates comma location
			
			for(int ree = 0; ree < space[i]; ree++)	// Gets firstname from array
				firstName[i] += name[i][ree];
				
			for(int yeet = (space[i]+1); yeet < comma[i]; yeet++)	// Gets lastname from array
				lastName[i] += name[i][yeet];
				
			for(int bread = 0; bread < comma[i]; bread++)		// Gets fullname from array
				fullName[i] += name[i][bread];
		}

	// Display the names for user
	for(int stapled = 0; stapled < 11; stapled++)		
		cout << firstName[stapled] << ", " << lastName[stapled] << ", or " << fullName[stapled] << "\n";
		
	cout << endl;
	
	cout << "Enter a First, Last, or Fullname to be Searched " << endl;
	cout << "In our Files (Case & Character Sensitive): "; 
	getline(cin, searchName);				// User inputs search variable
	cout << endl;
		
	
	// Output for user
	
	
	// Display user search
	cout << "Your search: " << searchName << "\n\n";
	cout << "Matches for '" << searchName << "' are Shown.\n\n";
		
	for(int tree = 0; tree<11; tree++)		// Loop to display matched data and count matches that may be found
		if ( (searchName == firstName[tree]) || (searchName == lastName[tree]) || (searchName == fullName[tree]) )
			{
			cout << name[tree] << endl;
			nope += 1;
			}
		
	cout << endl;	
	
	cout << "Matches Found: " << (nope);
	
	return 0;
}

