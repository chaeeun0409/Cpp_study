#include <iostream>
using namespace std;

int main() {
	srand((unsigned)time(0));
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << ":" << rand()%39+12<< endl;
	} // 12 ~ 50 까지 나오려면 0~38+12 (50-12=38)
	return 0;
}