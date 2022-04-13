#include <iostream>
using namespace std;

int main() {

	int* ptr;
	int arr[4] = { 1,2,3,4 };
	ptr = arr;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << "";
	cout << endl;
	
	for (int i = 0; i < 4; i++)
		cout << *(arr + i) << "";
	cout << endl;

	for (int i = 0; i < 4; i++)
		cout << *(arr + i) << "";
	cout << endl;

	ptr++;
	cout << ptr;
	
	return 0;
}