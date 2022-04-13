//2115 이채은
#include <iostream>

using namespace std;

void get_numbers(int n[], int size) {
	int i, j;

	for (i = 0; i < size; ++i) {
		n[i] = rand() % 46 + 1;
		for (j = 0; j < i; ++j) {
			if (n[i] == n[j]) {
				--i;
				break;
			} 
		}
	}
}

void sort(int n[], int size) {
	int i, j, temp;
	for (i = 0; i < size - 1; i++) {
		for (j = 1; j < size - i; j++) {
			if (n[j - 1] > n[j]) {
				temp = n[j - 1];
				n[j - 1] = n[j];
				n[j] = temp;
			}
		}
	}
}

void print(int n[], int size) {
	int i;
	for (i = 0; i < size; ++i) {
		cout << n[i] << "\t";
	}
	cout << endl;
}

int main() {
	const int SIZE = 7;
	int n[SIZE];

	srand((unsigned int)time(NULL));

	int T = 1;
	while (T--) {

		get_numbers(n, SIZE);
		cout << "정렬 전 : ";
		print(n, SIZE);
		sort(n, SIZE);
		cout << "정렬 후 : ";
		print(n, SIZE);
	}

	return 0;
}