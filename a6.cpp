//Name: Caitlin Mooney
//Class: CIS-265-001HY
//Professor: Dr. David Wang
//Due By: 03/09/2019
//a6
//chapter 9
//#1 Array Allocator
//Write a function that dynamically allocates an array of integers. The function should
//accept an integer argument indicating the number of elements to allocate. The function
//should return a pointer to the array.
#include <iostream>
using namespace std;


int *dynamicallyAllocates(int);

int main()
{
	int *a;
	int ask;
	
	cout<<"Enter an integer for how many variables you want to be stored in the array: "<<endl;
	cin>>ask;
	
	a=dynamicallyAllocates(ask);
	for (int i=0; i<ask; i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
	
	
}


int *dynamicallyAllocates(int num)
{
	int *array=new int[num];
	for (int i=0; i<num; i++)
	{
		cout<<"Enter a value: "<<endl;
		cin>>array[i];
	}
	return array;
}
