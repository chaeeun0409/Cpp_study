#include <iostream>
using namespace std;

int main() {
	char sum;

	
	while (true) {
		cout << "���ĺ� �Է� :";
		cin >> sum;
		if (sum == 'z') {
			for (int i = 1; i <= 15; i++) {
				cout << i << endl;
			}
			break;
		}
	}
	

	return 0;
}
