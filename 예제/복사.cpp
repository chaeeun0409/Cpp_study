#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream src("source.txt", ios::in); // 입력 
	ofstream tar("target.txt", ios::out); // 출력

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
	