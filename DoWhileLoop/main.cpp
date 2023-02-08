#include <iostream>

using namespace std;

int main( ){
	
	char selection{};
	
	do {
		cout << "\n-----------------" << endl;
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q. Quit" << endl;
		
		cout << "\nEnter your selection: ";
		cin >> selection; 
		
		if (selection == '1')
			cout << "You did this" << endl;
		else if (selection == '2')
			cout << "You did that" << endl;
		else if (selection =='3')
			cout << " YOU did something else" << endl;
		else if (selection == 'Q' || selection == 'q')
			cout << "Thanks for playing" << endl;
		else
			cout << "Invalid option" << endl;
			
	} while (selection != 'q' && selection != 'Q');
	
	cout << endl;
	return 0;
}