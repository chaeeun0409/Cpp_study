#include <iostream>
using namespace std;

#define multiple_difine(A) ((A)*(A))
int multiple_inline(int A);

int main() {
	int a = 3;
	cout << "inline 함수의 값은 " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define 매크로의 값은 " << multiple_difine(++a) << endl;
	//cout << "define 매크로의 값은 " << ((++a)*(++a) << endl;

	return 0;
}

inline int multiple_inline(int A) {
	return A* A;
}