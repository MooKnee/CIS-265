//Name: Caitlin Mooney
//Course: CIS-271-001HY
//Professor: Dr. David Wang
//Assignment: A7: Chapter 9: Programming Challenge #11: Array Expander
//Due Date: 3/9/19
//Chapter 9
//Programming Challenge #11
//Array Expander
//Write a function that accepts an int array and the array’s size as arguments. The function
//should create a new array that is twice the size of the argument array. The function
//should copy the contents of the argument array to the new array and initialize the
//unused elements of the second array with 0. The function should return a pointer to
//the new array.

#include <iostream>
using namespace std;

int* expandedArray(int*, int);

int main()
{
	const int ARRAYSIZE=8;
	int array[ARRAYSIZE]={0, 1, 2, 3, 4, 5, 6, 7};
	int* number=array;
	
	for (int i=0; i<ARRAYSIZE; i++)
	{
		cout<<number[i]<<endl;
	}
	
	cout<<endl;
	
	number=expandedArray(array, ARRAYSIZE);
	
	for (int yeet=0; yeet<ARRAYSIZE*2; yeet++)
	{
		cout<<number[yeet]<<endl;
	}
	
	delete[] number;
	
	number=0;
	
	system("PAUSE");
	return 0;
}


int* expandedArray(int* array, int array_size)
{
	int* newArray = new int[array_size*2];
	
	for (int ree=0; ree<array_size; ree++)
	{
		newArray[ree]=array[ree];
	}
	
	for (int kappa=array_size; kappa<array_size*2; kappa++)
	{
		newArray[kappa]=0;
	}
	
	return newArray;
}
