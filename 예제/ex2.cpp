#include <iostream>
using namespace std;
int add(int x, int y) {
	return x + y;
}
int substract(int x, int y) {
	return x - y;
}
int multiply(int x, int y) {
	return x * y;
}
int main() {
	int x, y;
	int op;
	int result;

	cin >> x;
	cin >> y;
	cout << "1 : add  " << " 2 : substract  " << "  3 : multiply" << endl;
	cin >> op;
	
	//동적바인딩 예시
	int (*func_ptr)(int,int)=nullptr; // 매개변수 두개짜리 함수를 포인터 하겠다는 것 
	switch (op)
	{
	case 1: func_ptr = add;
	case 2: func_ptr = substract;
	case 3: func_ptr = multiply;
		break;
	}
	cout << func_ptr(x, y) << endl;

	// 정적 바인딩에 예시
	//switch (op)
	//{
	//case 0:
	//case 1: result = add(x, y);
	//case 2: result = substract(x, y);
	//case 3: result = multiply(x, y);
	//	break;
	//}
	//cout << result << endl;
}