#include <iostream>
using namespace std;

class Counter {
private:
	int val;
public:
	Counter() { 
		val = 0;
		cout << "생성자" << endl;
	}
	void Print() { cout << val << endl; }
	friend void SetX(Counter& c, int val);  //friend 선언 friend 를 쓰면 접근제어자가 없어진다.
};

void SetX(Counter& c, int val) { //callbyreference
	//전역 함수
	c.val = val;
}
int main() {
	Counter cnt;
	cnt.Print();

	SetX(cnt, 2002);
	cnt.Print();

	return 0;
}