#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <iostream>
using namespace std;

class Person {
	char name[SIZE];
	char phone[SIZE];
	int age;
public:
	Person(const char *name, const char *phone, int age) {
		this->age = age;
		strcpy(this->name, name);
		strcpy(this->phone, phone);
	}
	void ShowData();

};
void Person::ShowData() {
	cout << "name " << name << endl;
	cout << "phone " << phone << endl;
	cout << "age " << age << endl;
}

int main() {
	Person p = {"kim","013-113-1113",22 };
	p.ShowData();
	return 0;
}