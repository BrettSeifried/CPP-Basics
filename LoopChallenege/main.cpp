#include <iostream>
#include <vector>

using namespace std;

	// List the Options
	//P - Print allthe numbers [ x x x x ]
		// if empty, should display "[] - The list is empty"
	//A add a number to the list
		// display "X added"
	//M Display the mean (sum / num)
		// if empty "unable to caluclate - list is empty"
	//S Display smallest number
		// if empty "unable to caluclate - list is empty"
	//L display the largest number
		// if empty "unable to caluclate - list is empty"
	//Q quit
	// Error if not one of those is selected

int main( ){

	vector<double> list{};
	char selection{};
	
	do {
		cout << "----------------" << endl;
		cout << "P - Print" << endl;
		cout << "A - Add" << endl;
		cout << "M - Find the Mean" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		
		cout << "Enter a choice: ";
		cin >> selection;
		
		// Print
		if (selection == 'p' || selection == 'P'){
			if(list.size() != 0) {
			cout << " [ ";
			for (auto items : list)
				cout << items << " ";
		cout << "]" <<endl;
		
			} else
				cout << "[] - The list is empty" << endl;
		
		 //Add
		} else if (selection == 'a' || selection == 'A'){
			int addition{};
			cout << "Enter a number: ";
			cin >> addition;
			list.push_back(addition);
			cout << addition << " was added!" << endl;
		// Mean
		} else if (selection == 'm' || selection == 'M'){
			if (list.size() != 0) {
			double total{};
			for (auto items : list){
				total += items;
			}
				cout << "The Mean is " << total / list.size() << endl;
			} else 
				cout << "The list is empty" << endl;
		// Smallest
		} else if (selection == 's' || selection == 'S'){
			if(list.size() != 0){
				sort(list.begin(), list.end());
				cout << list[0] << endl;
			}else
				cout << "[] - The list is empty" << endl;
		//Largest
		} else if (selection == 'l' || selection == 'L'){
			if(list.size() != 0){
				sort(list.begin(), list.end(), greater<int>());
				cout << list[0] << endl;
			} else
				cout << "[] - The list is empty" << endl;
		// unrecognized input
		} else
			cout << "Invalid Input, try again" << endl;
	} while (selection != 'q' && selection != 'Q');
		cout << "thanks for playing!" << endl;
		
	
	cout << endl;
	return 0;
}