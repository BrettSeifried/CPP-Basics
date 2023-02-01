#include <iostream>

using namespace std;

int main( ){
	
	int num1 {10};
	int num2 {20};
	
	num1 = 100; 
	
	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;
	
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	
	int result {0};
	
	cout << "\nUsing calculation in an operator" << endl;
	result = num1 + num2;
	cout << num1 << " + " << num2 << " = " << result << endl;
	
	cout << "\nSubtraction" << endl;
	result = num1 - num2;
	cout << num1 << " - " << num2 << " = " << result << endl;
	
	cout << "\nMultiplication" << endl;
	result = num1 * num2;
	cout << num1 << " x " << num2 << " = " << result << endl;

	cout << "\nDivision" << endl;
	result = num1 / num2;
	cout << num1 << " / " << num2 << " = " << result << endl;
	cout << endl;
	
	cout << "\nIntergers can't go below 2" << endl;
	result = num2 / num1;
	cout << num2 << " / " << num1 << " = " << result << endl;
	
	cout << "\nModular Operator" << endl;
	result = num1 % num2;
	cout << num1 << " % " << num2 << " = " << result << endl;
	
	num1 = 10;
	num2 = 3;
	
	cout << "\nModular Operator correctly" << endl;
	result = num1 % num2;
	cout << num1 << " % " << num2 << " = " << result << endl;
	
	cout << "\nIn line math" << endl;
	cout << 5/10 << endl;
	cout << 5.0/10.0 << endl;
	
	return 0;
} 