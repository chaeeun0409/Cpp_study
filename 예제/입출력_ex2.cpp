//#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int ncount = 10;
	int nNum;
	char szName[20];

	fstream outfile("outline.txt");
	outfile.seekg(0, ios::beg);
	for (int i = 0; i < ncount; i++) {
		nNum = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNum);
		outfile << nNum << endl;
		outfile << szName << endl;
	}
	//outfile.close();

	//ifstream infile("outline.txt");

	for (int i = 0; i < ncount; i++) {

		outfile >> nNum >> szName;
		cout << nNum;
		cout << szName << endl;
	}
	outfile.close();
}
