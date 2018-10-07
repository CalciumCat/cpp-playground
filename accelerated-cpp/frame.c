#include <iostream>
#include <string>
// frame.c prints a framed message using a user defined word. 

using std::cout;	using std::cin;
using std::endl;	using std::string;

int main()
{
	cout << "Type a noun:" << endl;

	string noun;
	cin	>> noun;

	const string message = noun +"s and where to find them";

	const int row_pad = 1;
	const int col_pad = 5; 
	const int rows = 3 + row_pad*2;
	const string::size_type cols = message.size() + 2 + 2*col_pad;

	cout << endl;
	// invariant - written r rows so far
	for( int r = 0; r != rows ; ++r ){

		string::size_type c = 0;
		// invariant - written c columns so far
		while( c!=cols ){
			if( r == row_pad+1 && c == col_pad+1){
				cout << message;
				c += message.size();
			} else {
				if(r==0 || r==rows-1 ||
				   c==0 || c==cols-1 )
					cout << "*";
				else
					cout << " ";
				++c;					
			}
		}
		cout << endl;
	}
	return 0;

}