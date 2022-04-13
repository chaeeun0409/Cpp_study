// 1+2=3, 3+3=5, 6+4=10,... 처럼 1부터 20까지의 수를 계속하여 더하면서 그 때마다합의 결과를 출력 하는 프로그램

#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	for (int i = 1; i <20; i++) {
		sum += i;
	}
	cout << "%d + %d = %d\n" <<sum<< endl;
	
	return 0;
}