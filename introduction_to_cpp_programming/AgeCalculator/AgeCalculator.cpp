//	The C++ compiler ignores comments which start with 
	// double slashes like this, up to the end of the line.  
	 
	/* Comments can also be written starting with a slash 
	 followed by a star, and ending with a star followed by
	 a slash. As you can see, comments written in this way 
	 can span more than one line. */ 
	
	/* Programs should ALWAYS include plenty of comments! */ 
	
	/* Author: Rob Miller and William Knottenbelt 
	 Program last changed: 30th September 2001 */ 
	 
	/* This program prompts the user for the current year, the user's 
	current age, and another year. It then calculates the age 
	that the user was or will be in the second year entered. */ 
	 
	#include <iostream> 
	
	using namespace std; 
	
	int main() 
	{ 
		int year_now, age_now, another_year, another_age_year; 
		int month_now, month_birth, another_month, another_age_month;
		string month_string;

		month_string = " month";
	 
		cout << "Enter the current year then press RETURN.\n"; 
		cin >> year_now; 

		cout << "Enter the current month (1-12).\n"; 
		cin >> month_now;
	 
		cout << "Enter your current age in years.\n"; 
		cin >> age_now; 

		cout << "Enter the month (1-12) in which you were born.\n";
		cin >> month_birth;
	 
		cout << "Enter the year for which you wish to know your age.\n";
		cin >> another_year; 

		cout << "Enter the month for that year.\n";
		cin >> another_month;
	 
		another_age_year = another_year - (year_now - age_now); 
		another_age_month = another_month - month_birth;

	// make sure the month is not negative by taking away 1 year and adding 12 months
		if(another_age_month < 0) {
			another_age_year--;
			another_age_month = another_age_month + 12;
		}

		if(another_age_month > 1) {
			month_string = " months";
		}
	 

		if (another_age_year > 150) {
			cout << "Sorry, but you'll probably be dead by "<< another_year <<".\n";
		}
		else if(another_age_year >= 0) {
			cout << "Your age in " << another_month <<"/" << another_year << ": "; 
			cout << another_age_year << " and ";
			cout << another_age_month << month_string << "\n";
		} 
		else { 
			cout << "You weren't even born in ";
			cout << another_month << "/" << another_year << "!\n"; 
		}
	
		return 0; 
	}