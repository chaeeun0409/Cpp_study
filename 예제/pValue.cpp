#include <iostream>
using namespace std;
int main() {
	short value = 10;
	void*pValue = nullptr;

	pValue = &value;
	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(short*)pValue << endl;
	cout << "value = " << value << endl;
	*(short*)pValue = 20;
	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(short*)pValue << endl;
	cout << "value = " << value << endl;
	return 0;

}