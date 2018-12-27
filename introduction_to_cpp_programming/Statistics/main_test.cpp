/*	This program tests the functions average() and standard_deviation() in
	statistics.h */

#include <iostream>
#include "statistics.h"

using namespace std;

void test_one_value();
void test_two_values();
void test_three_values();
void test_four_values();
void too_many_numbers();
int input_number_of_values(int& number_of_values);

// MAIN PROGRAMME STARTS
int main(){
	int test_number;

	cout << "\nThis program tests the functions in 'statistics.h' \n\n";
	while(test_number != 0){
		input_number_of_values(test_number);

	    if(test_number == 1)
	    	test_one_value();
	    else if(test_number == 2)
	    	test_two_values();
	    else if (test_number == 3)
	    	test_three_values(); 
	    else if (test_number == 4)
	    	test_four_values();
	    else if (test_number > 4)
	    	too_many_numbers();
	 }

	 cout << "Finished testing 'statistics.h' \n \n";
}
// MAIN PROGRAMME ENDS

//	Function to input the number of values that will be tested
int input_number_of_values(int& number_of_values) {
	cout <<	"Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program): \n";
    cin >> number_of_values;
    return number_of_values;
}

//	Function to input one number, print out the average ans std deviation
void test_one_value() {
	double first;
	
	cout << "Enter first value: ";
	cin >> first;
	cout << "Average: "<< average(first);
	cout << ". Standard deviation: " << standard_deviation(first);
	cout << "\n\n";
}

//	Function to input two numbers, print out the average ans std deviation
void test_two_values() {
	double first;
	double second;

	cout << "Enter first value: ";
	cin >> first; 
	cout << "Enter second value: ";
	cin >> second; 

	cout << "Average: "<< average(first, second);
	cout << ". Standard deviation: " << standard_deviation(first, second);
	cout << "\n\n";
}

//	Function to input two numbers, print out the average ans std deviation
void test_three_values() {
	double first;
	double second;
	double third;


	cout << "Enter first value: ";
	cin >> first;
	cout << "Enter second value: ";
	cin >> second;
	cout << "Enter third value: ";
	cin >> third; 
	cout << "Average: "<< average(first, second, third);
	cout << ". Standard deviation: "; 
	cout << standard_deviation(first, second, third);
	cout << "\n\n";
}

//	Function to input two numbers, print out the average ans std deviation
void test_four_values() {
	double first;
	double second;
	double third;
	double fourth;

	cout << "Enter first value: ";
	cin >> first; 
	cout << "Enter second value: ";
	cin >> second;
	cout << "Enter third value: ";
	cin >> third; 
	cout << "Enter fourth value: ";
	cin >> fourth; 

	cout << "Average: "<< average(first, second, third, fourth);
	cout << ". Standard deviation: ";
	cout << standard_deviation(first, second, third, fourth);
	cout << "\n\n";
}

void too_many_numbers() {
	cout << "Sorry, the program can only test 1, 2, 3 or 4 values.";
	cout << "\n\n";
}