// 2115 ��ä��
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "�� �Է� : ";
	cin >> n;

	cout << "��� : ";
	while (n > 0) {
		
		cout << n % 10;
		n /= 10;
	}
	cout  << endl;
}