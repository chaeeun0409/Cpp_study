#include <iostream>
#include <string>
#include <map>
using namespace std;

class Person {
public:
	string firstName,lastName;
	Person(const string& firstName, const string& lastName) {
		this->firstName = firstName;
		this->lastName = lastName;
	}
	friend class PersonLessThan;
};

class PersonLessThan {
public:
	bool operator()(const Person& p1, const Person& p2)const {
		if (p1.lastName < p2.lastName)
			return true;
		else if (p1.lastName == p2.lastName)
			return p1.firstName < p2.firstName;
		else
			return false;

	}
};

int main() {
	map<Person, bool, PersonLessThan> m;
	Person p1("���", "��");
	Person p2("��ȭ", "��");
	Person p3("�浿", "ȫ");
	Person p4("���ҹ�", "��");

	m[p1] = true;
	m[p2] = true;
	m[p3] = true;
	m[p4] = true;


	for(map<Person,bool>::iterator ii = m.begin(); ii != m.end(); ii++ )
		cout <<((*ii).first).firstName << " " << ((*ii).first).lastName << endl;
}

