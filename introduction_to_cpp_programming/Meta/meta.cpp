/*	The programme meta.cpp ouputs its own C++ source onto the screen */ 
#include<iostream>
#include<fstream>

using namespace std;

//	Main programme begins
int main() {
	char character;
	ifstream in_stream;
	ofstream out_stream; 

	in_stream.open("meta.cpp");

	in_stream.get(character);

	while(!in_stream.eof())
	{
		cout << character;
		in_stream.get(character);
	}
	in_stream.close();

}
// Main programme ends
