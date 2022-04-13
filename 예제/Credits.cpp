#include <iostream>
#include <string>
using namespace std;

class Credits;
class Student {
private:
	string name;
	string major;
	string hakbun;
public:
	Student(string name, string major, string hakbun) {
		this->name = name;
		this->major = major;
		this->hakbun = hakbun;

	}
	friend void printGrade(Student, Credits); // a.name, a.major, a.hakbun
};
class Credits {
	double grade;
public:
	Credits(double grade) { this->grade = grade; }
	friend void printGrade(Student, Credits); //b.grade
};
void printGrade(Student a, Credits b) {
	cout << "이름 : " << a.name << endl;
	cout << "학과 : " << a.major << endl;
	cout << "학번 : " << a.hakbun << endl;
	cout << "학점 : " << b.grade << endl;

} 
int main() {
	Student h("HongGilDong", "컴퓨터과학부", "20181234");
	Credits g(4.4);
	printGrade(h, g);

	return 0;
}