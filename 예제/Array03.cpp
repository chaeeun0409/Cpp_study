#include <iostream>
#include <string>
using namespace std;
//#define a(val) (val)*(val) �ű׷� ��ó��

inline int a(int val) {  //�ζ���(inline)�Լ�
	return val * val;
}

int main(void) {
	cout << a(3 + 2) << endl;
	//cout <<(3+2)*(3+2) << endl; 25
}