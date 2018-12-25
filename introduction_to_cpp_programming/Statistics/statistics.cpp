/* statistics.cpp  contains functions that calculate the average and standard
deviation of 1, 2, 3 or 4 real values */

#include<iostream>
#include<cmath>
#include "statistics.h"

using namespace std;

/* Function to calculate the average of one number */
double average(double first){
	return first;
}

/* Function to calculate the average of two numbers */
double average(double first, double second){
	double mean;
	mean = (first + second)/2;
	return mean;
}

/* Function to calculate the average of three numbers */
double average(double first, double second, double third){
	double mean;
	mean = (first + second + third)/3;
	return mean;
}

/* Function to calculate the average of four numbers */
double average(double first, double second, double third, double fourth){
	double mean;
	mean = (first + second + third + fourth)/4;
	return mean;
}

/*	Function to calculate the standard deviation of one number */
double standard_deviation(double first) {
	return 0;
}

/*	Function to calculate the standard deviation of two numbers. */
double standard_deviation(double first, double second) {
	double first_arg, second_arg;
	double mean; 

	mean = average(first, second);

	first_arg = (first - mean)*(first - mean);
	second_arg = (second - mean)*(second - mean);

	return sqrt(average(first_arg, second_arg));
}

/*	Function to calculate the standard deviation of three numbers. */
double standard_deviation(double first, double second, double third) {
	double first_arg, second_arg, third_arg;
	double mean;

	mean = average(first, second, third);

	first_arg = (first - mean)*(first -mean);
	second_arg = (second - mean)*(second - mean);
	third_arg = (third - mean)*(third - mean);
	return sqrt(average(first_arg, second_arg, third_arg));
}

/*	Function to calculate the standard deviation of four numbers. */
double standard_deviation(double first, double second, double third, double fourth) {
	double first_arg, second_arg, third_arg, fourth_arg;
	double mean;

	mean = average(first, second, third, fourth);

	first_arg = (first - mean)*(first -mean);
	second_arg = (second - mean)*(second - mean);
	third_arg = (third - mean)*(third - mean);
	fourth_arg = (fourth - mean)*(fourth - mean);
	return sqrt(average(first_arg, second_arg, third_arg, fourth_arg));
}