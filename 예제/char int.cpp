#include <iostream>
using namespace std;
int main() {
	int iCode;
	iCode = 'A';
	cout << (char)iCode << "->" << iCode << endl;
	iCode = 'B';
	cout << (char)iCode << "->" << iCode << endl;
	iCode = 'C';
	cout << (char)iCode << "->" << iCode << endl;
	char cCode = 'a';
	cout << (char)cCode << "->" << (int)cCode << endl;
	iCode = 'b';
	cout << (char)iCode << "->" << (int)iCode << endl;
	iCode = 'c';
	cout << (char)iCode << "->" << (int)iCode << endl;

}