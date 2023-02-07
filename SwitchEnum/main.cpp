#include <iostream>

using namespace std;

int main( ){
	
	enum Direction { // sets a type, think of int.
		left, right, up, down // limits values to only be these
	};
	
	Direction heading {left}; // heading is the name of the type. ie. int letter_grade {}
	
	switch (heading) {
		case left:
			cout << "Going left" << endl;
			break;
		case right:
			cout << "Going right" << endl;
			break;
		default:
			cout << "OK" << endl;
	}
	
	cout << endl;
	return 0;
}