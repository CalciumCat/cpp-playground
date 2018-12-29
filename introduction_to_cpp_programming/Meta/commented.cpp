/* Program to try out the functions in filecheck.cpp */

#include<iostream>
#include<fstream>
#include<string>
#include"filecheck.h"

using namespace std;

/*	Start of main program */
int main() {
	ifstream in_stream;
	ofstream out_stream;

	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	in_stream.open("commented.cpp");
	count_characters(in_stream); // closes file

	// in_stream.open("commented.cpp");
	// out_stream.open("uncommented.cpp");
	// print_without_comments(in_stream, out_stream);
}

