#include <iostream>
using namespace std;
#define SUBJ 4
#define INWON 3

string subj_name[] = { "����","����","����","�ڹ�","c���" };

class Student {
private:

	char number[4];
	int rank;
	char name[10];
	char grade;
	int subj[SUBJ + 1]; //tot
	
	double avg;
	

public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1;
		cout << "����" << endl;
	}
	~Student() {
		cout << "�Ҹ�" << endl;
	}
	void input(int i);
	void calc();
	void print();
	int getTot() {
		return subj[SUBJ];
	}
	void addRank() {
		rank++;
	}
	
};
void Student::input(int i) {
	cout << "�й��� �Է��ϼ��� : ";
	cin >> number;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	for (int i = 0; i < SUBJ; i++) {

		cout << subj_name[i]<<" ������ �Է��ϼ��� : ";
		cin >> subj[i];
		while (subj[i] < 0 || subj[i] > 100) {
			cout << subj_name[i]<<" ���� �ٽ� �Է� : ";
			cin >> subj[i];
		}
	}

}


void Student::calc() {

	for (int i = 0; i < SUBJ; i++)
		subj[SUBJ] += subj[i];
	avg = (double)subj[SUBJ] / SUBJ;
	switch ((int)avg/10) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}
}

void Student::print() {
	cout << " �̸� : " << name << "   ";
	for (int i = 0; i <= SUBJ; i++) {
		cout << subj[i] << "\t";
	}
	cout << " ��� : " << avg << "\t" << " ��� : " << grade << "   " << " ���� : " << rank << endl;
}

void ranking(Student* stud) {

	for (int i = 0; i <= INWON - 1; i++)
		for (int j = i + 1; j < INWON; j++)
			if (stud[i].getTot() < stud[j].getTot()) stud[i].addRank();
			else if (stud[i].getTot() > stud[j].getTot()) stud[j].addRank();

}

int main() {

	//Student stu[INWON];
	//����
	

	Student* stu = new Student[INWON]; //������ ȣ��
	Student* stu[INWON]; //������ ȣ�� X!!
	cout << sizeof(stu) << endl;   //12
	cout << sizeof(stu[0]) << endl;  //4
	cout << sizeof(*stu[0]) << endl;  //56

	
	//for () {
	//	stu[i] = new Student;
	//}

	/*
	* for (int i = 0; i < INWON; i++) {

		cout << (i + 1) << " ��° �л� �Է� : " << endl;
		stu[i].input(i);
		stu[i].calc();

	}
		ranking(stu);
		for (int i = 0; i < INWON; i++) {
			stu[i].print();
	}
	return 0;
	*/
}