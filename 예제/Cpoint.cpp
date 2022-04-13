#include <iostream>
using namespace std;

class Cpoint {
private:
	int* x;
	int* y;
	
public:
	Cpoint(int *x, int* y) {
		this->x = x;
		this->y = y;
	}
	Cpoint(const Cpoint& p) {
		x = p.x;
		y = p.y;
	}
	
	int getX() { return *x; }
	int getY() { return *y; }

};
class rect {
	int Cp1, Cp2;

	rect() {

	}
	rect(int Cp1, int Cp2) {
		this->Cp1 = Cp1;
		this->Cp2 = Cp2;

	}
	void arer() {
		return()
	}
};
int main() {
	Cpoint point1(10, 20);
	Cpoint point2(20, 15);
	rect r.arer;
	return 0;
}