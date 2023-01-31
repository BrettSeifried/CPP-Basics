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
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << number_of_rooms << endl;
	cout << "Price per room: $" << 30 << endl;
	cout << "cost: $" << 30 * number_of_rooms << endl;
	cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;
	cout << "==============================" << endl;
	cout << "Total estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
	cout << "This estimate is valid for " << 30 << " days" << endl;
	
	cout << endl;
	return 0;
}