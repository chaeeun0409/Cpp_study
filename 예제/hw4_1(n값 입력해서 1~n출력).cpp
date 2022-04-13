#include <iostream>
using namespace std;

int main() {
	int sum;
	char alpha;
	cout << "수 입력 :";
	cin >> sum;
	while (true) {
		cout << "알파벳 입력 :";
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