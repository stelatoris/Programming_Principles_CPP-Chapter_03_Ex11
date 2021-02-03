//Write a program that prompts the user to enter some number of pennies
//(1 - cent coins), nickels(5 - cent coins), dimes(10 - cent coins), quarters
//(25 - cent coins), half dollars(50 - cent coins), and one - dollar coins
//(100 - cent coins).Query the user separately for the number of each size
//coin, e.g., “How many pennies do you have ? ” Then your program should
//print out something like this :
//	You have 23 pennies.
//	You have 17 nickels.
//	You have 14 dimes.
//	You have 7 quarters.
//	You have 3 half dollars.
//	The value of all of your coins is 573 cents.
//	Make some improvements : if only one of a coin is reported, make the
//	output grammatically correct, e.g., 14 dimes and 1 dime(not 1 dimes).
//	Also, report the sum in dollarsand cents, i.e., $5.73 instead of 573 cents.


#include "../../std_lib_facilities.h"

int main()
{
	int penny, nickle, dime, quarter, half_dollar;


	cout << "How  many pennies do you have?\n";
	cin >> penny;
	cout << "How  many nickles do you have?\n";
	cin >> nickle;
	cout << "How  many dimes do you have?\n";
	cin >> dime;
	cout << "How  many quarters do you have?\n";
	cin >> quarter;
	cout << "How  many half dollars do you have?\n";
	cin >> half_dollar;

	cout << "You have " << penny;
	if (1 == penny)
		cout << " penny.\n";
	else
		cout << " pennies.\n";

	cout << "You have " << nickle;
	if (1 == nickle)
		cout << " nickle.\n";
	else
		cout << " nickles.\n";

	cout << "You have " << dime;
	if (1 == dime)
		cout << " dime.\n";
	else
		cout << " dimes.\n";

	cout << "You have " << quarter;
	if (1 == quarter)
		cout << " quarter.\n";
	else
		cout << " quarters.\n";

	cout << "You have " << half_dollar;
	if (1 == half_dollar)
		cout << " half dollar.\n";
	else
		cout << " half dollars.\n";

	double value;

	value = penny + (nickle * 5) + (dime * 10) + (quarter * 25) + (half_dollar * 50);

	cout << "The value of all your coins is $" << value / 100 << '\n';


}
