#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cout;	using std::setprecision;
using std::cin;		using std::string;
using std::endl;	using std::streamsize;
using std::sort;	using std::vector;

int main(){
	cout << "First name: ";
	string name;
	cin >> name;
	cout << "Hello," << name << "!" << endl;

	cout << "Enter midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final; 

	cout << "Enter coursework grades, "
			"followed by the end of file: ";

	vector<double> homework;
	double x;

	// Invariant: we have read cout drades so far,
	// sum is the sum of the first count grades
	while (cin >> x)
		homework.push_back(x);
	
	typedef vector<double>::size_type vec_sz;

	vec_sz size = homework.size();
	if( size == 0) {
		cout << endl << "Enter something!!!!" << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size/2;
	double median; 
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2
							: homework[mid];

	streamsize prec = cout.precision();
	cout << "Final grade: " << setprecision(3)
		  << 0.2*midterm + 0.4 * final + 0.4 * median
		  << setprecision(prec) << endl;
	return 0;

}