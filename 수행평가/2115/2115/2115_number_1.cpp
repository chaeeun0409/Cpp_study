//2115 ��ä��
#include <iostream>
using namespace std;

int main() {
	int i;
	int cnt = 0;
	for (i = 1; i <= 150; i++) {
		
		if (i % 15 == 0) {
			cout << i << "\t";
			cnt++;
			if (cnt % 15 == 0) {
				cout << endl;
			}
		}
	
		
	}
	cout << endl;
	cout <<"���� = " << cnt <<"��"<< endl;

}