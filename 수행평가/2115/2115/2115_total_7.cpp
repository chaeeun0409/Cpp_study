//2115 ��ä��
#include <iostream>
using namespace std;

int simple(int m, int year, double in) {
	return m * (1 + in * year);
}
int compound(int m, int year, double in) {
	return m * pow((1 + in), year);
}

int main() {
	const double interest = 0.012;
	int m, year;
	cout << "����(��) : ";
	cin >> m;
	cout << "��ġ�Ⱓ(��) : ";
	cin >> year;
	cout << "���� : 1.2%" << endl << endl;

	cout << "��ġ�Ⱓ\t����� �Ѽ��ɾ�(�ܸ�)\t����� �Ѽ��ɾ�(����)" << endl;
	for (int i = 1; i <= year; i++) {
		cout << i << "��\t\t" << simple(m, i, interest) << "��\t\t" << compound(m, i, interest) << "��\t\t" << endl;
	}
	return 0;
}