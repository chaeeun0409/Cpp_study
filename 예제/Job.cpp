#include <iostream>
using namespace std;

class Job {
public:
	char name[40];
	double sal;
	int grade;
};
template <typename T>
void swapTest(T& i, T& j) {
	T temp;
	temp = i;
	i = j;
	j = temp;
}

template<>
void swapTest(Job& a1, Job& a2) {    //sal grade

	double sal = a1.sal;
	a1.sal = a2.sal;
	a1.sal = sal;

	int grade = a1.grade;
	a1.grade = a2.grade;
	a1.grade = grade;
}

int main() {
	int i = 10;
	int j = 20;
	cout << i <<" "<< j << endl;
	swapTest<>(i, j);
	cout << i << " " << j << endl;
	cout << "---------------" << endl;

	Job j1 = { "미림",187.2, 7 };
	Job j2 = { "마이스터", 200.5, 9 };
	cout << j1.name << endl;
	cout << j1.sal << endl;
	cout << j1.grade << endl;
	cout << "---------------" << endl;
	cout << j2.name << endl;
	cout << j2.sal << endl;
	cout << j2.grade << endl;
	cout << "---------------" << endl; 
	swapTest(j1, j2);
	cout << j1.name << endl;
	cout << j1.sal << endl;
	cout << j1.grade << endl;
	cout << "---------------" << endl;
	cout << j2.name << endl;
	cout << j2.sal << endl;
	cout << j2.grade << endl;
	cout << "---------------" << endl;
	
	
}