#ifndef FILECHECK_H
#define FILECHECK_H

#include <fstream>
using namespace std;


/*	Function to count the number of characters in a file (including blanks
	and comments)*/
void count_characters(ifstream& in_stream);


/*	Function that prints file contents to the screen*/
void print_with_comments(ifstream& in_stream);


/*	Function that prints file contents without comments in / * to a file*/
void print_without_comments(ifstream& in_stream, ofstream& out_stream);


#endif