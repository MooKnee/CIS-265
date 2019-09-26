//courseID:CIS265-001HY
//name: Caitlin Mooney
//Prof. Wang
//Assignment#11
//Due by 4/13/2019
// ch 11 PC # 11
// 11. Monthly Budget
// A student has established the following monthly budget:
//	Housing				500.00
//	Utilities			150.00
//	Household Expenses 	65.00
//	Transportation 		50.00
//	Food 				250.00
//	Medical 			30.00
//	Insurance 			100.00
//	Entertainment 		150.00
//	Clothing 			75.00
//	Miscellaneous 		50.00
// Write a program that has a MonthlyBudget structure designed to hold each of these expense catagories.
// The program should pass the structure to a function that asks the user to enter the amounts spent in each budget category during a month.
// The program should then pass the structure to a function that displays a report indicating the amount over or under in each category, 
// as well as the amount over or under for the entire monthly budget.

// Program 11-6

#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget			// MonthlyBudget structure designed to hold each of these expense catagories
{
	double	housing,			// Housing expense for month
			utilities,			// Utilities expense for month
			householdExpenses,	// Household expenses for month
			transportation,		// Transportation expenses for month
			food,				// Food expenses for month
			medical,			// Medical expenses for month
			insurance,			// Insurance expenses for month
			entertainment,		// Entertainment expenses for month
			clothing,			// Clothing expenses for month
			miscellaneous,		// Miscellaneous expenses for month
			total;				// Total amount of expenses spent for month
};

// Function Prototypes
void getAmountsSpent(MonthlyBudget &);								// Function that asks the user to enter the amounts spent in each budget category
																	//	during a month
void calculateSpentTotal(MonthlyBudget &);							// Function that calculates total of entire monthly budget
void analyzeMB(const double, const double);							// Function that indicates amount over or under in each category as well as for 
																	//	entire monthly budget
void reportMonthlyBudget(const MonthlyBudget, const MonthlyBudget);	// Function that displays a report indicating the amount over or under in each category, 
																	//	as well as the amount over or under for the entire monthly budget

// Constants


int main()
{
	MonthlyBudget establishedMB = { 500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00, 1420.00 };
	MonthlyBudget amountsSpentMB;
	
	getAmountsSpent(amountsSpentMB);
	calculateSpentTotal(amountsSpentMB);
	reportMonthlyBudget(amountsSpentMB, establishedMB);
	
	
	system("PAUSE");
	return 0;
}

// Function getAmountsSpent
void getAmountsSpent(MonthlyBudget &amountsSpentMB)
{
	// Get amount spent on housing
	cout << "How much did you spend on housing this month? " << endl;
	cin >> amountsSpentMB.housing;
	while (amountsSpentMB.housing <= 0.00)
	{
		cout << "Invalid input: The amount spent on housing cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.housing;
	}
	
	// Get amount spent on utilities
	cout << "How much did you spend on utilities this month? " << endl;
	cin >> amountsSpentMB.utilities;
	while (amountsSpentMB.utilities <= 0.00)
	{
		cout << "Invalid input: The amount spent on utilities cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.utilities;
	}
	
	// Get amount spent on household expenses
	cout << "How much did you spend on household expenses this month? " << endl;
	cin >> amountsSpentMB.householdExpenses;
	while (amountsSpentMB.householdExpenses <= 0.00)
	{
		cout << "Invalid input: The amount spent on household expenses cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.householdExpenses;
	}
	
	// Get amount spent on transportation
	cout << "How much did you spend on transportation this month? " << endl;
	cin >> amountsSpentMB.transportation;
	while (amountsSpentMB.transportation <= 0.00)
	{
		cout << "Invalid input: The amount spent on transportation cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.transportation;
	}
	
	// Get amount spent on food
	cout << "How much did you spend on food this month? " << endl;
	cin >> amountsSpentMB.food;
	while (amountsSpentMB.food <= 0.00)
	{
		cout << "Invalid input: The amount spent on food cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.food;
	}
	
	// Get amount spent on medical
	cout << "How much did you spend on medical this month? " << endl;
	cin >> amountsSpentMB.medical;
	while (amountsSpentMB.medical <= 0.00)
	{
		cout << "Invalid input: The amount spent on medical cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.medical;
	}
	
	// Get amount spent on insurance
	cout << "How much did you spend on insurance this month? " << endl;
	cin >> amountsSpentMB.insurance;
	while (amountsSpentMB.insurance <= 0.00)
	{
		cout << "Invalid input: The amount spent on insurance cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.insurance;
	}
	
	// Get amount spent on entertainment
	cout << "How much did you spend on entertainment this month? " << endl;
	cin >> amountsSpentMB.entertainment;
	while (amountsSpentMB.entertainment <= 0.00)
	{
		cout << "Invalid input: The amount spent on entertainment cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.entertainment;
	}
	
	// Get amount spent on clothing
	cout << "How much did you spend on clothing this month? " << endl;
	cin >> amountsSpentMB.clothing;
	while (amountsSpentMB.clothing <= 0.00)
	{
		cout << "Invalid input: The amount spent on clothing cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.clothing;
	}
	
	// Get amount spent on miscellaneous
	cout << "How much did you spend on miscellaneous this month? " << endl;
	cin >> amountsSpentMB.miscellaneous;
	while (amountsSpentMB.miscellaneous <= 0.00)
	{
		cout << "Invalid input: The amount spent on miscellaneous cannot be less than zero! Please enter again:\n";
		cin >> amountsSpentMB.miscellaneous;
	}
}

// Function calculateSpentTotal
void calculateSpentTotal(MonthlyBudget &amountsSpentMB)
{
	amountsSpentMB.total = amountsSpentMB.housing + amountsSpentMB.utilities + amountsSpentMB.householdExpenses + 
							amountsSpentMB.transportation + amountsSpentMB.food + amountsSpentMB.medical + 
							amountsSpentMB.insurance + amountsSpentMB.entertainment + amountsSpentMB.clothing + 
							amountsSpentMB.miscellaneous;
}

// Function analyzeMB
void analyzeMB(const double amountsSpentMB, const double establishedMB)
{
	string over = " over established amount for monthly budget.\n\n";
	string under = " under established amount for monthly budget.\n\n";
	string asItShouldBe = " perfectly balanced for the monthly budget.\n\n";
	
	if (amountsSpentMB > establishedMB)
		cout << "You are $" << (amountsSpentMB - establishedMB) << over;
	else if (amountsSpentMB < establishedMB)
		cout << "You are $" << (establishedMB - amountsSpentMB) << under;
	else
		cout << "Your are" << asItShouldBe;
	
}

// Function reportMonthlyBudget
void reportMonthlyBudget(const MonthlyBudget amountsSpentMB, const MonthlyBudget establishedMB)
{
	cout << "\n\n";
	cout << "Monthly Budget Report\n";
	// Display housing
	cout << "Established Monthly Housing Expense: $" << establishedMB.housing << endl;
	cout << "Spent Monthly Housing Expense: $" << amountsSpentMB.housing << endl;
	analyzeMB(amountsSpentMB.housing, establishedMB.housing);
	// Display utilities
	cout << "Established Monthly Utilities Expense: $" << establishedMB.utilities << endl;
	cout << "Spent Monthly Utilities Expense: $" << amountsSpentMB.utilities << endl;
	analyzeMB(amountsSpentMB.utilities, establishedMB.utilities);
	// Display household expenses
	cout << "Established Monthly Household Expenses Expense: $" << establishedMB.householdExpenses << endl;
	cout << "Spent Monthly Household Expenses Expense: $" << amountsSpentMB.householdExpenses << endl;
	analyzeMB(amountsSpentMB.householdExpenses, establishedMB.householdExpenses);
	// Display transportation
	cout << "Established Monthly Transportation Expense: $" << establishedMB.transportation << endl;
	cout << "Spent Monthly Transportation Expense: $" << amountsSpentMB.transportation << endl;
	analyzeMB(amountsSpentMB.transportation, establishedMB.transportation);
	// Display food
	cout << "Established Monthly Food Expense: $" << establishedMB.food << endl;
	cout << "Spent Monthly Food Expense: $" << amountsSpentMB.food << endl;
	analyzeMB(amountsSpentMB.food, establishedMB.food);
	// Display medical
	cout << "Established Monthly Medical Expense: $" << establishedMB.medical << endl;
	cout << "Spent Monthly Medical Expense: $" << amountsSpentMB.medical << endl;
	analyzeMB(amountsSpentMB.medical, establishedMB.medical);
	// Display insurance
	cout << "Established Monthly Insurance Expense: $" << establishedMB.insurance << endl;
	cout << "Spent Monthly Insurance Expense: $" << amountsSpentMB.insurance << endl;
	analyzeMB(amountsSpentMB.insurance, establishedMB.insurance);
	// Display entertainment
	cout << "Established Monthly Entertainment Expense: $" << establishedMB.entertainment << endl;
	cout << "Spent Monthly Entertainment Expense: $" << amountsSpentMB.entertainment << endl;
	analyzeMB(amountsSpentMB.entertainment, establishedMB.entertainment);
	// Display clothing
	cout << "Established Monthly Clothing Expense: $" << establishedMB.clothing << endl;
	cout << "Spent Monthly Clothing Expense: $" << amountsSpentMB.clothing << endl;
	analyzeMB(amountsSpentMB.clothing, establishedMB.clothing);
	// Display miscellaneous
	cout << "Established Monthly Miscellaneous Expense: $" << establishedMB.miscellaneous << endl;
	cout << "Spent Monthly Miscellaneous Expense: $" << amountsSpentMB.miscellaneous << endl;
	analyzeMB(amountsSpentMB.miscellaneous, establishedMB.miscellaneous);
	// Display total
	cout << "Established Monthly Budget Total: $" << establishedMB.total << endl;
	cout << "Spent Monthly Budget Total: $" << amountsSpentMB.total << endl;
	analyzeMB(amountsSpentMB.total, establishedMB.total);
}
	

