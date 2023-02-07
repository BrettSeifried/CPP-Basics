#include <iostream>
#include <vector>

using namespace std;

int main( ){
	
//	for (int i{1} ; i <= 10 ; ++i)
//		cout << i << endl;
		
//	for (int i{1} ; i <= 10 ; i+=2) // increment by 2
//		cout << i << endl;
	
//	for (int i {10} ; i > 0 ; --i) // decrement by 1
//		cout << i << endl;
//	cout << "Blast Off" << endl;

//	for (int i {10} ; i <= 100 ; i+=10) { // count by 10
//		if (i % 15 == 0)
//			cout << i << endl;
//	 }

//	for (int i{1}, j{5} ; i <= 5 ; ++i, ++j) // intializing two different i.
//		cout << i << " + " << j << " = " << i + j << endl;

//	for (int i{1} ; i <= 100 ; ++i) { // new endl every 10 numbers
//		cout << i;
//		if (i % 10 == 0)
//			cout << endl;
//		else
//			cout << " ";
//	}

//	for (int i{1} ; i <= 100 ; ++i) { // same as above but cleaned up
//		cout << i << ( ( i % 10 == 0) ? "\n" : " ");
//	}
	
	vector <int> nums {10,20,30,40,50}; // list everything in the vector
	for (unsigned i{0} ; i < nums.size() ; ++i)
		cout << nums[i] << endl;
	
	cout << endl;
	return 0;
}