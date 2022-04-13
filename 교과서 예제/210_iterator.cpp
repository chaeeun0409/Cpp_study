#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(int& item){
	cout << item << endl;
}

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator ptr1;
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++)
		show(*ptr1);
	cout << endl;

	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++)
		show(*ptr2);
	cout << endl;

	for (auto &ptr3: v )
		show(ptr3);
	cout << endl;

	for_each(v.begin()+2, v.end(), show);  //알고리즘에 들어있다 for_each #include 써야함
	