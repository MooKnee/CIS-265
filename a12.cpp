//Name: Caitlin Mooney
//Course: CIS-265-001HY
//Professor: David Wang
//Assignment: a12
//Due Date: 4/27/19

// a12
// ch12 PC #13 - Inventory Program
// 13. Inventory Program
// Write a program that uses a structure to store the following 
//			inventory data in a file:
// 	Item Description
//	Quantity on Hand
//	Wholesale Cost
//	Retail Cost
//	Date Added to Inventory
// The program should have a menu that allows the user to perform the
//			following tasks:
//	Add new records to the file
//	Display any record in the file
//	Change any record in the file
// Input Validation: The program should not accept quantities, or wholesale,
//			or retail costs, less than 0.  The program should not accept dates
//			that the programmer deterimines are unreasonable.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

struct inventory
{
	string	itemDescription;
	int		quantity;
	double	wholesaleCost;
	double	retailCost;
	string	dateAdded;
};

void addNewRec(inventory &, fstream &);
void dispRec(inventory &, fstream &);
void changeRec(inventory &, fstream &);
long byteLengthNumber(int);
bool date(string);

int main()
{
	inventory record;
	fstream dataFile("C:\\records.dat",ios::out|ios::in|ios::binary);
	int choice;
	do
	{
		cout<<"Inventory Menu"<<endl;
		cout<<"1: Add New Records to the File "<<endl;
		cout<<"2: Display Any Record in the File "<<endl;
		cout<<"3: Change Any Record in the File "<<endl;
		cout<<"Enter 1, 2, or 3: "<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1: 	addNewRec(record, dataFile);
						break;
			case 2:		dispRec(record, dataFile);
						break;
			case 3:		changeRec(record, dataFile);
						break;
			default:	cout<<"Please enter 1, 2, or 3 only."<<endl;
		}
	} while (choice>=1||choice<=3);
	dataFile.close();
	system("PAUSE");
	return 0;
}

void addNewRec(inventory &record, fstream &dataFile)
{
	dataFile.seekp(0L,ios::end);
	
	
		cout<<"Item Description: "<<endl;
		getline(cin, record.itemDescription);
		do
		{
			cout<<"Quantity on Hand: "<<endl;
			getline(cin, record.quantity);
		} while (record.quantity>=0);
		do
		{
			cout<<"Wholesale Cost: $"<<endl;
			getline(cin, record.wholesaleCost);
		} while (record.wholesaleCost>=0);
		do
		{
			cout<<"Retail Cost: $"<<endl;
			getline(cin, record.retailCost);
		} while (record.retailCost>=0);
		do
		{
			cout<<"Date in MM/DD/YYYY: "<<endl;
			getline(cin, record.dateAdded);
			if (date(record.dateAdded)==0)
			{
				cout<<date(record.dateAdded)<<endl;
				cout<<"Improper format"<<endl;
			}
		} while (date(record.dateAdded)==0);
	dataFile.write(reinterpret_cast<char *>(&record), sizeof(record));
}

void dispRec(inventory &record, fstream &dataFile)
{
	int recordNumber;
	cout<<"Record Number: ";
	cin>>recordNumber;
	if (recordNumber<1)
	{
		cout<<"The record that is being brought up is record 1."<<endl;
		recordNumber=1;
	}
	recordNumber--;
	dataFile.seekg(byteLengthNumber(recordNumber),ios::beg);
	dataFile.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout<<"Record Number: "<<(recordNumber+1)<<endl;
	cout<<"Item Description: ";
	cout<<record.itemDescription<<endl;
	cout<<"Date in MM/DD/YYYY: ";
	cout<<record.dateAdded<<endl;
	cout<<"Quantity on Hand: ";
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<record.quantity<<endl;
	cout<<"Wholesale Cost: $";
	cout<<record.wholesaleCost<<endl;
	cout<<"Retail Cost: $";
	cout<<record.retailCost<<endl;
}

void changeRec(inventory &record, fstream &dataFile)
{
	int recordNumber;
	cout<<"Record Number: ";
	cin>>recordNumber;
	if (recordNumber<1)
	{
		cout<<"The record that is being brought up is record 1."<<endl;
		recordNumber=1;
	}
	recordNumber--;
	dataFile.seekg(byteLengthNumber(recordNumber),ios::beg);
	dataFile.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout<<"Item Description: "<<endl;
		getline(cin, record.itemDescription);
		do
		{
			cout<<"Quantity on Hand: "<<endl;
			getline(dataFile, record.quantity);
		} while (record.quantity>=0);
		do
		{
			cout<<"Wholesale Cost: $"<<endl;
			getline(cin, record.wholesaleCost);
		} while (record.wholesaleCost>=0);
		do
		{
			cout<<"Retail Cost: $"<<endl;
			getline(cin, record.retailCost);
		} while (record.retailCost>=0);
		do
		{
			cout<<"Date in MM/DD/YYYY: "<<endl;
			getline(cin, record.dateAdded);
			if (!date(record.dateAdded))
			{
				cout<<date(record.dateAdded)<<endl;
				cout<<"Improper format"<<endl;
			}
		} while (!date(record.dateAdded));
	dataFile.seekp(byteLengthNumber(recordNumber),ios::beg);
	dataFile.write(reinterpret_cast<char *>(&record),sizeof(record));
}
	
long byteLengthNumber(int recordNumber)
{
	return sizeof(inventory)*recordNumber;
}

bool date(string dateAdded)
{
	if (dateAdded.length()==0)
	{
		dateAdded="0"+dateAdded;
	}
	if (dateAdded.length()!=10)
	{
		return false;
	}
	for (int yeet=0; yeet<dateAdded.length());yeet++)
	{
		if (yeet==2||yeet==5)
		{
			if (dateAdded[yeet]!='/')
			{
				return false;
			}
			continue;
		}
	}
	return true;
}
	

