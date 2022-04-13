#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b) {
	return a + b;
}

int main(void) {
	cout << add(3, 5) << endl;
	//cout << add(2.7, 42) << endl;
	cout << add('a', 'b') << endl;
	//cout << add("School", "Mirim") << endl;


}