//2115 이채은
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
	cout << "원금(원) : ";
	cin >> m;
	cout << "예치기간(년) : ";
	cin >> year;
	cout << "이율 : 1.2%" << endl << endl;

	cout << "예치기간\t만기시 총수령액(단리)\t만기시 총수령액(복리)" << endl;
	for (int i = 1; i <= year; i++) {
		cout << i << "년\t\t" << simple(m, i, interest) << "원\t\t" << compound(m, i, interest) << "원\t\t" << endl;
	}
	return 0;
}