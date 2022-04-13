#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0, z = 0;

	for (int i = 100; i <= 999; i++) {
		x = i / 100;
		y = (i % 100) / 10;
		z = (i % 100) % 10;

		if ((x * x * x) + (y * y * y) + (z * z * z) == i)
			cout << i << endl;
	}

	return 0;
}
