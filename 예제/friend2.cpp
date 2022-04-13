#include <iostream>
using namespace std;

class AAA {
private:
	int data;
};
class BBB {
public:
	void SetData(AAA& aaa, int val) {
		aaa.data = val; //class AAA의 private 영역접근
	}
};
int main() {
	AAA aaa;
	BBB bbb;

	bbb.SetData(aaa, 10);
	return 0;
}
