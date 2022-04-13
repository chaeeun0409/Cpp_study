#pragma warning(disable: 4996) 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int ncount = 10;
	int nNum;
	char szName[20];

	ofstream outfile("outline.txt");

	for (int i = 0; i < ncount; i++) {
		nNum = i + 1;
		sprintf(szName,"ÀÌ¸§_%d",nNum);
		outfile << nNum << szName;
	}
	outfile.close();
}
