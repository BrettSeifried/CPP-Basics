#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main( ){
	
//	int scores[] {10,20,30}; 
//	
//	for (auto score : scores) // displays each score
//		cout << score << endl;
	
	vector <double> temperatures {87.9, 77.9, 82.5, 72.5};
	double average_temp {};
	double total{};
	
	for (auto temp : temperatures)
		total += temp;
		
	if (temperatures.size() != 0)
		average_temp = total / temperatures.size(); 
	
	cout << "Past temps : ";
	for (auto current_temp : temperatures) 
		cout << current_temp << " ";
	
	cout << fixed << setprecision(1);
	cout << "\nAverage temp is " << average_temp << endl;
	
	for (auto val : {1,2,3,4,5})
		cout << val << endl;
	
	cout << "=========== Strings =========" << endl;
	
//	for (auto c : "This is a test")
//		if (c != ' ') // removes spaces
//			cout << c;

	for (auto c : "This is a test")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;
	
	
	cout << endl;
	return 0;
}