#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main() {
	map<int, string> Employees;
	map<int,string>::iterator ni;
	Employees[5234] = "Mike C";
	Employees[3374] = "Chalie M";
	Employees[1923] = "David D";
	Employees[7582] = "John A";
	Employees[5328] = "Peter Q";

	cout << Employees[3374] << endl;
	cout << Employees.size() << endl;
	cout << "======================================================" << endl;

	for (ni = Employees.begin(); ni != Employees.end(); ni++)   //������������ ����
		cout <<(*ni).first << " " <<(*ni).second << endl;
	cout << "======================================================"<<endl;
	for (map<int, string>::reverse_iterator ni = Employees.rbegin(); ni != Employees.rend(); ni++)  //�������� ����
		cout << (*ni).first << " " << ni->second << endl;  //*.�� ->�� �ᵵ ����� ����
	return 0;
}