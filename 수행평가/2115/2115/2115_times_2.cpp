//2115 ��ä��
#include <iostream>
using namespace std;

int main() {
	int num, num1;
	cout << " ����1 �Է� : " ;
	cin >> num;
	cout << " ����2 �Է� : ";
	cin >>  num1;

	if (num > num1) {
		int tmp = num;
		num = num1;
		num1 = tmp;
	}


	for (int i = num; i <= num1; i++) {
		cout << i << "��"<<endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}

	}
		
		cout << endl;
	
}