//2115 이채은
#include <iostream>
using namespace std;

int main() {
	int gross, net;
	int tax = 0;

	cout << "연수입 이력(만원 단위로 입력) : ";
	cin >> gross;

	if (gross < 1000) tax = 0;
	else if (gross < 3000) tax = (gross - 1000) / 100 * 1;
	else if (gross < 5000)tax = (gross - 3000) / 100 * 3 + 20;
	else tax = (gross - 5000) / 100 * 6 + 80;

	net = gross - tax;

	cout << "세금 : " << tax << "만원" << endl << "실질소득 : " << net << "만원";

	return 0;
}