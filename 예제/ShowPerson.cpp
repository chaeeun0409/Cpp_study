#include <iostream>
#include <cstring>

using namespace std;
class Person {
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s (name[len]);
		age = myage;
	}
	void ShowPerson() const {
		cout << "이름" << name << " ";
		cout << "나이" << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
	Person(Person&n) :age(n.age) {
		name = new char[strlen(n.name)];
		strcpy(this->name,n.name);
		//this->age = n.age;
};
int main(void) {
	Person man1("Lee Mee Rim", 27);
	Person man2(man1); // man2 = man1 또는 man2{man1}
	man1.ShowPerson();
	man2.ShowPerson();
	return 0;
}