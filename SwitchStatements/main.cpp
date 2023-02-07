#include <iostream>

using namespace std;

int main( ){
	
	char letter_grade {};
	
	cout << "Enter your letter grade you expect on the exam: ";
	cin >> letter_grade;
	
	switch (letter_grade) {
		case 'a':
		case 'A':
			cout << "You need a 90 or above, study hard" << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need 80-89 for a B" << endl;
			break;
		case 'c':
		case 'C':
			cout << "You need 70-79 for a C" << endl;
			break;
		case 'd':
		case 'D':
			cout << "You need a 60-69 for a D" << endl;
			break;
		case 'f':
		case 'F':
		{
			char confirm {}; // need curlies on 31 & 43 because we are delcaring an int here
			cout << "Are you sure? (Y/N): ";
			cin >> confirm;
			 
			if (confirm == 'y' || confirm == 'Y')
				cout << "OK, I guess you didn't study" << endl;
			else if (confirm == 'n' || confirm == 'N')
				cout << "Good, go study" << endl;
			else 
				cout << "Not a valid option" << endl;
			break;
		}

		default:
			cout << "Sorry that's not a valid grade" << endl;
	}
	
	cout << endl;
	return 0;
}