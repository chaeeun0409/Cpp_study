#include <iostream>
using namespace std;
int main(void) {
	int i, j;
	int result[20];
	int num;

	cout << "¼ö ÀÔ·Â : ";
	cin >> num;

	for (i = 0; num > 0; i++) {
		result[i] = num % 2;
		num = num / 2;
	}
	for (j = i - 1; j >= 0; j--) {
		cout << result[j];
	}
	return 0;
}