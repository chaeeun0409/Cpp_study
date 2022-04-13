#include <iostream>
#include <fstream>
using namespace std;
//seekp,seekg 찾는 것 tellp,tellg 경로 위치 말해주는 것  peek 보기만 함
int main() {
	const char* file = "test.txt";
	ifstream fin(file);

	if (!fin) {
		cout << " 실패 ";
	}
	fin.seekg(0, ios::end);
	fin.close();
	return 0;
}
void reverseReadFile(ifstream& fin) {
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	while (length > 0) {
		fin.seekg(--length, ios::beg);
		cout << (char)fin.get();
	}
}