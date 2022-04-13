#include <iostream>
#include <string>
using namespace std;
//#define a(val) (val)*(val) 매그로 전처리

inline int a(int val) {  //인라인(inline)함수
	return val * val;
}

int main(void) {
	cout << a(3 + 2) << endl;
	//cout <<(3+2)*(3+2) << endl; 25
}