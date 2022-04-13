#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<fstream>
#include <vector>
#include <algorithm>

using namespace std;

const char* file = "data1.txt";
int bslist[5] = { 230,210,190,170,150 };
class Employee {
protected:
	char* empNo;
	char* name;
	char basicSalary;
	Employee(char* id, char* name, char sal) {
		this->empNo = new char[strlen(id) + 1];
		strcpy(this->empNo, id);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basicSalary = sal;
	}
	char* getEmpNo() {
		return empNo;
	}
	virtual void print();
};
class Manager : public Employee {
	int managerPay;
public:
	Manager(char* id, char* name, char sal, int addM) : Employee(id, name, sal) {
		this->managerPay = addM;
	}
	void print() {
		int bs = bslist[basicSalary = 'A'];
		cout << empNo << "\n" << name << "\n" << bs << "\n" << managerPay << "\n" << bs + managerPay << endl;
	}
};
class SalesMan : public Employee {
	int salesPay;
public:
	SalesMan(char* id, char* name, char sal, int addM) : Employee(id, name, sal) {
		this->salesPay = addM;
	}
	void print() {
		int bs = bslist[basicSalary = 'A'];
		cout << empNo << "\n" << name << "\n" << bs << "\n" << salesPay << "\n" << bs + salesPay << endl;
	}
};
class Temporary : public Employee {
	int bounsPay;
	int year;
public:
	Temporary(char* id, char* name, char sal, int addM) : Employee(id, name, sal) {
		this->bounsPay = addM;
		this->year = addM;
	}
	void print() {
		int bs = bslist[basicSalary = 'A'];
		cout << empNo << "\n" << name << "\n" << bs << "\n" << bounsPay << "\n" << bs + bounsPay << endl;
	}
};
int main() {
	ifstream fin(file);
	/*vector<Employee> e;
	vector<SalesMan> s;
	vector<Temporary> t;*/
	char ch;
	int line = 1;
	while (fin.eof()) {
		fin.get(ch);
		if (ch == '\n')line++;
	}
	fin.clear();
	fin.seekg(0, ios::beg);
	//vector<Employee> emp;
	vector <Employee*>emp(line);
	char id[20];
	char name[20];
	char a;
	int b;
	int c;
	int i = 0;
	while (fin >> id >> name >> a >> b >> c) {
		switch (id[2]) {
		case 'R':
			switch (id[3]) {
			case 'M':
			{

				emp[i] = new Manager(id, name, a, b);
				break;
			}
			case 'S':
			{
				SalesMan ss(id, name, a, b);
				emp[i] = new SalesMan(id, name, a, b);
				break;
			}
			} // r
			break;
		case 'T':
			emp[i] = new Temporary(id, name, a, b);
			break;
		} //
		i++;
		cout << "Manager********************************************************************************" << endl;
		cout << "사번\t이 름\t기본급\t관리수당\t총수령액" << endl;
		for (auto& c : emp)
			if ((emp[j]->getEmpNo())[2] == 'R' && (emp[j]->getEmpNo())[3] == 'M ' ) {
				cout << "***********" << endl;
				c->print();
			}
	}
	

}