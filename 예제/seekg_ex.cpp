#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "������ ���� �� �����߽��ϴ�." << endl;
		return 1;
	}
	input.seekg(-1, ios::end); //���� �� z
	cout << (char)input.peek();
	input.seekg(0, ios::beg); // 0��° �ڸ� a
	cout << (char)input.peek();
	input.seekg(7, ios::cur); // a���� 7ĭ h
	cout << (char)input.peek();
	input.seekg(5); // ios::cur,beg,end �Ƚ��� ������ ó������ / ó������ 5��° f
	cout << (char)input.peek() << endl;
	input.close();

	input.seekg(7, ios::cur); // 
	cout << (char)input.get();
	input.seekg(5);
	cout << (char)input.get() << endl;
	input.close();
	return 0;

}