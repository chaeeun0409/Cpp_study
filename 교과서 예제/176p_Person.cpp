#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person {
public:
	string name;
	int num; 
	Person(string na, int num) { name = na; num = num; }

	virtual	~Person(){ cout << name  << " Person()소멸" << endl; }

	void PrintShow() {
		cout << "이름 : " << name << endl;
		cout << "번호 : " << num << endl;
	}
	void pTest() {
		cout << "pTest" << endl;
	}
};
class Student :public Person {
public:
	string dahak;
	Student(string na, int num, string da) :Person(na,num) {
		dahak = da;
	}
	~Student() { cout << name  << " Student()소멸" << endl; }

	void PrintShow() {
		Person::PrintShow();
		cout << "대학 : " << dahak << endl;

	}
	void sTest() {
		cout << "sTest" << endl;
	}
};
class Employee :public Person {
public:
	string company;
	int gross;
	Employee(string name, int num, string company, int gross ) :Person(name,num) {
		this-> company = company;
		this-> gross = gross;
	}
	~Employee() { cout << name << " Employee()소멸" << endl; }

	void PrintShow() {
		Person::PrintShow();
		cout << "회사 : " << company << endl;
		cout << "연봉 : " << gross << endl;
	}
};
int main() {
	Student st1("홍길동", 2018, "한국대학교"); //정적
	st1.PrintShow();
	cout << "=======================================" << endl;
	Student* st2 = new Student("홍길순", 2021, "미림"); //동적
	st2->PrintShow();
	delete st2;
	cout << "=======================================" << endl;

	Person st3("배장화", 2019);
	st3.PrintShow();
	cout << "=======================================" << endl;
	
	Person* st4 = new Student("흥부", 2020, "마이스터"); 
	st4->PrintShow();
	st4->pTest();
	//st4->sTest(); // 다 갖고 있지만 아빠쪽에 없는 것은 못씀 형변환 하면 쓸수있다
	delete st4;
	cout << "=======================================" << endl;

	Person* st5 = new Employee("놀부", 2000 , "카카오", 1000);
	st5->PrintShow();
	delete st5;
	cout << "=======================================" << endl;

	return 0;

}