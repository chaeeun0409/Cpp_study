#include <iostream>
using namespace std;

void function();

class AAA {
public:
	AAA() { cout << "AAA() ȣ��" << endl; }
	AAA(int i) { cout << "AAA(int i)ȣ��" << endl; }
	AAA(const AAA& a) { //���� ���� ���� ��ĭ
		cout << "AAA(const AAA& a) ȣ��" << endl;
	}
	void function(AAA a) {
		cout << "00" << endl;
	}

};
int main() {
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);
	function(obj1);
	return 0;
}