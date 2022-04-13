#include <iostream>
using namespace std;

class Student {
public:
	int nNo;
	char* szName;

	Student() {
		nNo = 0;
		szName = 0;
		cout << "�Ű����� ���� ������" << endl;
	}

	Student(int no, const char* pname) {
		nNo = no;
		szName = new char(strlen(pname) + 1);
		strcpy(szName, pname);
		cout << "�Ű����� �� ���� ������" << endl;
	}

	void printStudent() {
		if (szName ) {
			cout << nNo << ", " << szName << endl;

		}
	}

	~Student() {
		if (szName) {
			cout << "�Ҹ� : " << szName << endl;
			delete[] szName;
		}
		else
		{
			cout << "�Ҹ� : " << szName << endl;
		}
	}
};

int main() {
	Student st1; //<=�Ű����� ���°�  
	cout << sizeof(st1) << endl;
	st1.nNo = 1;
	st1.szName = new char[20];
	strcpy(st1.szName, "���ϳ�");


	Student st2(2, "ȫ�浿");
	st1.printStudent();
	st2.printStudent();

	Student* st3 = new Student();
	st3->printStudent();
	delete st3;
}
//��ü�� �Ҹ�Ǵ� ���� ? �⺻ �ڷ��� ����, ����ü ������ �Ҹ�Ǵ� ������ �����ϴ�
// �Լ� ���� ����� ��ü :  �Լ� ȣ���� ������ �Ҹ�ȴ�
// ���������� ����� ��ü :  ���α׷��� ������ �� �Ҹ�ȴ�, �̷��� ��ü ������ ��(����)����

// default �Ҹ���
// ��ü�� �Ҹ� ������ ������Ű�� ���� �Ҹꤸ��
// �Ҹ����� ����� ����
// �����ڿ��� �޸� ���� �Ҵ��� �ϴ� ���
