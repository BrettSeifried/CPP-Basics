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
	cout << "Size of the vector is: " << vector1.size() << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "\nVector2's first int is: " << vector2.at(0) << endl;
	cout << "Vector2's second int is: " << vector2.at(1) << endl;
	cout << "Size of vector2 is: " << vector2.size() << endl;
	
	vector <vector<int>> vector_2d {};
	
	vector_2d.push_back(vector1(0));
	vector_2d.push_back(vector2(0));
	
	cout << "\nVector_2d's 1st int is: " << vector_2d.at(0) << endl;
	cout << "Vector_2d's 2nd int is: " << vector_2d.at(1) << endl;
	
	return 0;
}