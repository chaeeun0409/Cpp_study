// 1+2=3, 3+3=5, 6+4=10,... ó�� 1���� 20������ ���� ����Ͽ� ���ϸ鼭 �� ���������� ����� ��� �ϴ� ���α׷�

#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	for (int i = 1; i <20; i++) {
		sum += i;
	}
	cout << "%d + %d = %d\n" <<sum<< endl;
	
	return 0;
}