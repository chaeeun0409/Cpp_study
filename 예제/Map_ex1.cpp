#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main() {
	map<string, int> Employees;
	map<string, int>::iterator ni;

	Employees["Mike C"] = 5234;
	Employees["Chalie M"] = 3374;
	Employees.insert(pair<string,int>("David D",1923));
	Employees.insert(map<string, int > ::value_type("John A", 7582));
	Employees.insert(make_pair("Peter Q", 5328));
	

	cout << Employees.size() << endl;
	cout << "======================================================" << endl;

	for (ni = Employees.begin(); ni != Employees.end(); ni++)   //������������ ����
		cout << (*ni).first << " " << (*ni).second << endl;
	cout << "======================================================" << endl;
	for (map<string, int>::reverse_iterator ni = Employees.rbegin(); ni != Employees.rend(); ni++)  //�������� ����
		cout << (*ni).first << " " << ni->second << endl;  //*.�� ->�� �ᵵ ����� ����
	return 0;
}