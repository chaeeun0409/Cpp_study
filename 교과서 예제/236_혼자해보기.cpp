#include <iostream>
#include <fstream>
using namespace std;
//seekp,seekg ã�� �� tellp,tellg ��� ��ġ �����ִ� ��  peek ���⸸ ��
int main() {
	const char* file = "test.txt";
	ifstream fin(file);

	if (!fin) {
		cout << " ���� ";
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