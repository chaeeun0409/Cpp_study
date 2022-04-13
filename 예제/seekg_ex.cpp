#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는 데 실패했습니다." << endl;
		return 1;
	}
	input.seekg(-1, ios::end); //가장 끝 z
	cout << (char)input.peek();
	input.seekg(0, ios::beg); // 0번째 자리 a
	cout << (char)input.peek();
	input.seekg(7, ios::cur); // a부터 7칸 h
	cout << (char)input.peek();
	input.seekg(5); // ios::cur,beg,end 안써져 있으면 처음부터 / 처음부터 5번째 f
	cout << (char)input.peek() << endl;
	input.close();

	input.seekg(7, ios::cur); // 
	cout << (char)input.get();
	input.seekg(5);
	cout << (char)input.get() << endl;
	input.close();
	return 0;

}