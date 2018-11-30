/* npower raises x to the positive power n
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double number = 0 ;
	double total = 1;
	int power = 0;
	int it ;


	/* Request user input */
	cout << "Here you can raise a number x to a positive power n. \n";
	cout << "Enter a number (x): ";
	cin >> number; 
	cout << "Enter a positive power (n): ";
	cin >> power;

	/* echo input */
	cout << number << " to the power " << power << " = ";

	/* Raise to power */
	if(power == 0)
		total = 1;
	else 
		for(it = 0 ; it < power ; it++) {
			total *= number;
	}

	/* print total */
	cout << total << endl;

	return 0;
}