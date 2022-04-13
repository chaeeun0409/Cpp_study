#include <iostream>
using namespace std;
template<typename T>
class A_class {
	T value;

public:
	A_class(){}
		
	void setvalue(T val) {
		value = val;
	}
	T getvalue() {
		return value;
	}
};
int main() {
	A_class<int> a1;
	a1.setvalue(123);
	cout << a1.getvalue() << endl;

	A_class<double> a2;
	a2.setvalue(123.456);
	cout << a2.getvalue() << endl;
}