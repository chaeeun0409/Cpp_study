#include <iostream>
using namespace std;

class Counter {
private:
	int val;
public:
	Counter() { 
		val = 0;
		cout << "������" << endl;
	}
	void Print() { cout << val << endl; }
	friend void SetX(Counter& c, int val);  //friend ���� friend �� ���� ���������ڰ� ��������.
};

void SetX(Counter& c, int val) { //callbyreference
	//���� �Լ�
	c.val = val;
}
int main() {
	Counter cnt;
	cnt.Print();

	SetX(cnt, 2002);
	cnt.Print();

	return 0;
}