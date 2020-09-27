//program that uses a for loop to dispay the rise in ocean levels over the next 25 years

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double RISE_PER_YR = 3.1; //predicted annual rise in ocean level (in mm)
	
	//display table heading
	cout << "           Predicted   \n"
		<< "             Cumulative   \n"
		<< "     Year     Ocean Rise   \n"
		<< "................... \n\n";

	//Create and display the table 
	cout << fixed << setprecision(1);
	for (int year = 1; year <= 25; year++)
		cout << setw(5) << year << setw(9) << year * RISE_PER_YR << " mm \n";
	
	return 0;
}