#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
int lotto(int range, int sel) {
	vector<int>v;
	for (int i = 0; i < sel; i++) {
		v.push_back(rand() % range + 1);
	}
	return v;
}
int main() {
	srand(time(0));
	vector<int>lo;

	lotto(100, 10);
	return 0;
}