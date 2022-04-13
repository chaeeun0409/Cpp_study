#include <iostream>
#include <string.h>
using namespace std;
class Student {
public:
	int nNo;
	char* sZname;

	Student() {
		nNo = 0;
		sZname = NULL;
		cout << " ���� " << endl;

	}
	Student(int no, const char *pName) {
		nNo = no;
		sZname = new char[strlen(pName) + 1];
		cout << "�̸� ����  " << endl;
		strcpy(sZname, pName);

	}
	Student(Student&S) :nNo(S.nNo){  //this->nNo = S.nNo ����
		cout << " ���� " << endl;
		//this->nNo = S.nNo;
		this->sZname = new char[strlen(S.sZname) + 1];
		cout << "�̸� ����  " << endl;
		strcpy (this->sZname, S.sZname);
	}
	~Student() {
		cout << nNo << "�����Ǿ����ϴ�." << endl;
		cout << "�̸� �Ҹ�" << endl;
		delete[] sZname;
		
	}

	void pirnt_Student(){
		if (sZname != NULL)
			cout << "��ȣ : " << nNo << " �̸� : " << sZname << endl;
		
	}
	Student& copy(Student &S) {  //���� ���縦 �ϱ����� copy�Լ��� �������.
		if (&S != this) {
			this->nNo = S.nNo;
			if (this->sZname != NULL) {
				delete[] sZname;
				cout << "�̸� �Ҹ�" << endl;
			}
			this->sZname = new char[strlen(S.sZname) + 1];
			cout << "�̸� ����  " << endl;
			strcpy(this->sZname, S.sZname);
		}
		return *this;
	}
	Student& operator=(Student& S) {  // copy�Լ����� �������� ����.
		return copy(S);
	}
};
int main() {
	Student a(1,"ȫ�ϳ�");
	Student b;
	a.pirnt_Student();

	b = a;
	a.pirnt_Student();
	b.pirnt_Student();

	a = a;
	a.pirnt_Student();
	
	strcpy(b.sZname, "ȫ�浿");
	a.pirnt_Student();
	b.pirnt_Student();

	a.copy(a);
	a.pirnt_Student();

	Student c(2, "�����");
	
	c = a;
	a.pirnt_Student();
	c.pirnt_Student();

	Student d;
	Student e;
	d = e = a;
	d.pirnt_Student();
	e.pirnt_Student();
	a.pirnt_Student();
	Student f=a;
	f.pirnt_Student();
	a.pirnt_Student();
	return 0;

}