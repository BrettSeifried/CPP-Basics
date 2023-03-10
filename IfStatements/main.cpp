#include <iostream>

using namespace std;

int main( ){
	
	int num {0};
	const int min {10};
	const int max {100};
	
	cout << "Enter a number between " << min << " & " << max << ": ";
	cin >> num;
	
	if (num >= min) {
		cout << "\n =========== If statement 1 ==========" << endl;
		cout<< num << " is greater than or equal to " << min << endl;
		
		int diff {num - min};
		cout << num << " is " << diff << " greater than " << min << endl;
	}
	
	if (num <= max) {
		cout << "\n =========== If statement 2 ==========" << endl;
		cout << num << " is less than or equal too " << max << endl;
		
	int diff {num - max};
	cout << num << " is " << diff << " less than " << max << endl;
	}
	
	if (num >= min && num <= max) {
		cout << "\n =========== If statement 3 ==========" << endl;
		cout << num << " is in range " << endl;
		cout << " This means statements 1 & 2 must also display" << endl;
	}
	
	if (num == min || num == max) {
		cout << "\n =========== If statement 4 ==========" << endl;
		cout << num << " is right on a boundary " << endl;
		cout << "This means all 4 if statements display" << endl;
	}
	
	int target {50};
	if (num >= target) {
		cout << "\n ========== If Else true =========" << endl;
		cout << num << " is greater than or equal to " << target << endl;
		int diff {num - target};
		cout << num << " is " << diff << " greater than " << target << endl;
	} else {
		cout << "\n ========== If Else false =========" << endl;
		cout << num << " is less than " << target << endl;
		int diff {target - num};
		cout << num << " is " << diff << " less than " << target << endl;
	}
	
	cout << endl;
	return 0;
}