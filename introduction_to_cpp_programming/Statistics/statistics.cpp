/* statistics.cpp  contains functions that calculate the average and standard
deviation of 1, 2, 3 or 4 real values */

#include <iostream>
#include "statistics.h"

using namespace std;

/* Function to calculate the average of two numbers */
double average(double a , double b){
	double mean;
	mean = (a + b)/2;
	return mean;
}