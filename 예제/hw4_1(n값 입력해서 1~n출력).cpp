#include <iostream>
using namespace std;

int main() {
	int sum;
	char alpha;
	cout << "�� �Է� :";
	cin >> sum;
	while (true) {
		cout << "���ĺ� �Է� :";
		cin >> alpha;
		if (alpha == 'c') {
			for (int i = 1; i <= sum; i++) {
				cout << i << endl;
			}
			break;
		}
		
	}
	return 0;
}