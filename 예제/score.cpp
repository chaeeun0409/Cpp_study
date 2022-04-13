#include <iostream>
using namespace std;
#define SUBJ 4
#define INWON 3

string subj_name[] = { "국어","영어","수학","자바","c언어" };

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
		cout << "생성" << endl;
	}
	~Student() {
		cout << "소멸" << endl;
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
	cout << "학번을 입력하세요 : ";
	cin >> number;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	for (int i = 0; i < SUBJ; i++) {

		cout << subj_name[i]<<" 점수를 입력하세요 : ";
		cin >> subj[i];
		while (subj[i] < 0 || subj[i] > 100) {
			cout << subj_name[i]<<" 점수 다시 입력 : ";
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
	cout << " 이름 : " << name << "   ";
	for (int i = 0; i <= SUBJ; i++) {
		cout << subj[i] << "\t";
	}
	cout << " 평균 : " << avg << "\t" << " 등급 : " << grade << "   " << " 석차 : " << rank << endl;
}

void ranking(Student* stud) {

	for (int i = 0; i <= INWON - 1; i++)
		for (int j = i + 1; j < INWON; j++)
			if (stud[i].getTot() < stud[j].getTot()) stud[i].addRank();
			else if (stud[i].getTot() > stud[j].getTot()) stud[j].addRank();

}

int main() {

	//Student stu[INWON];
	//동적
	

	Student* stu = new Student[INWON]; //생성자 호출
	Student* stu[INWON]; //생성자 호출 X!!
	cout << sizeof(stu) << endl;   //12
	cout << sizeof(stu[0]) << endl;  //4
	cout << sizeof(*stu[0]) << endl;  //56

	
	//for () {
	//	stu[i] = new Student;
	//}

	/*
	* for (int i = 0; i < INWON; i++) {

		cout << (i + 1) << " 번째 학생 입력 : " << endl;
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