#include <iostream>
using namespace std;
class TestC {
	int iData;
public:
	TestC() {
		cout << "Test::TestC()" << endl;
	}
	~ TestC() {
		cout << "TestC::~Test()" << endl;
	}
};
int main() {	
	cout << "main begin" << endl;
	TestC* ptr = new TestC[3];
	//TestC* ptr = new TestC;
	cout << "Test Cplus" << endl;
	//delete ptr;
	delete[] ptr;
	cout << "END" << endl;
	return 0;
}