//2115 이채은
#include <iostream>
using namespace std;

int main() {
	int num, num1;
	cout << " 정수1 입력 : " ;
	cin >> num;
	cout << " 정수2 입력 : ";
	cin >>  num1;

	if (num > num1) {
		int tmp = num;
		num = num1;
		num1 = tmp;
	}


	for (int i = num; i <= num1; i++) {
		cout << i << "단"<<endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}

	}
		
		cout << endl;
	
}