#include <iostream>
using namespace std;
class CPerson {
private:
	string name;
	int age;

public:

	CPerson(string name, int age) {
		cout << name << " ����" << endl;
		this->name = name;
		this->age = age;
		
	}
	void print() {
		cout << name << " �� " << age << "�� �Դϴ�." << endl;
	}
	~CPerson(){
		cout <<name << " �Ҹ�" << endl;
	}	
};
int main() {
	CPerson cp("ȫ�浿",33);
	cp.print();

	return 0;
}