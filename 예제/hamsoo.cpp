#include <iostream>
using namespace std;

int square_sum(int& num) {
	num = num * num; 
	return num+ num;   //main으로 돌아갈때 버리고온다

}
int main() {
	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a 값이 바뀌었다면 9가 출력됩니다 : " << a << endl;

}