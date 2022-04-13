#include <iostream>
using namespace std;
// unsigned integer A,B를 입력 받아, 0~B까지의 숫자 중, A의 배수의 개수와 각각의 값 및 그들의 합을 계산하여 출력 하는 프로그램 작성

#include <iostream>
using namespace std;

int main(void) {
	int a, b, count = 0, sum = 0;
	cout << "수 2개 입력(작은 수 큰 수) :";
	cin >> a >> b;
	cout << "구할 배수 : ";
	cout << a << endl;
	cout << "끝 값 : " ;
	cout << b << endl;
	cout << "0부터 10까지에 있는 " << a << " 의 배수 :";
	for (int i = 0; i <= b; i++) {
		if (i % a == 0) {
			cout << i ;
			count++;
			sum += i;
		}
	}
	cout << endl;
	cout << "0에서 10까지에 있는 " << a << " 의 배수의 개수 : ";
	cout << count << endl;
	cout << "0에서 10까지에 있는 " << a << " 의 배수의 합 : ";
	cout << sum << endl;

}
