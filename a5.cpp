/*//
//Name: Caitlin Mooney
//CIS-265-001HY
//19. 2D Array Operations
//Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. 
//The program should have the following functions:
//• getTotal . This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
//• getAverage . This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
//• getRowTotal . This function should accept a two-dimensional array as its first argument and an integer as its second argument. The 
//		second argument should be the subscript of a row in the array. The function should return the total of the values in the
//		 specified row.
//• getColumnTotal . This function should accept a two-dimensional array as its first argument and an integer as its second argument.
// 		The second argument should be the subscript of a column in the array. The function should return the total of the values in 
//		the specified column.
//• getHighestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument. 
//		The second argument should be the subscript of a row in the array. The function should return the highest value in the
//		specified row of the array.
//• getLowestInRow . This function should accept a two-dimensional array as its first argument and an integer as its second argument. 
//		The second argument should be the subscript of a row in the array. The function should return the lowest value in the specified row 
//		of the array.
//Demonstrate each of the functions in this program.
*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
//global constants
const int array_ROW=4;//number of rows in the array
const int array_COLUMN=4;//number of columns in the array
//functions
int getTotal(int[][array_COLUMN]);
double getAverage(int[array_ROW][array_COLUMN]);
int getRowTotal(int[array_ROW][array_COLUMN], int);
int getColumnTotal(int[array_ROW][array_COLUMN], int);
int getHighestInRow(int[array_ROW][array_COLUMN], int);
int getLowestInRow(int[array_ROW][array_COLUMN], int);


int main()
{
	//variables
	int		num_row,
			num_column,
			quadrant[array_ROW][array_COLUMN];
	
	
	//inputs
	for (num_column=0; num_column<array_COLUMN; num_column++)
	{
		for (num_row=0; num_row<array_ROW; num_row++)
		{
			cout<<"Enter a value for array point "<<num_row+1<<","<<num_column+1<<": \n";
			cin>>quadrant[num_row][num_column];
		}
	}
	
	//output functions for entire array
	cout<<"\n";
	getTotal(quadrant);
	cout<<"\n";
	getAverage(quadrant);
	
	//input for function for specific row
	cout<<"\nWhich row do you need the total value for: \n";
	cin>>num_row;
	//output for function for specific row
	getRowTotal(quadrant, num_row);
	
	//input for function for specific column
	cout<<"\nWhich column do you need the total value for: \n";
	cin>>num_column;
	//output for function for specific column
	getColumnTotal(quadrant, num_column);
	
	//input for function for highest value of a row
	cout<<"\nWhich row do you need to find the highest value for: \n";
	cin>>num_row;
	//output for function for highest value of a row
	getHighestInRow(quadrant, num_row);
	
	//input for function for lowest value of a row
	cout<<"\nWhich row do you need to find the lowest value for: \n";
	cin>>num_row;
	//output for function for lowest value of a row
	getLowestInRow(quadrant, num_row);
	
	
	system("PAUSE");
	return 0;
}

//getTotal function
int getTotal(int inputQuadrant[array_ROW][array_COLUMN])
{
	int total=0;
	
	for (int column=0; column<array_COLUMN; column++)
	{
		for (int row=0; row<array_ROW; row++)
		{
			total+=inputQuadrant[row][column];
		}
	}
	cout<<"This array's total value is "<<total<<".\n";
}

//getAverage function
double getAverage(int inputQuadrant[array_ROW][array_COLUMN])
{
	int		total=0,
			average=0.00;
			
	for (int column=0; column<array_COLUMN; column++)
	{
		for (int row=0; row<array_ROW; row++)
		{
			total+=inputQuadrant[row][column];
		}
	}
	average=total/(array_ROW*array_COLUMN);
	cout<<"This array's average value is "<<average<<".\n";
}

//getRowTotal function
int getRowTotal(int inputQuadrant[array_ROW][array_COLUMN], int number_row)
{
	int total=0;
	
	for (int row=0; row<array_ROW; row++)
	{
		total+=inputQuadrant[row][number_row-1];
	}
	cout<<"The total of row "<<number_row<<"'s values is "<<total<<".\n";
}

//getColumnTotal function
int getColumnTotal(int inputQuadrant[array_ROW][array_COLUMN], int number_column)
{
	int total=0;
	
	for (int column=0; column<array_COLUMN; column++)
	{
		total+=inputQuadrant[number_column-1][column];
	}
	cout<<"The total of column "<<number_column<<"'s values is "<<total<<".\n";
}

//getHighestInRow function
int getHighestInRow(int inputQuadrant[array_ROW][array_COLUMN], int number_row)
{
	int		fixed,
			highest=inputQuadrant[0][number_row-1];
			
	for (fixed=0; fixed<array_COLUMN; fixed++)
	{
		if (inputQuadrant[fixed][number_row-1]>highest)
		{
			highest=inputQuadrant[fixed][number_row-1];
		}
	}
	cout<<"The highest value from row "<<number_row<<" is value "<<highest<<".\n";
}

//getLowestInRow function
int getLowestInRow(int inputQuadrant[array_ROW][array_COLUMN], int number_row)
{
	int		fixed,
			lowest=inputQuadrant[0][number_row-1];
	
	for (fixed=0; fixed<array_COLUMN; fixed++)
	{
		if (inputQuadrant[fixed][number_row-1])
		{
			lowest=inputQuadrant[fixed][number_row-1];
		}
	}
	cout<<"The lowest value from row "<<number_row<<" is value "<<lowest<<".\n";
}
