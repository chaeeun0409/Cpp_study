#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v;

	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << "\n";

	v.pop_back();
	v.pop_back();
	cout << "v = ";
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << "\n";

}