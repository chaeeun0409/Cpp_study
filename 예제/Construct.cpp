#include <iostream>
using namespace std;
// Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};

//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int _nHakbun, const char* _sName) {
	nHakbun = _nHakbun;
	sName = _sName;
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show() {
	cout << "�й���" << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}
int main() {
	Student student1; //Ŭ���� ���� ����(��ü����) Student1 = new Student();
	student1.show();
	Student student2(5678, "��̸�"); 
	student2.show();  //5678, ��̸�
	return 0;
}