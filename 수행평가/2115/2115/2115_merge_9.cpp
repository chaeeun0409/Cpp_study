// 2115 ��ä��
#include <iostream>
using namespace std;

void Sort(int* n, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (n[i] > n[j]) {
				int tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	}
}

int main() {
	int A[5];
	int B[5];
	int cnt = 0;

	cout << "ù��° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}

	cout << "�ι�° ���� ����Ÿ 5�� �Է� : ";
	for (int i = 0; i < 5; i++) {
		cin >> B[i];
	}
	cout << "**************************" << endl;

	cout << "ù��° ����Ÿ ���� ��� : ";
	Sort(A, 5);
	for (int i = 0; i < 5; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

	cout << "�ι�° ����Ÿ ���� ��� : ";
	Sort(B, 5);
	for (int i = 0; i < 5; i++) {
		cout << B[i] << "  ";
	}
	cout << endl;

	int num[10];
	for (int i = 0; i < 5; i++) {
		num[i] = A[i];
		num[i + 5] = B[i];
	}

	cout << "���� ���� ��� : ";
	Sort(num, 10);
	for (int i = 0; i < 10 - cnt; i++) {
		for (int j = i + 1; j < 10 - cnt; j++) {
			if (num[i] == num[j]) {
				for (int k = i; k < (10 - cnt); k++) {
					num[k] = num[k + 1];
				}
				cnt++;
				j--;
			}
		}
	}
	for (int i = 0; i < 10 - cnt; i++) {
		cout << num[i] << "  ";
	}
	return 0;
}