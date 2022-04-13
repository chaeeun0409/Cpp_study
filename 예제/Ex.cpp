#include <iostream>
using namespace std;

int main() {
	char s;
	int num;
	cout << "¾ËÆÄºª ÀÔ·Â : ";
	cin >> s;

	if (isalpha(s)) {
		num = toupper(s) - 'A' + 1;
		cout << num;
	}
	else cout << "Error" << endl;
	return 0;
}


