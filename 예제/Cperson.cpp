#include <iostream>
using namespace std;
class CPerson {
private:
	string name;
	int age;

public:

	CPerson(string name, int age) {
		cout << name << " 생성" << endl;
		this->name = name;
		this->age = age;
		
	}
	void print() {
		cout << name << " 은 " << age << "세 입니다." << endl;
	}
	~CPerson(){
		cout <<name << " 소멸" << endl;
	}	
};
int main() {
	CPerson cp("홍길동",33);
	cp.print();

	return 0;
}