#include <iostream>
using namespace std;

int main() {
	char cMax = 0x7F, cMin = 0x7F + 1;
	cout << "char 자료형의 최댓값은 " << (int)cMax << endl;
	cout << "char 자료형의 최솟값은 " << (int)cMin << endl;
	int iMax = 0x7FFFFFFFF, iMin = 0x7FFFFFFFF + 1;
	cout << "int 자료형의 최댓값은 " << iMax << endl;
	cout << "int 자료형의 최솟값은 " << iMax << endl;

	return 0;
}