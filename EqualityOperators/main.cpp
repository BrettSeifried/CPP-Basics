#include <iostream>

using namespace std;

int main( ){
	
	bool equal_result {false};
	bool not_equal_result {false};
	
	int num1{}, num2{};
	
	cout << boolalpha; // Outputs true/false instead of 1/0
	
	cout << "Enter two integers separated by a space: ";
	cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	cout << "Comparision result (equals): " << equal_result << endl;
	cout << "Comparision result (not equals): " << not_equal_result << endl;
	
	bool num_equal_result {false};
	bool num_not_equal_result {false};
	
	char char1{}, char2{};
	cout << "Enter two sharacters separated by a space: ";
	cin >> char1 >> char2;
	
	num_equal_result = (char1 == char2);
	num_not_equal_result = (char1 != char2);
	cout << "Comparision result (equals): " << num_equal_result << endl;
	cout << "Comparision result (not equals): " << num_not_equal_result << endl;
	
	// If using doubles. 12.0 & 11.999999999 will output as true for equals.
	// computer approximates the numbers
	
	return 0;
}