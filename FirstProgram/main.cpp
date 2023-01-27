#include <iostream>

int main(){
//	vairbale declaration
	int favorite_number;
	std::cout << "What is your Favorite number between 1 and 100?";
	
//	gets user input
	std::cin >> favorite_number;
	
	// endl is end line.
	std::cout << "Amazing, thats my favorite number as well" << std::endl;
	
	return 0;
}