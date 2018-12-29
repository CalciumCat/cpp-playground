#include<iostream>
#include<fstream>
#include<string>
#include"filecheck.h"

using namespace std;

/*	Function to count the number of characters in a file (including blanks
	and comments)*/
void count_characters(std::ifstream& in_stream){
	char character;
	int count = 0; 

	in_stream.get(character);
	while(!in_stream.eof())
	{
		count++;
		in_stream.get(character);
	}
	in_stream.close();

	cout << "There are " << count << " characters in the file. \n \n";

}

/*	Function that prints file contents to the screen*/
void print_with_comments(ifstream& in_stream){
	char character;

	in_stream.get(character);
	while(!in_stream.eof())
	{
		cout << character;
		in_stream.get(character);
	}
	in_stream.close();
}

/*	Function that prints file contents without comments in / * to a file*/
void print_without_comments(ifstream& in_stream, ofstream& out_stream){
	const int False = 0;
	const int True = 1;
	char character;
	char next_character;
	int inside_comment = False; 

	in_stream.get(character);

	while(!in_stream.eof()) 
	{
		/*	Check if there's a comment */
		if(inside_comment == False && character == '/')
		{
			in_stream.get(next_character);
			if(next_character=='*')
				inside_comment = True;
			else
				in_stream.putback(next_character);
		}

		/*	Check if at the end of a comment */
		if(inside_comment == True && character == '*')
		{
			in_stream.get(next_character);
			if(next_character == '/')
				in_stream.get(character);
			inside_comment = False;
		}


		/*	Write to file and screen */
		if(inside_comment == False){
			out_stream.put(character);
			cout << character;
		}

		in_stream.get(character);
	}
	in_stream.close();

}