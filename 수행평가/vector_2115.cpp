//2115 ��ä�� vector_2115
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n); //�迭 ar�� ������(n��)�� ������ �� �ߺ��� �����ϰ�, �ߺ� ���ŵ� �������� ������ ��ȯ�ϴ� �Լ�
void show(const long ar[], int n); // �迭 ar�� ������(n��)�� ����ϴ� �Լ�


int main() {
	vector<long>v;
	long ar[10];
	int i, j, k;
	int temp;
	cout << "������ �Է� : ";
	for (j = 0; j < 10; j++) {
		cin >> ar[j];
	}
	cout << "������ ��� : ";
	for (j = 0; j < 10; j++)
		cout << " " << ar[j];
	cout << "\n";
	for (i = 0; i < 10; i++) {
		for (k = 0; k < 9; k++) {
			if (ar[k] > ar[k + 1]) {
				temp = ar[k];
				ar[k] = ar[k + 1];
				ar[k + 1] = temp;
			}
		}
	}

	cout << "������ ���� �� ��� :";
	for (j = 0; j < 10; j++) 
		cout << " " << ar[j];		
}
