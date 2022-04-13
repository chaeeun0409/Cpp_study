//2115 이채은
#include <iostream>
using namespace std;

void code(char Al, int n) {
	int num = (int)Al;
	int arr[8];
	int i = 0;
	char he[2];

	if (n == 16) {
		while (num > 0) {
			he[i] = num % n; //나머지

			if (he[i] >= 10) {
				he[i] = (char)(he[i] + 55);
			}
			else {
				he[i] = (char)(he[i] + 48);
			}

			num = num / n;
			i++;
		}
		for (int j = i - 1; j >= 0; j--) {
			cout <<  he[j];
		}

	}

	else {
		while (num != 0) {
			arr[i] = num % n;
			num = num / n;
			i++;
		}
		if (n == 2) {
			while (i < 8)
				arr[i++] = 0;
		}
		for (int j = i - 1; j >= 0; j--) {
			cout << arr[j];
		}
	}

}

int main() {
	cout << "char\tbinary\t\toctal\tdigit\thexa" << endl;
	for (char i = 'A'; i <= 'Z'; i++) {
		cout << i << "\t";
		code(i, 2);
		cout << "\t";
		code(i, 8);
		cout << "\t";
		code(i, 10);
		cout << "\t";
		code(i, 16);
		cout << endl;
	}
}