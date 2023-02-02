//collect the cents
// set values for each coin


#include <iostream>

using namespace std;

int main( ){
	
	int cents {0};
	const int dollar_value {100};
	const int quater_value {25};
	const int dime_value {10};
	const int nickle_value {5};
	
	
	cout << "Enter an amount in cents: ";
	cin >> cents;
	
	int balance{}, dollars{}, quaters{}, dimes{}, nickles{}, pennies{};
	
	dollars = cents / dollar_value;
	balance = cents- (dollars * dollar_value);
	
	quaters = balance / quater_value;
	balance -= quaters * quater_value;
	
	dimes = balance / dime_value;
	balance -= dimes * dime_value;
	
	nickles = balance / nickle_value;
	balance -= nickles * nickle_value;
	
	pennies = balance;
	
	cout << "\nYoure Change is as follows:" << endl;
	cout << "Dollars: " << dollars << endl;
	cout << "Quaters: " << quaters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickles: " << nickles << endl;
	cout << "Pennies: " << pennies << endl;
	
	cout << endl;
	return 0;
}