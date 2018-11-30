/* temperature_chart displays a temperature conversion chart based on  upper and
 lower bounds (Fahrenheit) given by the user. The user also determines the 
 temperature difference between entries in the table. */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double to_celcius(int temp);
double to_absolute_value(int temp);

void print_description_message();
void user_input(int& minimum, int& maximum, int& step);
void print_echo_input_message(int minimum, int maximum, int step);
void print_table(int minimum, int maximum, int step);

/* Main Program */
int main() {
	int fahr_minimum = 0;
	int fahr_maximum = 0;
	int step = 1;

	// Print message describing the program
	print_description_message();

	// Request user input for chart specification
	user_input(fahr_minimum, fahr_maximum, step);
	// Echo input
	print_echo_input_message(fahr_minimum, fahr_maximum, step);

	// Print table 
	print_table(fahr_minimum, fahr_maximum, step);

	return 0;
}
/* End of Program */


/* Function to explain how program works */
void print_description_message() 
{
	cout << " \nThis program generates a temperature conversion chart.  ";
	cout << "You can choose the lowest and highest temperature, as well as the step size. \n\n"; 
}

/* Function to prompt user to input specifications for the table */
void user_input(int& minimum, int& maximum, int& step) 
{
	cout << "Enter the lowest, highest and step values of the temperature";
	cout << "you want in the chart (integers in Fahrenheit): \n\n";
	cin >> minimum >> maximum >> step ;
}

/* Function to echo user input */
void print_echo_input_message(int minimum, int maximum, int step) 
{
	cout << "\nConversion chart for temperatures between ";
	cout << minimum << " and " << maximum ;
	cout << ", calculated every " << step << " Fahrenheit:\n\n";	
}

/* Function to print conversion table */
void print_table(int minimum, int maximum, int step)
{
	int temp;

	cout << setiosflags ( ios :: left );
	cout.width(20);
	cout << "Fahrenheit" ;
	cout.width(20);
	cout << "Celcius";
	cout.width(20);
	cout << " Absolute Value \n\n";

	// Format values
	cout.setf(ios::fixed);
	cout.precision(2);

	// Print table
	for(temp = minimum ; temp <= maximum; temp += step) {
		cout.width(20);
		cout << temp;
		cout.width(20);
		cout <<  to_celcius(temp);
		cout.width(20);
		cout << to_absolute_value(temp) << "\n";
	}
}


/* Function to convert Fahrenheit to Celcius */
double to_celcius(int temp) 
{
	return (temp-32)*5.0/9.0;
}

/* Function to convert Fahrenheit to absolute value */
double to_absolute_value(int temp) 
{
	return to_celcius(temp)+273.15;
}

