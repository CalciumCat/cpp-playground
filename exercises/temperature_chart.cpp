/* temperature_chart displays a temperature conversion chart based on  upper and
 lower bounds (Fahrenheit) given by the user. */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double to_celcius(int temp);
double to_absolute_value(int temp);

/* Main Program */
int main() {
	int fahr_minimum = 0;
	int fahr_maximum = 0;
	int step = 1;
	int temp;
	double celcius;


	// Request user input
	cout << " \nThis program generates a temperature conversion chart.  ";
	cout << "You can choose the lowest and highest temperature, as well as the step size. \n\n"; 
	cout << "Enter the lowest, highest and step values of the temperature";
	cout << "you want in the chart (integers in Fahrenheit): \n\n";
	cin >> fahr_minimum >> fahr_maximum >> step ;

	// Echo input
	cout << "\nConversion chart for temperatures between ";
	cout << fahr_minimum << " and " << fahr_maximum ;
	cout << ", calculated every " << step << " Fahrenheit:\n\n";


	/* Print headings */
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
	for(temp = fahr_minimum ; temp <= fahr_maximum; temp += step) {
		celcius = to_celcius(temp);
		cout.width(20);
		cout << temp;
		cout.width(20);
		cout << celcius;
		cout.width(20);
		cout << celcius + 273.15 << "\n";
	}
	return 0;
}

/* End of Program */

/* Function to convert Fahrenheit to Celcius */
double to_celcius(int temp) {
	return (temp-32)*5.0/9.0;
}

/* Function to convert Fahrenheit to absolute value */
double to_absolute_value(int temp) {
	return to_celcius(temp)+273.15;
}