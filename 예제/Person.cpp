#include <iostream>
using namespace std;
class Person {
	const char* name;
	const char* phone;
	int age;
public:
	void ShowData();
	//void SetData(const char* _name, const char* _phone, int _age);
	Person(const char* name, const char* phone, int age) {
		this->name = name;
		this->phone = phone;
		this->age = age;
	}
};
void Person::ShowData() {
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

//void Person::SetData(const char* name, const char* phone, int age) {
//	this->name = name; 
//	this->phone = phone;
//  this->age = age;
//}

int main() {
	Person p("KIM", "013-113-1113", 22);
	p.ShowData();
	return 0;
}