#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char* szName;

	Student() {
		nNo = 0;
		szName = 0;
		cout << "매개변수 없는 생성자" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		szName = new char(strlen(pname) + 1);
		strcpy(szName, pname);
		cout << "매개변수 두 개인 생성자" << endl;
	}

	void printStudent() {
		if (szName ) {
			cout << nNo << ", " << szName << endl;

		}
	}

	~Student() {
		if (szName) {
			cout << "소멸 : " << szName << endl;
			delete[] szName;
		}
		else
		{
			cout << "소멸 : " << szName << endl;
		}
	}
};

int main() {
	Student st1; //<=매개변수 없는것  
	cout << sizeof(st1) << endl;
	st1.nNo = 1;
	st1.szName = new char[20];
	strcpy(st1.szName, "송하나");


	Student st2(2, "홍길동");
	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student();
	st3->printStudent();
	delete st3;
}
//객체가 소멸되는 시점 ? 기본 자료형 변수, 구조체 변수가 소멸되는 시점과 동일하다
// 함수 내에 선언된 객체 :  함수 호출이 끝나면 소멸된다
// 전역적으로 선언된 객체 :  프로그램이 종료할 때 소멸된다, 이렇게 객체 생성할 일(거의)없다

// default 소멸자
// 객체의 소멸 순서를 만족시키기 위한 소멸ㅈㅏ
// 소멸자의 명시적 제공
// 생성자에서 메모리 동적 할당을 하는 경우
