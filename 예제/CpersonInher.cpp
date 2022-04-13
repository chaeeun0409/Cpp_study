#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;
	int age;
public:
	//기초 클래스 생성자 정의
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}
		
};
class Student : public Person {
private :
	int id;
public :
	Student(int id, const string& name, int age) : Person(name, age) {
		this->id = id;
	}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();

}