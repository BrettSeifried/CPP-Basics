#include <iostream>
using namespace std;

int main( ){
	
	int counter {10};
	int result {0};
	
	cout << "Counter: " << counter <<endl;
	
	counter = counter + 1;
	cout << "Counter: " << counter <<endl;
	
	cout << "\ncounter++" << endl;
	counter++;
	cout << "Counter: " << counter <<endl;
	
	cout << "\n++counter" << endl;
	++counter;
	cout << "Counter: " << counter <<endl;
	
	cout << "=======================" << endl;
	cout << "Pre Increment with result = ++counter" << endl;
	
	counter = 10;
	result = 0;
	
	cout<< "Counter: " << counter << endl;
	result = ++counter; // this increments before assigning to result
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	cout << "=======================" << endl;
	cout << "Post Increment with result = counter++" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	result = counter++; // Increments after assignment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	cout << "=======================" << endl;
	cout << "Pre Increment & addition result = counter++" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = ++counter + 10;
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	cout << "=======================" << endl;
	cout << "Post Increment & addition result = counter++" << endl;
	
	counter = 10;
	result = 0;
	
	cout << "Counter: " << counter << endl;
	
	result = counter++ + 10;
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;
	
	cout << endl;
	
	return 0;
}