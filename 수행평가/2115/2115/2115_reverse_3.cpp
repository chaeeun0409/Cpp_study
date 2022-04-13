// 2115 이채은
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "수 입력 : ";
	cin >> n;

	cout << "결과 : ";
	while (n > 0) {
		
		cout << n % 10;
		n /= 10;
	}
	cout  << endl;
}