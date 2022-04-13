#include <iostream>
using namespace std;

class Person {
public:
	void PrintMethod() {
		std::cout << "Person's Method" << std::endl;
	}
};
class Student : public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();
		std::cout << "Child Method" << std::endl;
	}
};
int main() {
	Student student;
	student.PrintMethod();
	return 0;
}