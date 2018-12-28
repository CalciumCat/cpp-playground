/* Program commented.cpp outputs itself withougt comments */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void print_source_to_screen(ifstream& in_stream);
void print_source_to_file();

/*	Start of main program */
int main() {
	ifstream in_stream;

	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	in_stream.open("commented.cpp");
	print_source_to_screen(in_stream);
}

void print_source_to_screen(ifstream& in_stream){
	char character;
	//ifstream in_stream;
	ofstream out_stream; 

	//in_stream.open("commented.cpp");

	in_stream.get(character);

	while(!in_stream.eof())
	{
		cout << character;
		in_stream.get(character);
	}
	in_stream.close();
}

void print_source_to_file(){

}

