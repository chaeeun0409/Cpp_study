#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream src("source.txt", ios::in); // �Է� 
	ofstream tar("target.txt", ios::out); // ���

	char szbuff[1024];
	int nread;
	int gcount;

	for (;;) {
		src.read(szbuff, 1024);
		//nread = src.getcount();
		tar.write(szbuff, 1024);
	}
	tar.close();
	 
}
	