	// Prompt the user to enter the number of rooms
	// Display number of rooms
	// Display price per room
	
	// Display cost: (number of rooms * price per room)
	// Display tax: number of rooms * price per room * tax rate
	// Display total estimate: (number fo rooms * pricer per room) + (number of rooms * price per room * tax rate)
	// Display estimate expiration time
	
#include <iostream>

using namespace std;

int main( ){
	cout << "Hello, Welcome to Brett's Carpet Cleaning Service" << endl;
	cout << "\nHow many rooms would you like cleaned? ";
	
	int number_of_rooms {0};
	cin >> number_of_rooms;
	
	const double price_per_room {32.50};
	const double tax_rate {0.06};
	const int estimate_expiry {30}; //days
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << number_of_rooms << endl;
	cout << "Price per room: $" << price_per_room << endl;
	cout << "cost: $" << price_per_room * number_of_rooms << endl;
	cout << "Tax: $" << price_per_room * number_of_rooms * tax_rate << endl;
	cout << "==============================" << endl;
	cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * tax_rate) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	
	cout << endl;
	return 0;
}