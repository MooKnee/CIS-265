//courseID:CIS165-001
//name: Caitlin Mooney
//Prof. Wang
//Assignment#8
//Due by 04/06/2019
//ch 10 PC #1
// String Length
// Write a function that returns an integer and accepts a pointer to a C-string as an argument
// The function should count the number of characters in the string and return that number
// Demonstrate the function in a simple program that asks the user to input a string, passes it to the function, and the displays the function's return value


#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//function prototypes
int len(char*); // Returns length of argument string

int main(int argc, char *argv[])
{
	// Variables
	char 	string[100], // String
			*stringpointer = string; // Pointer to string
			
			
	cout << "Enter string of characters: ";
	cin.get(string,100);
	
	
	cout << "Your entered string is: ";
	for(int i = 0; i < len(stringpointer); i++)
		cout << *(stringpointer + i);
	cout << endl;
	
	
	cout << "String length: " << len(stringpointer) << "\n";
	
	system("PAUSE");
	return 0;
}

int len(char *pointer)
{
	return strlen(pointer);		//Return Length of Argument String
}
			
	


