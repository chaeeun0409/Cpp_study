#include <iostream>
using namespace std;

int main() {
	int i, j = 0;
	int sum = 0;

	for (i = 1; i < 1000; i++) {
		sum = 0;

		for (j = 1; j < i; j++)
			if (i % j == 0)
				sum += j;

		if (sum == i)
			cout << i << endl;
	}
}