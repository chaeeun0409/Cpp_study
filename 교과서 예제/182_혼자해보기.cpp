#include <iostream>
using namespace std;
class Shape {
public:
	void paintfunc1() { paintfunc2(); }
	void paintfunc2() { cout << "Shape function called" << endl; }

};
class Circle : public Shape {
public:
	void paintfunc2() {
		cout << "Circle function called" << endl;
	}
};
int main() {
	Circle c1; 
	c1.paintfunc2();  //Circle

	Shape s1;
	Shape* p = &s1;

	p->paintfunc2();  //Shape
	p = &c1;
	p->paintfunc2(); //Shape
	p->paintfunc1(); //Shape
	return 0;
}