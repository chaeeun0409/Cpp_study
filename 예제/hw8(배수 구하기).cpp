#include <iostream>
using namespace std;
// unsigned integer A,B�� �Է� �޾�, 0~B������ ���� ��, A�� ����� ������ ������ �� �� �׵��� ���� ����Ͽ� ��� �ϴ� ���α׷� �ۼ�

#include <iostream>
using namespace std;

int main(void) {
	int a, b, count = 0, sum = 0;
	cout << "�� 2�� �Է�(���� �� ū ��) :";
	cin >> a >> b;
	cout << "���� ��� : ";
	cout << a << endl;
	cout << "�� �� : " ;
	cout << b << endl;
	cout << "0���� 10������ �ִ� " << a << " �� ��� :";
	for (int i = 0; i <= b; i++) {
		if (i % a == 0) {
			cout << i ;
			count++;
			sum += i;
		}
	}
	cout << endl;
	cout << "0���� 10������ �ִ� " << a << " �� ����� ���� : ";
	cout << count << endl;
	cout << "0���� 10������ �ִ� " << a << " �� ����� �� : ";
	cout << sum << endl;

}
