#include <iostream>
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
	void setBan(int ban) {
		this->ban = ban;
	}
	int getBan() {
		return ban;
	}
};
int main() {
	Student student;
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan();
	student.setGrade(2);
	student.setBan(7);
	cout << endl;
	cout << "학년 : " << student.getGrade() << ", 반 : " << student.getBan();
	return 0;
}