#include <iostream>
using namespace std;
class Student {
private:
	char* name;
	int age;
public:
	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		cout << "이름생성" << endl;
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;
		name = new char[20];
		cout << "이름" << endl;
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		cout << "~Student 소멸자 호출!" << endl;
		if (name != NULL) {
			delete[] name;
			cout << "이름 소멸" << endl;
		}
		}
	}
	Student st3() {
		int name = 0;
		age = NULL;
	}
	
};
int main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 27);
	Student st3();
	Student st4();
	st4 = st1;
	st3 = st2;
	st1.ShowInfo();
	st2.ShowInfo();


}