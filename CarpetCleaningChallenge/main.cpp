/*
 Brett's Carpet Cleaning
  * Charges
  * 	$25 per small room
  * 	$35 per large room
  * Sales tax rate is 6%
  * Estimates are valid for 30 days
  * 
  Estimate for carpet cleaning service
   * number of small rooms: 3
   * number of large rooms: 1
   * price per small room: $25
   * price per large room: $35
   * cost: $110
   * tax: $6.6
   * ==============
  Total estimate: $116.6
  This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main( ){
	
	cout << "Hello! Welcome to Brett's Carpet Cleaning Service!" << endl;
	//collect amount of rooms
	cout << "How many small rooms would you like cleaned? ";
	int small_rooms;
	cin >> small_rooms;
	
	cout << "How many large rooms would you like cleaned? ";
	int large_rooms;
	cin >> large_rooms;
	
	// set consts for prices, tax, & days
	const double small_room_cost {25};
	const double large_room_cost {35};
	const double tax_rate {0.06};
	const int days_valid {30};
	
	// display estimates
	cout << "\nEstimate for carpet Cleaning service\n";
	
	cout << "Number of small rooms: " << small_rooms << endl; // number of small rooms
	cout << "Number of large rooms: " << large_rooms << endl; // number of large rooms
	
	cout << "Price per small room: $" << small_room_cost << endl; // price per small
	cout << "Price per large room: $" << large_room_cost << endl; //price per large
	
	cout << "Cost: $" 
		 << (small_rooms * small_room_cost) + (large_rooms * large_room_cost) << endl; // cost
	cout << "Tax: $" 
		 << (((small_rooms * small_room_cost) + (large_rooms * large_room_cost))  * tax_rate ) << endl; // tax 
	
	cout << "==================================\n";
	
	cout << "Total estimate: $" 
		 << (small_rooms * small_room_cost) + (large_rooms * large_room_cost) + (((small_rooms * small_room_cost) + (large_rooms * large_room_cost))  * tax_rate ) << endl;	// total estimae
	cout << "Estiame valid for " << days_valid << " days\n";	//valid for days
	
	return 0;
}