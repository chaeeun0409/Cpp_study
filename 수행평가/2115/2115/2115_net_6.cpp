//2115 ��ä��
#include <iostream>
using namespace std;

int main() {
	int gross, net;
	int tax = 0;

	cout << "������ �̷�(���� ������ �Է�) : ";
	cin >> gross;

	if (gross < 1000) tax = 0;
	else if (gross < 3000) tax = (gross - 1000) / 100 * 1;
	else if (gross < 5000)tax = (gross - 3000) / 100 * 3 + 20;
	else tax = (gross - 5000) / 100 * 6 + 80;

	net = gross - tax;

	cout << "���� : " << tax << "����" << endl << "�����ҵ� : " << net << "����";

	return 0;
}