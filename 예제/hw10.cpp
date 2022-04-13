#include <iostream>
using namespace std;
int main(void) {
	int i;
	int num=0;
	for (i = 1; i <= 50; i++) {
		num += i;
		if (i % 5 == 0) {
			cout << 1 << "~" << i << " => " << num << endl;
		}
	}
	return 0;
}