//2115 ��ä��
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(int x, int y) : x(x), y(y) {

	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Circle {
	Point p;
	int r;
	const double PI = 3.141592;

public:
	Circle(Point& p, int r) : p(p), r(r) {
		cout << "�� ����" << endl;
	}
	void area() {
		cout << "���� ��ǥ( " << p.getX() << "," << p.getY() << " )�� �������� " << r << " �� ���� ���� : " << (r * r * PI) << endl;
	}

	~Circle() {
		cout << "�� �Ҹ�" << endl;
	}
};

int main() {
	int x, y, r;
	srand((unsigned)time(0));
	x = rand() % 101;
	y = rand() % 101;
	r = rand() & 10 + 1;

	Point p(x, y);
	Circle c(p, r);
	c.area();

	return 0;
}