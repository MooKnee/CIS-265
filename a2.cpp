
//courseID:CIS165-001
//name: Caitlin Mooney
//Prof. Wang
//Assignment#1
//Due by 02/02/2019
/*3. Winning Division
Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
include the following two functions, which are called by main .
• double getSales() is passed the name of a division. It asks the user for a division’s
quarterly sales figure, validates the input, then returns it. It should be called once for
each division.
• void findHighest() is passed the four sales totals. It determines which is the largest
and prints the name of the high grossing division, along with its sales figure.
Input Validation: Do not accept dollar amounts less than $0.00.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getSales(string);
double findHighest(double, double, double, double);

int main()
{
	double  a=0,
			b=0,
			c=0,
			d=0,
			highest=0;
			
			
	
	a = getSales("Northeast");
	b = getSales("Southeast");
	c = getSales("Northwest");
	d = getSales("Southwest");
		
	highest = findHighest(a,b,c,d);
	
	system("PAUSE");
	return 0;
}

double getSales(string region){
	double sale;
	cout<<"How many sales for the " << region << " Divison?" << endl;
	cin>>sale;
	while (sale < 0)
	{
		cout<<"This is an error.";
		//cout<<"How may sales for the " + region + "Northeast Divison? ";//MISTAKE THIS IS JAVA
		cout<<"How may sales for the " << region << "Northeast Divison? ";
		cin>>sale;
	} 
	return sale;
}


double findHighest(double a, double b, double c, double d)
{
	double highest = 0;
	
	double sales[4] = {a,b,c,d};
	
	for (int i = 0; i < 4; i++){
		if (sales[i] > highest){
			highest = sales[i];
		}
	}
	
	if (highest==a)
		cout<<"The highest sales are "<<a<<" from the Northeast Divison"<< endl;
	else if (highest==b)
		cout<<"The highest sales are "<<b<<" from the Southeast Divison"<< endl;
	else if (highest==c)
		cout<<"The highest sales are "<<c<<" from the Northwest Division"<< endl;
	else if (highest==d)
		cout<<"The highest sales are "<<d<<" from the Southwest Division"<< endl;
	
	
}
