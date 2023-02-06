/*
 Shipping cost calculator
	Ask the user for package dimenstions in inches
	 * length, width, height - these should be integers
	 * 
	 * all dimentions must be 10 inches or less or we cannot ship
	 * 
	 * base cost $2.50
	 * if package volume is greater than 100 cubiuc inches there is a 10% surcharge
	 * if package volume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main( ){
	
	int length{}, width{}, height{};
	double base_cost{2.50};
	
	const int tier1_threshold {100}; //volume
	const int tier2_threshold {500}; //volume
	
	int max_dimension_length {10}; //inches
	
	double tier1_surcharge {0.10}; // 10% extra
	double tier2_surcharge {0.25}; // 25% extra
	
	// all dimensions must be 10 inches or less
	
	int package_volume{}; 
	
	cout << "Welcome to the package cost calculator" << endl;
	cout << "Enter the lenght, width, and height in iches of the package separated by spaces: ";
	cin >> length >> width >> height;
	
	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
		cout << "Sorry, package exceeds allowable dimensions" << endl;		
	} else {
		double package_cost {};
		package_volume = length * width * height;
		package_cost = base_cost;
		
		if (package_volume > tier2_threshold) {
			package_cost += package_cost * tier2_surcharge; // 2.50 + (2.50 * 25%)
			cout << " adding tier 2 surcharge" << endl;
		} else if (package_volume > tier1_threshold) {
			package_cost += package_cost * tier1_surcharge; // 2.50 + (2.50 * 10%)
			cout << " adding tier 1 surcharge" << endl;
		}
		
		cout << fixed << setprecision(2); // prints dollars properly.
		
		cout << "The volume of your package is " << package_volume << endl;
		cout << "Total cost: $" << package_cost << " to ship" << endl;
	}
	
	cout << endl;
	return 0;
}