#include <iostream>
using namespace std;
class Student {
private:
	char* name;
	int age;
public:
	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		cout << "�̸�����" << endl;
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;
		name = new char[20];
		cout << "�̸�" << endl;
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		cout << "~Student �Ҹ��� ȣ��!" << endl;
		if (name != NULL) {
			delete[] name;
			cout << "�̸� �Ҹ�" << endl;
		}
		}
	}
	Student st3() {
		int name = 0;
		age = NULL;
	}
	
};
int main() {
	Student st1("�̸���", 27);
	Student st2("���̽�����", 27);
	Student st3();
	Student st4();
	st4 = st1;
	st3 = st2;
	st1.ShowInfo();
	st2.ShowInfo();


}