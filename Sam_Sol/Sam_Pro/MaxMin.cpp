#include <iostream>
using namespace std;

int main() {
	char cMax = 0x7F, cMin = 0x7F + 1;
	cout << "char �ڷ����� �ִ��� " << (int)cMax << endl;
	cout << "char �ڷ����� �ּڰ��� " << (int)cMin << endl;
	int iMax = 0x7FFFFFFFF, iMin = 0x7FFFFFFFF + 1;
	cout << "int �ڷ����� �ִ��� " << iMax << endl;
	cout << "int �ڷ����� �ּڰ��� " << iMax << endl;

	return 0;
}