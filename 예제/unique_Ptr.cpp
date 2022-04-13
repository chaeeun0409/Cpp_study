#include <iostream>
#include <memory>

using namespace std;
class Student {
private:
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 8;
	}
	~Student(){}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
};
int main() {
	unique_ptr<Student> pStudent(new Student);
	cout << "학년  : " << pStudent->getGrade() << endl;
	pStudent->setGrade(2);
	cout << "학년  : " << pStudent->getGrade() << endl;
	return 0;
}