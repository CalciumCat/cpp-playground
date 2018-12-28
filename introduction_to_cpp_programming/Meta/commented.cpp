/* Program commented.cpp outputs itself without comments */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void print_with_comments(ifstream& in_stream);
void print_without_comments(ifstream& in_stream, ofstream& out_stream);

/*	Start of main program */
int main() {
	ifstream in_stream;
	ofstream out_stream;

	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	//in_stream.open("commented.cpp");
	//print_with_comments(in_stream); // closes file

	in_stream.open("commented.cpp");
	out_stream.open("uncommented.cpp");
	print_without_comments(in_stream, out_stream);
}

/*	Function that prints file contents to screen */
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

/*	Function that prints file contents to a file*/
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

