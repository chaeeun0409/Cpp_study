#include <iostream>
#include <string>
using namespace std;
class Person {
protected: // 상속해준 곳까지 쓸수 있다
	string name;
	int age;
public:
	//기초 클래스 생성자 정의
	Person() {
		cout << "아빠" << endl;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}

};
class Student : public Person {
private:
	int id;
public:
	Student(int id, const string& name, int age) : Person(name, age)  {
		this->id = id;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();

}