#include <iostream>
#include <vector>

using namespace std;

int main( ){
	vector <int> vector1{};
	vector <int> vector2{};
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "\nVector1's first int is: " << vector1.at(0) << endl;
	cout << "Vector1's Second int is: " << vector1.at(1) << endl;
	cout << "Size of the vector1 is: " << vector1.size() << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "\nVector2's first int is: " << vector2.at(0) << endl;
	cout << "Vector2's second int is: " << vector2.at(1) << endl;
	cout << "Size of vector2 is: " << vector2.size() << endl;
	
	vector <vector<int>> vector_2d {};
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	
	cout << "\nVector_2d's row 1, col 1: " << vector_2d.at(0).at(0) << endl;
	cout << "Vector_2d's row 1, col 2: " << vector_2d.at(0).at(1) << endl;
	cout << "Vector_2d's row 2, col 1: " << vector_2d.at(1).at(0) << endl;
	cout << "Vector_2d's row 2, col 2: " << vector_2d.at(1).at(1) << endl;
	
	vector1.at(0) = {1000};
	
	cout << "\nVector_2d row 1, col 1 is now: " << vector_2d.at(0).at(0) << endl;
	cout << "Vector1's first item is now :" << vector1.at(0) << endl;
	
	return 0;
}