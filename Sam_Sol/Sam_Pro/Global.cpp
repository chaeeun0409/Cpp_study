#include <iostream>
using namespace std;

int smae = 2;
int global = 2;

int main() {
	int same = 3;
	cout << "전역 변수라면 2를 지역 변수라면 3을 출력합니다." << endl;
	cout << "변수 same " << smae << endl;
	cout << "변수 global은 " << global << endl;

	return 0;
}