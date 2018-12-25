/* conversions.cpp --> Implementation file */
// Ex 3, Q1-2

#include <iostream>
#include "conversions.h"

using namespace std;


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

