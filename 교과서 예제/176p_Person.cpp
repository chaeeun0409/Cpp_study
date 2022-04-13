#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person {
public:
	string name;
	int num; 
	Person(string na, int num) { name = na; num = num; }

	virtual	~Person(){ cout << name  << " Person()�Ҹ�" << endl; }

	void PrintShow() {
		cout << "�̸� : " << name << endl;
		cout << "��ȣ : " << num << endl;
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
	~Student() { cout << name  << " Student()�Ҹ�" << endl; }

	void PrintShow() {
		Person::PrintShow();
		cout << "���� : " << dahak << endl;

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
	~Employee() { cout << name << " Employee()�Ҹ�" << endl; }

	void PrintShow() {
		Person::PrintShow();
		cout << "ȸ�� : " << company << endl;
		cout << "���� : " << gross << endl;
	}
};
int main() {
	Student st1("ȫ�浿", 2018, "�ѱ����б�"); //����
	st1.PrintShow();
	cout << "=======================================" << endl;
	Student* st2 = new Student("ȫ���", 2021, "�̸�"); //����
	st2->PrintShow();
	delete st2;
	cout << "=======================================" << endl;

	Person st3("����ȭ", 2019);
	st3.PrintShow();
	cout << "=======================================" << endl;
	
	Person* st4 = new Student("���", 2020, "���̽���"); 
	st4->PrintShow();
	st4->pTest();
	//st4->sTest(); // �� ���� ������ �ƺ��ʿ� ���� ���� ���� ����ȯ �ϸ� �����ִ�
	delete st4;
	cout << "=======================================" << endl;

	Person* st5 = new Employee("���", 2000 , "īī��", 1000);
	st5->PrintShow();
	delete st5;
	cout << "=======================================" << endl;

	return 0;

}