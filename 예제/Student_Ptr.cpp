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
		cout << " 생성 " << endl;

	}
	Student(int no, const char *pName) {
		nNo = no;
		sZname = new char[strlen(pName) + 1];
		cout << "이름 생성  " << endl;
		strcpy(sZname, pName);

	}
	Student(Student&S) :nNo(S.nNo){  //this->nNo = S.nNo 같다
		cout << " 생성 " << endl;
		//this->nNo = S.nNo;
		this->sZname = new char[strlen(S.sZname) + 1];
		cout << "이름 생성  " << endl;
		strcpy (this->sZname, S.sZname);
	}
	~Student() {
		cout << nNo << "해제되었습니다." << endl;
		cout << "이름 소멸" << endl;
		delete[] sZname;
		
	}

	void pirnt_Student(){
		if (sZname != NULL)
			cout << "번호 : " << nNo << " 이름 : " << sZname << endl;
		
	}
	Student& copy(Student &S) {  //깊은 복사를 하기위해 copy함수를 만들었다.
		if (&S != this) {
			this->nNo = S.nNo;
			if (this->sZname != NULL) {
				delete[] sZname;
				cout << "이름 소멸" << endl;
			}
			this->sZname = new char[strlen(S.sZname) + 1];
			cout << "이름 생성  " << endl;
			strcpy(this->sZname, S.sZname);
		}
		return *this;
	}
	Student& operator=(Student& S) {  // copy함수보다 가독성이 높다.
		return copy(S);
	}
};
int main() {
	Student a(1,"홍하나");
	Student b;
	a.pirnt_Student();

	b = a;
	a.pirnt_Student();
	b.pirnt_Student();

	a = a;
	a.pirnt_Student();
	
	strcpy(b.sZname, "홍길동");
	a.pirnt_Student();
	b.pirnt_Student();

	a.copy(a);
	a.pirnt_Student();

	Student c(2, "장발장");
	
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