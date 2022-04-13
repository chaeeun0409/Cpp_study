#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
void lotto() {

}
int main() {
	srand(time(0));
	vector<int>v;

	for (int i = 0; i < 6; i++){
		v.push_back(rand() % 46 + 1);
		cout << v[i] << " ";
		for (int j = 0; j < 6; j++) {
			if (v[j] == v[i]) {

			}
		}
	}
	return 0;
}