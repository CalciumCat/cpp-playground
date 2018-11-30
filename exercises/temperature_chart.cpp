/* temperature_chart displays a temperature conversion chart */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int const FAHR_MINIMUM = 0;
int const FAHR_MAXIMUM = 300;
int const STEP = 20;

int main() {
	int t;
	double celcius;

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

	for(t = FAHR_MINIMUM ; t < FAHR_MAXIMUM+1 ; t += STEP) {
		celcius = (t-32)*5.0/9.0;
		
		cout.width(20);
		cout << t;
		cout.width(20);
		cout << celcius;
		cout.width(20);
		cout << celcius + 273.15 << "\n";
	}
	return 0;
}