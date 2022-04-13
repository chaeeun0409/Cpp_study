#include <iostream>
using namespace std;

void function();

class AAA {
public:
	AAA() { cout << "AAA() 호출" << endl; }
	AAA(int i) { cout << "AAA(int i)호출" << endl; }
	AAA(const AAA& a) { //시험 예상 문제 빈칸
		cout << "AAA(const AAA& a) 호출" << endl;
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